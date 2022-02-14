
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int WMACoef ;
struct TYPE_3__ {int table; } ;
typedef TYPE_1__ VLC ;
typedef int GetBitContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int ) ;

int FUNC_5(AVCodecContext *VAR_3, GetBitContext *VAR_4,
                            VLC *VAR_5, const float *VAR_6,
                            const uint16_t *VAR_7, int VAR_8,
                            WMACoef *VAR_9, int VAR_10, int VAR_11,
                            int VAR_12, int VAR_13,
                            int VAR_14)
{
    int VAR_15, VAR_16, VAR_17;
    const uint32_t *VAR_18 = (const uint32_t *) VAR_6;
    uint32_t *VAR_19 = (uint32_t *) VAR_9;
    const unsigned int VAR_20 = VAR_12 - 1;
    for (; VAR_10 < VAR_11; VAR_10++) {
        VAR_15 = FUNC_4(VAR_4, VAR_5->table, VAR_1, VAR_2);
        if (VAR_15 > 1) {

            VAR_10 += VAR_7[VAR_15];
            VAR_17 = FUNC_3(VAR_4) - 1;
            VAR_19[VAR_10 & VAR_20] = VAR_18[VAR_15] ^ (VAR_17 & 0x80000000);
        } else if (VAR_15 == 1) {

            break;
        } else {

            if (!VAR_8) {
                VAR_16 = FUNC_2(VAR_4, VAR_14);


                VAR_10 += FUNC_2(VAR_4, VAR_13);
            } else {
                VAR_16 = FUNC_1(VAR_4);

                if (FUNC_3(VAR_4)) {
                    if (FUNC_3(VAR_4)) {
                        if (FUNC_3(VAR_4)) {
                            FUNC_0(VAR_3, VAR_0,
                                   "broken escape sequence\n");
                            return -1;
                        } else
                            VAR_10 += FUNC_2(VAR_4, VAR_13) + 4;
                    } else
                        VAR_10 += FUNC_2(VAR_4, 2) + 1;
                }
            }
            VAR_17 = FUNC_3(VAR_4) - 1;
            VAR_9[VAR_10 & VAR_20] = (VAR_16 ^ VAR_17) - VAR_17;
        }
    }

    if (VAR_10 > VAR_11) {
        FUNC_0(VAR_3, VAR_0,
               "overflow (%d > %d) in spectral RLE, ignoring\n",
               VAR_10,
               VAR_11
              );
        return -1;
    }

    return 0;
}
