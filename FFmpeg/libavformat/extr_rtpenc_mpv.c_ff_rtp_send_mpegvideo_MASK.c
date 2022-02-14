
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int max_payload_size; int* buf; int cur_timestamp; int timestamp; } ;
typedef TYPE_1__ RTPMuxContext ;
typedef TYPE_2__ AVFormatContext ;


 int* FUNC_0 (int const*,int const*,int*) ;
 int FUNC_1 (TYPE_2__*,int*,int,int) ;
 int FUNC_2 (int*,int const*,int) ;

void FUNC_3(AVFormatContext *VAR_0, const uint8_t *VAR_1, int VAR_2)
{
    RTPMuxContext *VAR_3 = VAR_0->priv_data;
    int VAR_4, VAR_5, VAR_6;
    uint8_t *VAR_7;
    const uint8_t *VAR_8 = VAR_1 + VAR_2;
    int VAR_9, VAR_10, VAR_11, VAR_12;

    VAR_6 = VAR_3->max_payload_size;
    VAR_9 = 1;
    VAR_10 = 0;
    VAR_11 = 0;
    VAR_12 = 0;

    while (VAR_2 > 0) {
        int VAR_13;

        VAR_13 = 0;
        VAR_4 = VAR_6 - 4;

        if (VAR_4 >= VAR_2) {
            VAR_4 = VAR_2;
            VAR_10 = 1;
        } else {
            const uint8_t *VAR_14, *VAR_15;
            int VAR_16;

            VAR_15 = VAR_1;
            while (1) {
                VAR_16 = -1;
                VAR_14 = FUNC_0(VAR_15, VAR_8, &VAR_16);
                if((VAR_16 & 0xFFFFFF00) == 0x100) {

                    if (VAR_16 == 0x100) {
                        VAR_11 = (VAR_14[1] & 0x38) >> 3;
                        VAR_12 = (int)VAR_14[0] << 2 | VAR_14[1] >> 6;
                    }
                    if (VAR_16 == 0x1B8) {
                        VAR_13 = 1;
                    }

                    if (VAR_14 - VAR_1 - 4 <= VAR_4) {

                        if (VAR_9 == 0) {

                            VAR_10 = 1;
                            VAR_4 = VAR_14 - VAR_1 - 4;
                            break;
                        }
                        VAR_15 = VAR_14;
                    } else {
                        if ((VAR_15 - VAR_1 > 4) && (VAR_14 - VAR_15 < VAR_6)) {
                            VAR_4 = VAR_15 - VAR_1 - 4;
                            VAR_10 = 1;
                        }
                        break;
                    }
                } else {
                    break;
                }
            }
        }

        VAR_5 = 0;
        VAR_5 |= VAR_12 << 16;
        VAR_5 |= VAR_13 << 13;
        VAR_5 |= VAR_9 << 12;
        VAR_5 |= VAR_10 << 11;
        VAR_5 |= VAR_11 << 8;

        VAR_7 = VAR_3->buf;
        *VAR_7++ = VAR_5 >> 24;
        *VAR_7++ = VAR_5 >> 16;
        *VAR_7++ = VAR_5 >> 8;
        *VAR_7++ = VAR_5;

        FUNC_2(VAR_7, VAR_1, VAR_4);
        VAR_7 += VAR_4;


        VAR_3->timestamp = VAR_3->cur_timestamp;
        FUNC_1(VAR_0, VAR_3->buf, VAR_7 - VAR_3->buf, (VAR_4 == VAR_2));

        VAR_1 += VAR_4;
        VAR_2 -= VAR_4;
        VAR_9 = VAR_10;
        VAR_10 = 0;
    }
}
