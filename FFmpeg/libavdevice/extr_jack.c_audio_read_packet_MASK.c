
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct timespec {int tv_sec; int member_1; int member_0; } ;
typedef int errbuf ;
struct TYPE_8__ {TYPE_1__* priv_data; } ;
struct TYPE_7__ {int activated; int filled_pkts; scalar_t__ jack_xrun; scalar_t__ pkt_xrun; int client; int packet_count; int buffer_size; int sample_rate; } ;
typedef TYPE_1__ JackData ;
typedef int AVPacket ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int *,int,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,int ,char*,...) ;
 int FUNC_4 (int,char*,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,struct timespec*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_6, AVPacket *VAR_7)
{
    JackData *VAR_8 = VAR_6->priv_data;
    struct timespec VAR_9 = {0, 0};
    int VAR_10;





    if (!VAR_8->activated) {
        if (!FUNC_5(VAR_8->client)) {
            VAR_8->activated = 1;
            FUNC_3(VAR_6, VAR_1,
                   "JACK client registered and activated (rate=%dHz, buffer_size=%d frames)\n",
                   VAR_8->sample_rate, VAR_8->buffer_size);
        } else {
            FUNC_3(VAR_6, VAR_0, "Unable to activate JACK client\n");
            return FUNC_0(VAR_3);
        }
    }


    VAR_9.tv_sec = FUNC_2() / 1000000 + 2;
    if (FUNC_6(&VAR_8->packet_count, &VAR_9)) {
        if (VAR_5 == VAR_4) {
            FUNC_3(VAR_6, VAR_0,
                   "Input error: timed out when waiting for JACK process callback output\n");
        } else {
            char VAR_11[128];
            int VAR_12 = FUNC_0(VAR_5);
            FUNC_4(VAR_12, VAR_11, sizeof(VAR_11));
            FUNC_3(VAR_6, VAR_0, "Error while waiting for audio packet: %s\n",
                   VAR_11);
        }
        if (!VAR_8->client)
            FUNC_3(VAR_6, VAR_0, "Input error: JACK server is gone\n");

        return FUNC_0(VAR_3);
    }

    if (VAR_8->pkt_xrun) {
        FUNC_3(VAR_6, VAR_2, "Audio packet xrun\n");
        VAR_8->pkt_xrun = 0;
    }

    if (VAR_8->jack_xrun) {
        FUNC_3(VAR_6, VAR_2, "JACK xrun\n");
        VAR_8->jack_xrun = 0;
    }


    FUNC_1(VAR_8->filled_pkts, VAR_7, sizeof(*VAR_7), ((void*)0));

    if ((VAR_10 = FUNC_7(VAR_8, VAR_6)))
        return VAR_10;

    return 0;
}
