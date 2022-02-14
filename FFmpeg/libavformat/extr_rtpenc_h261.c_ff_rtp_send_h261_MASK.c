
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_1__* priv_data; } ;
struct TYPE_6__ {int* buf; scalar_t__ max_payload_size; int cur_timestamp; int timestamp; } ;
typedef TYPE_1__ RTPMuxContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (TYPE_2__*,int*,size_t,int) ;
 int* FUNC_3 (int const*,int const*) ;
 int FUNC_4 (int*,int const*,int) ;

void FUNC_5(AVFormatContext *VAR_2, const uint8_t *VAR_3, int VAR_4)
{
    int VAR_5;
    int VAR_6;
    RTPMuxContext *VAR_7 = VAR_2->priv_data;


    VAR_7->timestamp = VAR_7->cur_timestamp;


    while (VAR_4 > 0) {
        VAR_7->buf[0] = 1;
        VAR_7->buf[1] = 0;
        VAR_7->buf[2] = 0;
        VAR_7->buf[3] = 0;
        if (VAR_4 < 2 || VAR_3[0] != 0 || VAR_3[1] != 1) {




            FUNC_1(VAR_2, VAR_0,
                   "RTP/H.261 packet not cut at a GOB boundary, not signaled correctly\n");
        }

        VAR_5 = FUNC_0(VAR_7->max_payload_size - VAR_1, VAR_4);


        if (VAR_5 < VAR_4) {
            const uint8_t *VAR_8 = FUNC_3(VAR_3,
                                                                   VAR_3 + VAR_5);
            VAR_5 = VAR_8 - VAR_3;
        }


        VAR_6 = VAR_5 == VAR_4;


        FUNC_4(&VAR_7->buf[VAR_1], VAR_3, VAR_5);
        FUNC_2(VAR_2, VAR_7->buf, VAR_1 + VAR_5, VAR_6);

        VAR_3 += VAR_5;
        VAR_4 -= VAR_5;
    }
}
