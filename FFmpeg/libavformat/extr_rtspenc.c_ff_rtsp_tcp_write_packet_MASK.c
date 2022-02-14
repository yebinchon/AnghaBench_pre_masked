
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_7__ {int rtsp_hd_out; } ;
struct TYPE_6__ {int interleaved_max; int interleaved_min; TYPE_3__* transport_priv; } ;
typedef TYPE_1__ RTSPStream ;
typedef TYPE_2__ RTSPState ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (char) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char**) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (int ,char*,int) ;

int FUNC_7(AVFormatContext *VAR_1, RTSPStream *VAR_2)
{
    RTSPState *VAR_3 = VAR_1->priv_data;
    AVFormatContext *VAR_4 = VAR_2->transport_priv;
    uint8_t *VAR_5, *VAR_6;
    int VAR_7;
    uint8_t *VAR_8, *VAR_9;

    VAR_7 = FUNC_4(VAR_4->pb, &VAR_5);
    VAR_4->pb = ((void*)0);
    VAR_6 = VAR_5;
    while (VAR_7 > 4) {
        uint32_t VAR_10 = FUNC_0(VAR_6);
        int VAR_11;





        VAR_9 = VAR_8 = VAR_6;
        VAR_6 += 4;
        VAR_7 -= 4;
        if (VAR_10 > VAR_7 || VAR_10 < 2)
            break;
        if (FUNC_2(VAR_6[1]))
            VAR_11 = VAR_2->interleaved_max;
        else
            VAR_11 = VAR_2->interleaved_min;
        VAR_8[0] = '$';
        VAR_8[1] = VAR_11;
        FUNC_1(VAR_8 + 2, VAR_10);
        FUNC_6(VAR_3->rtsp_hd_out, VAR_9, 4 + VAR_10);
        VAR_6 += VAR_10;
        VAR_7 -= VAR_10;
    }
    FUNC_3(VAR_5);
    return FUNC_5(&VAR_4->pb, VAR_0);
}
