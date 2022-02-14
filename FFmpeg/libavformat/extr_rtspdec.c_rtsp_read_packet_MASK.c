
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef enum AVDiscard { ____Placeholder_AVDiscard } AVDiscard ;
typedef int cmd ;
struct TYPE_19__ {int nb_streams; TYPE_1__** streams; TYPE_3__* priv_data; } ;
struct TYPE_18__ {scalar_t__ status_code; } ;
struct TYPE_16__ {scalar_t__ stale; } ;
struct TYPE_17__ {scalar_t__ server_type; scalar_t__* real_setup; int need_subscription; char* last_subscription; int nb_rtsp_streams; scalar_t__ state; scalar_t__ lower_transport; int lower_transport_mask; char* session_id; int rtsp_flags; int last_cmd_time; int timeout; TYPE_2__ auth_state; int control_uri; scalar_t__ get_parameter_supported; int packets; int real_setup_cache; } ;
struct TYPE_15__ {scalar_t__ discard; int id; } ;
typedef TYPE_3__ RTSPState ;
typedef TYPE_4__ RTSPMessageHeader ;
typedef int AVPacket ;
typedef TYPE_5__ AVFormatContext ;


 scalar_t__ AVDISCARD_ALL ;
 int AVERROR (int ) ;
 int AVERROR_INVALIDDATA ;
 int AV_LOG_WARNING ;
 int ETIMEDOUT ;
 int RTSP_FLAG_LISTEN ;
 int RTSP_LOWER_TRANSPORT_TCP ;
 scalar_t__ RTSP_LOWER_TRANSPORT_UDP ;
 scalar_t__ RTSP_SERVER_REAL ;
 scalar_t__ RTSP_SERVER_WMS ;
 scalar_t__ RTSP_STATE_IDLE ;
 scalar_t__ RTSP_STATE_STREAMING ;
 scalar_t__ RTSP_STATUS_OK ;
 int av_gettime_relative () ;
 int av_log (TYPE_5__*,int ,char*) ;
 int av_strlcat (char*,char*,int) ;
 int av_strlcatf (char*,int,char*,char*) ;
 int ff_rdt_subscribe_rule (char*,int,int,int) ;
 int ff_rtsp_averror (scalar_t__,int ) ;
 int ff_rtsp_fetch_packet (TYPE_5__*,int *) ;
 int ff_rtsp_send_cmd (TYPE_5__*,char*,int ,char*,TYPE_4__*,int *) ;
 int ff_rtsp_send_cmd_async (TYPE_5__*,char*,int ,int *) ;
 scalar_t__ memcmp (scalar_t__*,int ,int) ;
 int memcpy (int ,scalar_t__*,int) ;
 scalar_t__ resetup_tcp (TYPE_5__*) ;
 scalar_t__ rtsp_read_pause (TYPE_5__*) ;
 scalar_t__ rtsp_read_play (TYPE_5__*) ;
 int snprintf (char*,int,char*,...) ;

__attribute__((used)) static int rtsp_read_packet(AVFormatContext *s, AVPacket *pkt)
{
    RTSPState *rt = s->priv_data;
    int ret;
    RTSPMessageHeader reply1, *reply = &reply1;
    char cmd[1024];

retry:
    if (rt->server_type == RTSP_SERVER_REAL) {
        int i;

        for (i = 0; i < s->nb_streams; i++)
            rt->real_setup[i] = s->streams[i]->discard;

        if (!rt->need_subscription) {
            if (memcmp (rt->real_setup, rt->real_setup_cache,
                        sizeof(enum AVDiscard) * s->nb_streams)) {
                snprintf(cmd, sizeof(cmd),
                         "Unsubscribe: %s\r\n",
                         rt->last_subscription);
                ff_rtsp_send_cmd(s, "SET_PARAMETER", rt->control_uri,
                                 cmd, reply, ((void*)0));
                if (reply->status_code != RTSP_STATUS_OK)
                    return ff_rtsp_averror(reply->status_code, AVERROR_INVALIDDATA);
                rt->need_subscription = 1;
            }
        }

        if (rt->need_subscription) {
            int r, rule_nr, first = 1;

            memcpy(rt->real_setup_cache, rt->real_setup,
                   sizeof(enum AVDiscard) * s->nb_streams);
            rt->last_subscription[0] = 0;

            snprintf(cmd, sizeof(cmd),
                     "Subscribe: ");
            for (i = 0; i < rt->nb_rtsp_streams; i++) {
                rule_nr = 0;
                for (r = 0; r < s->nb_streams; r++) {
                    if (s->streams[r]->id == i) {
                        if (s->streams[r]->discard != AVDISCARD_ALL) {
                            if (!first)
                                av_strlcat(rt->last_subscription, ",",
                                           sizeof(rt->last_subscription));
                            ff_rdt_subscribe_rule(
                                rt->last_subscription,
                                sizeof(rt->last_subscription), i, rule_nr);
                            first = 0;
                        }
                        rule_nr++;
                    }
                }
            }
            av_strlcatf(cmd, sizeof(cmd), "%s\r\n", rt->last_subscription);
            ff_rtsp_send_cmd(s, "SET_PARAMETER", rt->control_uri,
                             cmd, reply, ((void*)0));
            if (reply->status_code != RTSP_STATUS_OK)
                return ff_rtsp_averror(reply->status_code, AVERROR_INVALIDDATA);
            rt->need_subscription = 0;

            if (rt->state == RTSP_STATE_STREAMING)
                rtsp_read_play (s);
        }
    }

    ret = ff_rtsp_fetch_packet(s, pkt);
    if (ret < 0) {
        if (ret == AVERROR(ETIMEDOUT) && !rt->packets) {
            if (rt->lower_transport == RTSP_LOWER_TRANSPORT_UDP &&
                rt->lower_transport_mask & (1 << RTSP_LOWER_TRANSPORT_TCP)) {
                RTSPMessageHeader reply1, *reply = &reply1;
                av_log(s, AV_LOG_WARNING, "UDP timeout, retrying with TCP\n");
                if (rtsp_read_pause(s) != 0)
                    return -1;


                if (rt->server_type == RTSP_SERVER_REAL)
                    ff_rtsp_send_cmd(s, "TEARDOWN", rt->control_uri, ((void*)0),
                                     reply, ((void*)0));
                rt->session_id[0] = '\0';
                if (resetup_tcp(s) == 0) {
                    rt->state = RTSP_STATE_IDLE;
                    rt->need_subscription = 1;
                    if (rtsp_read_play(s) != 0)
                        return -1;
                    goto retry;
                }
            }
        }
        return ret;
    }
    rt->packets++;

    if (!(rt->rtsp_flags & RTSP_FLAG_LISTEN)) {

        if ((av_gettime_relative() - rt->last_cmd_time) / 1000000 >= rt->timeout / 2 ||
            rt->auth_state.stale) {
            if (rt->server_type == RTSP_SERVER_WMS ||
                (rt->server_type != RTSP_SERVER_REAL &&
                 rt->get_parameter_supported)) {
                ff_rtsp_send_cmd_async(s, "GET_PARAMETER", rt->control_uri, ((void*)0));
            } else {
                ff_rtsp_send_cmd_async(s, "OPTIONS", rt->control_uri, ((void*)0));
            }



            rt->auth_state.stale = 0;
        }
    }

    return 0;
}
