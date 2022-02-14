
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ pb; scalar_t__ oformat; TYPE_2__* priv_data; } ;
struct TYPE_12__ {int nb_rtsp_streams; scalar_t__ lower_transport; scalar_t__ transport; TYPE_1__** rtsp_streams; } ;
struct TYPE_11__ {int * rtp_handle; TYPE_3__* transport_priv; } ;
typedef TYPE_1__ RTSPStream ;
typedef TYPE_2__ RTSPState ;
typedef TYPE_3__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_6 (scalar_t__*) ;
 int FUNC_7 (int *) ;

void FUNC_8(AVFormatContext *VAR_5, int VAR_6)
{
    RTSPState *VAR_7 = VAR_5->priv_data;
    int VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_7->nb_rtsp_streams; VAR_8++) {
        RTSPStream *VAR_9 = VAR_7->rtsp_streams[VAR_8];
        if (!VAR_9)
            continue;
        if (VAR_9->transport_priv) {
            if (VAR_5->oformat) {
                AVFormatContext *VAR_10 = VAR_9->transport_priv;
                FUNC_0(VAR_10);
                if (VAR_7->lower_transport == VAR_2) {
                    if (VAR_1 && VAR_10->pb && VAR_6)
                        FUNC_5(VAR_5, VAR_9);
                    FUNC_6(&VAR_10->pb);
                } else {
                    FUNC_2(&VAR_10->pb);
                }
                FUNC_1(VAR_10);
            } else if (VAR_0 && VAR_7->transport == VAR_3)
                FUNC_3(VAR_9->transport_priv);
            else if (VAR_0 && VAR_7->transport == VAR_4)
                FUNC_4(VAR_9->transport_priv);
        }
        VAR_9->transport_priv = ((void*)0);
        if (VAR_9->rtp_handle)
            FUNC_7(VAR_9->rtp_handle);
        VAR_9->rtp_handle = ((void*)0);
    }
}
