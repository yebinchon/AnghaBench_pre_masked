
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {TYPE_2__* priv_data; } ;
struct TYPE_9__ {scalar_t__ state; scalar_t__ transport; int nb_rtsp_streams; TYPE_1__** rtsp_streams; int rtsp_hd; } ;
struct TYPE_8__ {int interleaved_min; int interleaved_max; } ;
typedef TYPE_1__ RTSPStream ;
typedef TYPE_2__ RTSPState ;
typedef int RTSPMessageHeader ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ,char*,...) ;
 scalar_t__ FUNC_2 (int*,int,int*,int *,int *,int *,int *) ;
 int FUNC_3 (TYPE_3__*,int *,int *,int,int *) ;
 int FUNC_4 (int ,int*,int) ;

int FUNC_5(AVFormatContext *VAR_3, RTSPStream **VAR_4,
                            uint8_t *VAR_5, int VAR_6)
{
    RTSPState *VAR_7 = VAR_3->priv_data;
    int VAR_8, VAR_9, VAR_10, VAR_11;
    RTSPStream *VAR_12;

    FUNC_1(VAR_3, VAR_0, "tcp_read_packet:\n");
redo:
    for (;;) {
        RTSPMessageHeader VAR_13;

        VAR_11 = FUNC_3(VAR_3, &VAR_13, ((void*)0), 1, ((void*)0));
        if (VAR_11 < 0)
            return VAR_11;
        if (VAR_11 == 1)
            break;

        if (VAR_7->state != VAR_1)
            return 0;
    }
    VAR_11 = FUNC_4(VAR_7->rtsp_hd, VAR_5, 3);
    if (VAR_11 != 3)
        return -1;
    VAR_8 = VAR_5[0];
    VAR_9 = FUNC_0(VAR_5 + 1);
    FUNC_1(VAR_3, VAR_0, "id=%d len=%d\n", VAR_8, VAR_9);
    if (VAR_9 > VAR_6 || VAR_9 < 8)
        goto redo;

    VAR_11 = FUNC_4(VAR_7->rtsp_hd, VAR_5, VAR_9);
    if (VAR_11 != VAR_9)
        return -1;
    if (VAR_7->transport == VAR_2 &&
        FUNC_2(VAR_5, VAR_9, &VAR_8, ((void*)0), ((void*)0), ((void*)0), ((void*)0)) < 0)
        return -1;


    for (VAR_10 = 0; VAR_10 < VAR_7->nb_rtsp_streams; VAR_10++) {
        VAR_12 = VAR_7->rtsp_streams[VAR_10];
        if (VAR_8 >= VAR_12->interleaved_min &&
            VAR_8 <= VAR_12->interleaved_max)
            goto found;
    }
    goto redo;
found:
    *VAR_4 = VAR_12;
    return VAR_9;
}
