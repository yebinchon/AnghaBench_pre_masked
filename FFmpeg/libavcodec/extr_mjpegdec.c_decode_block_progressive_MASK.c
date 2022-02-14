
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef unsigned int int16_t ;
struct TYPE_6__ {int* permutated; } ;
struct TYPE_7__ {int gb; int avctx; TYPE_2__ scantable; TYPE_1__** vlcs; } ;
struct TYPE_5__ {int table; } ;
typedef TYPE_3__ MJpegDecodeContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int,int ,int *,int ,int,int) ;
 int FUNC_3 (int ,int *,int) ;
 int VAR_2 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int ,char*,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(MJpegDecodeContext *VAR_4, int16_t *VAR_5,
                                    uint8_t *VAR_6, int VAR_7,
                                    uint16_t *VAR_8,
                                    int VAR_9, int VAR_10, int VAR_11, int *VAR_12)
{
    int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    unsigned VAR_18;

    if (*VAR_12) {
        (*VAR_12)--;
        return 0;
    }

    {
        FUNC_5(VAR_3, &VAR_4->gb);
        for (VAR_14 = VAR_9; ; VAR_14++) {
            FUNC_6(VAR_3, &VAR_4->gb);
            FUNC_2(VAR_13, VAR_3, &VAR_4->gb, VAR_4->vlcs[2][VAR_7].table, 9, 2);

            VAR_17 = ((unsigned) VAR_13) >> 4;
            VAR_13 &= 0xF;
            if (VAR_13) {
                VAR_14 += VAR_17;
                if (VAR_13 > VAR_2 - 16)
                    FUNC_6(VAR_3, &VAR_4->gb);

                {
                    int VAR_19 = FUNC_1(VAR_3, &VAR_4->gb);
                    int VAR_20 = (~VAR_19) >> 31;
                    VAR_18 = (FUNC_4(VAR_20 ^ VAR_19,VAR_13) ^ VAR_20) - VAR_20;
                }

                FUNC_3(VAR_3, &VAR_4->gb, VAR_13);

                if (VAR_14 >= VAR_10) {
                    if (VAR_14 == VAR_10) {
                        VAR_15 = VAR_4->scantable.permutated[VAR_10];
                        VAR_5[VAR_15] = VAR_18 * (VAR_8[VAR_10] << VAR_11);
                        break;
                    }
                    FUNC_7(VAR_4->avctx, VAR_1, "error count: %d\n", VAR_14);
                    return VAR_0;
                }
                VAR_15 = VAR_4->scantable.permutated[VAR_14];
                VAR_5[VAR_15] = VAR_18 * (VAR_8[VAR_14] << VAR_11);
            } else {
                if (VAR_17 == 0xF) {
                    VAR_14 += 15;
                    if (VAR_14 >= VAR_10) {
                        FUNC_7(VAR_4->avctx, VAR_1, "ZRL overflow: %d\n", VAR_14);
                        return VAR_0;
                    }
                } else {
                    VAR_16 = (1 << VAR_17);
                    if (VAR_17) {
                        FUNC_6(VAR_3, &VAR_4->gb);
                        VAR_16 += FUNC_4(FUNC_1(VAR_3, &VAR_4->gb), VAR_17);
                        FUNC_3(VAR_3, &VAR_4->gb, VAR_17);
                    }
                    *VAR_12 = VAR_16 - 1;
                    break;
                }
            }
        }
        FUNC_0(VAR_3, &VAR_4->gb);
    }

    if (VAR_14 > *VAR_6)
        *VAR_6 = VAR_14;

    return 0;
}
