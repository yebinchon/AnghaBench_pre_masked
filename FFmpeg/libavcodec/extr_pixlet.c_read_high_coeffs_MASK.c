
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int ptrdiff_t ;
typedef int int64_t ;
typedef int int16_t ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int gb; int bc; } ;
typedef TYPE_1__ PixletContext ;
typedef int GetBitContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 unsigned int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,int *,int ) ;
 void* FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static int FUNC_11(AVCodecContext *VAR_1, uint8_t *VAR_2, int16_t *VAR_3,
                            int VAR_4, int VAR_5, int VAR_6, int VAR_7,
                            int VAR_8, ptrdiff_t VAR_9)
{
    PixletContext *VAR_10 = VAR_1->priv_data;
    GetBitContext *VAR_11 = &VAR_10->bc;
    unsigned VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17 = 0, VAR_18 = 0, VAR_19;
    int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26 = 0;
    int64_t VAR_27 = 3, VAR_28;

    VAR_20 = FUNC_8(VAR_11, VAR_2, FUNC_2(&VAR_10->gb));
    if (VAR_20 < 0)
        return VAR_20;

    if (VAR_6 ^ (VAR_6 >> 31)) {
        VAR_15 = 33 - FUNC_3(VAR_6 ^ (VAR_6 >> 31));
        if (VAR_15 > 16)
            return VAR_0;
    } else {
        VAR_15 = 1;
    }

    VAR_16 = 25 - VAR_15;

    while (VAR_17 < VAR_4) {
        if (VAR_27 >> 8 != -3)
            VAR_23 = FUNC_3((VAR_27 >> 8) + 3) ^ 0x1F;
        else
            VAR_23 = -1;

        VAR_12 = FUNC_7(VAR_11, 0, VAR_16);
        if (VAR_12 >= VAR_16) {
            VAR_12 = FUNC_4(VAR_11, VAR_15);
        } else {
            VAR_22 = 14 + ((((uint64_t)(VAR_23 - 14)) >> 32) & (VAR_23 - 14));
            if (VAR_22 < 1 || VAR_22 > 25)
                return VAR_0;
            VAR_12 *= (1 << VAR_22) - 1;
            VAR_13 = FUNC_9(VAR_11, VAR_22);
            if (VAR_13 <= 1) {
                FUNC_10(VAR_11, VAR_22 - 1);
            } else {
                FUNC_10(VAR_11, VAR_22);
                VAR_12 += VAR_13 - 1;
            }
        }

        VAR_25 = VAR_26 + VAR_12;
        VAR_24 = VAR_25;

        if (VAR_26 + VAR_12 == 0) {
            VAR_23 = 0;
        } else {
            VAR_25 &= 1u;
            VAR_28 = (int64_t)VAR_5 * ((VAR_24 + 1) >> 1) + (VAR_5 >> 1);
            VAR_23 = VAR_25 + (VAR_28 ^ -VAR_25);
        }

        VAR_17++;
        VAR_3[VAR_18++] = VAR_23;
        if (VAR_18 == VAR_8) {
            VAR_18 = 0;
            VAR_3 += VAR_9;
        }
        VAR_27 += (int64_t)VAR_7 * (uint64_t)VAR_24 - ((int64_t)(VAR_7 * (uint64_t)VAR_27) >> 8);

        VAR_26 = 0;

        if ((uint64_t)VAR_27 > 0xFF / 4 || VAR_17 >= VAR_4)
            continue;

        VAR_22 = ((VAR_27 + 8) >> 5) + (VAR_27 ? FUNC_3(VAR_27) : 32) - 24;
        VAR_21 = FUNC_1(16383, VAR_22);
        VAR_12 = FUNC_7(VAR_11, 0, 8);
        if (VAR_12 < 8) {
            if (VAR_22 < 1 || VAR_22 > 25)
                return VAR_0;

            VAR_23 = FUNC_9(VAR_11, VAR_22);
            if (VAR_23 > 1) {
                FUNC_10(VAR_11, VAR_22);
                VAR_14 = VAR_23 + VAR_21 * VAR_12 - 1;
            } else {
                FUNC_10(VAR_11, VAR_22 - 1);
                VAR_14 = VAR_21 * VAR_12;
            }
        } else {
            if (FUNC_5(VAR_11))
                VAR_23 = FUNC_4(VAR_11, 16);
            else
                VAR_23 = FUNC_4(VAR_11, 8);

            VAR_14 = VAR_23 + 8 * VAR_21;
        }

        if (VAR_14 > 0xFFFF || VAR_17 + VAR_14 > VAR_4)
            return VAR_0;
        VAR_17 += VAR_14;

        for (VAR_19 = 0; VAR_19 < VAR_14; VAR_19++) {
            VAR_3[VAR_18++] = 0;
            if (VAR_18 == VAR_8) {
                VAR_18 = 0;
                VAR_3 += VAR_9;
            }
        }

        VAR_27 = 0;
        VAR_26 = VAR_14 < 0xFFFF ? 1 : 0;
    }

    FUNC_0(VAR_11);
    return FUNC_6(VAR_11) >> 3;
}
