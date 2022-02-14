
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int url ;
struct TYPE_14__ {scalar_t__ start_time_realtime; char* url; int nb_streams; TYPE_2__* priv_data; } ;
struct TYPE_13__ {scalar_t__ status_code; } ;
struct TYPE_12__ {int control_uri; int nb_rtsp_streams; int rtsp_streams; } ;
struct TYPE_11__ {int stream_index; int control_url; } ;
typedef TYPE_1__ RTSPStream ;
typedef TYPE_2__ RTSPState ;
typedef TYPE_3__ RTSPMessageHeader ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_4__*,int ,char*,char*) ;
 void* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_4__**,int,char*,int) ;
 int FUNC_6 (int ,int,char*,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int *,int *,TYPE_1__*) ;
 int FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (TYPE_4__*,char*,int ,char*,TYPE_3__*,int *,char*,int ) ;
 int FUNC_11 (char*,int,char*,int *,char const*,int,int *) ;
 int FUNC_12 (char*) ;

int FUNC_13(AVFormatContext *VAR_6, const char *VAR_7)
{
    RTSPState *VAR_8 = VAR_6->priv_data;
    RTSPMessageHeader VAR_9, *VAR_10 = &VAR_9;
    int VAR_11;
    char *VAR_12;
    AVFormatContext VAR_13, *VAR_14[1];
    char VAR_15[1024];

    if (VAR_6->start_time_realtime == 0 || VAR_6->start_time_realtime == VAR_2)
        VAR_6->start_time_realtime = FUNC_2();


    VAR_12 = FUNC_4(VAR_5);
    if (!VAR_12)
        return FUNC_0(VAR_3);
    VAR_13 = *VAR_6;
    VAR_13.url = VAR_15;
    FUNC_11(VAR_15, sizeof(VAR_15),
                "rtsp", ((void*)0), VAR_7, -1, ((void*)0));
    VAR_14[0] = &VAR_13;
    if (FUNC_5(VAR_14, 1, VAR_12, VAR_5)) {
        FUNC_1(VAR_12);
        return VAR_0;
    }
    FUNC_3(VAR_6, VAR_1, "SDP:\n%s\n", VAR_12);
    FUNC_10(VAR_6, "ANNOUNCE", VAR_8->control_uri,
                                  "Content-Type: application/sdp\r\n",
                                  VAR_10, ((void*)0), VAR_12, FUNC_12(VAR_12));
    FUNC_1(VAR_12);
    if (VAR_10->status_code != VAR_4)
        return FUNC_9(VAR_10->status_code, VAR_0);


    for (VAR_11 = 0; VAR_11 < VAR_6->nb_streams; VAR_11++) {
        RTSPStream *VAR_16;

        VAR_16 = FUNC_4(sizeof(RTSPStream));
        if (!VAR_16)
            return FUNC_0(VAR_3);
        FUNC_8(&VAR_8->rtsp_streams, &VAR_8->nb_rtsp_streams, VAR_16);

        VAR_16->stream_index = VAR_11;

        FUNC_7(VAR_16->control_url, VAR_8->control_uri, sizeof(VAR_16->control_url));

        FUNC_6(VAR_16->control_url, sizeof(VAR_16->control_url),
                    "/streamid=%d", VAR_11);
    }

    return 0;
}
