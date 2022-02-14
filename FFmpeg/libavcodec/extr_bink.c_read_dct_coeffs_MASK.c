
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int int32_t ;
struct TYPE_3__ {int avctx; } ;
typedef int GetBitContext ;
typedef TYPE_1__ BinkContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(BinkContext *VAR_2, GetBitContext *VAR_3, int32_t VAR_4[64],
                           const uint8_t *VAR_5, int *VAR_6,
                           int VAR_7[64], int VAR_8)
{
    int VAR_9[128];
    int VAR_10[128];
    int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    int VAR_17 = 64, VAR_18 = 64, VAR_19;
    int VAR_20 = 0;
    int VAR_21;

    if (FUNC_3(VAR_3) < 4)
        return VAR_0;

    VAR_9[VAR_18] = 4; VAR_10[VAR_18++] = 0;
    VAR_9[VAR_18] = 24; VAR_10[VAR_18++] = 0;
    VAR_9[VAR_18] = 44; VAR_10[VAR_18++] = 0;
    VAR_9[VAR_18] = 1; VAR_10[VAR_18++] = 3;
    VAR_9[VAR_18] = 2; VAR_10[VAR_18++] = 3;
    VAR_9[VAR_18] = 3; VAR_10[VAR_18++] = 3;

    for (VAR_13 = FUNC_1(VAR_3, 4) - 1; VAR_13 >= 0; VAR_13--) {
        VAR_19 = VAR_17;
        while (VAR_19 < VAR_18) {
            if (!(VAR_10[VAR_19] | VAR_9[VAR_19]) || !FUNC_2(VAR_3)) {
                VAR_19++;
                continue;
            }
            VAR_14 = VAR_9[VAR_19];
            VAR_15 = VAR_10[VAR_19];
            switch (VAR_15) {
            case 0:
                VAR_9[VAR_19] = VAR_14 + 4;
                VAR_10[VAR_19] = 1;
            case 2:
                if (VAR_15 == 2) {
                    VAR_9[VAR_19] = 0;
                    VAR_10[VAR_19++] = 0;
                }
                for (VAR_11 = 0; VAR_11 < 4; VAR_11++, VAR_14++) {
                    if (FUNC_2(VAR_3)) {
                        VAR_9[--VAR_17] = VAR_14;
                        VAR_10[ VAR_17] = 3;
                    } else {
                        if (!VAR_13) {
                            VAR_12 = 1 - (FUNC_2(VAR_3) << 1);
                        } else {
                            VAR_12 = FUNC_1(VAR_3, VAR_13) | 1 << VAR_13;
                            VAR_16 = -FUNC_2(VAR_3);
                            VAR_12 = (VAR_12 ^ VAR_16) - VAR_16;
                        }
                        VAR_4[VAR_5[VAR_14]] = VAR_12;
                        VAR_7[VAR_20++] = VAR_14;
                    }
                }
                break;
            case 1:
                VAR_10[VAR_19] = 2;
                for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {
                    VAR_14 += 4;
                    VAR_9[VAR_18] = VAR_14;
                    VAR_10[VAR_18++] = 2;
                }
                break;
            case 3:
                if (!VAR_13) {
                    VAR_12 = 1 - (FUNC_2(VAR_3) << 1);
                } else {
                    VAR_12 = FUNC_1(VAR_3, VAR_13) | 1 << VAR_13;
                    VAR_16 = -FUNC_2(VAR_3);
                    VAR_12 = (VAR_12 ^ VAR_16) - VAR_16;
                }
                VAR_4[VAR_5[VAR_14]] = VAR_12;
                VAR_7[VAR_20++] = VAR_14;
                VAR_9[VAR_19] = 0;
                VAR_10[VAR_19++] = 0;
                break;
            }
        }
    }

    if (VAR_8 == -1) {
        VAR_21 = FUNC_1(VAR_3, 4);
    } else {
        VAR_21 = VAR_8;
        if (VAR_21 > 15U) {
            FUNC_0(VAR_2->avctx, VAR_1, "quant_index %d out of range\n", VAR_21);
            return VAR_0;
        }
    }

    *VAR_6 = VAR_20;

    return VAR_21;
}
