
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int max_payload_size; scalar_t__* buf; int cur_timestamp; int timestamp; } ;
typedef TYPE_1__ RTPMuxContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int,int) ;
 scalar_t__* FUNC_1 (scalar_t__ const*,scalar_t__ const*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__*,int,int) ;
 int FUNC_3 (scalar_t__*,scalar_t__ const*,int) ;

void FUNC_4(AVFormatContext *VAR_0, const uint8_t *VAR_1, int VAR_2)
{
    RTPMuxContext *VAR_3 = VAR_0->priv_data;
    int VAR_4, VAR_5;
    uint8_t *VAR_6;

    VAR_5 = VAR_3->max_payload_size;

    while (VAR_2 > 0) {
        VAR_6 = VAR_3->buf;
        if (VAR_2 >= 2 && (VAR_1[0] == 0) && (VAR_1[1] == 0)) {
            *VAR_6++ = 0x04;
            VAR_1 += 2;
            VAR_2 -= 2;
        } else {
            *VAR_6++ = 0;
        }
        *VAR_6++ = 0;

        VAR_4 = FUNC_0(VAR_5 - 2, VAR_2);


        if (VAR_4 < VAR_2) {
            const uint8_t *VAR_7 = FUNC_1(VAR_1,
                                                                    VAR_1 + VAR_4);
            VAR_4 = VAR_7 - VAR_1;
        }

        FUNC_3(VAR_6, VAR_1, VAR_4);
        VAR_6 += VAR_4;


        VAR_3->timestamp = VAR_3->cur_timestamp;
        FUNC_2(VAR_0, VAR_3->buf, VAR_6 - VAR_3->buf, (VAR_4 == VAR_2));

        VAR_1 += VAR_4;
        VAR_2 -= VAR_4;
    }
}
