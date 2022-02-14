
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
typedef unsigned int int32_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 unsigned int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;

void FUNC_0(const uint8_t *VAR_10, uint8_t *VAR_11, uint8_t *VAR_12,
                   uint8_t *VAR_13, int VAR_14, int VAR_15, int VAR_16,
                   int VAR_17, int VAR_18, int32_t *VAR_19)
{
    int32_t VAR_20 = VAR_19[VAR_9], VAR_21 = VAR_19[VAR_5], VAR_22 = VAR_19[VAR_2];
    int32_t VAR_23 = VAR_19[VAR_7], VAR_24 = VAR_19[VAR_3], VAR_25 = VAR_19[VAR_0];
    int32_t VAR_26 = VAR_19[VAR_8], VAR_27 = VAR_19[VAR_4], VAR_28 = VAR_19[VAR_1];
    int VAR_29;
    const int VAR_30 = VAR_14 >> 1;

    for (VAR_29 = 0; VAR_29 < VAR_15; VAR_29 += 2) {
        int VAR_31;
        for (VAR_31 = 0; VAR_31 < VAR_30; VAR_31++) {
            unsigned int VAR_32 = VAR_10[6 * VAR_31 + 0];
            unsigned int VAR_33 = VAR_10[6 * VAR_31 + 1];
            unsigned int VAR_34 = VAR_10[6 * VAR_31 + 2];

            unsigned int VAR_35 = ((VAR_20 * VAR_34 + VAR_21 * VAR_33 + VAR_22 * VAR_32) >> VAR_6) + 16;
            unsigned int VAR_36 = ((VAR_26 * VAR_34 + VAR_27 * VAR_33 + VAR_28 * VAR_32) >> VAR_6) + 128;
            unsigned int VAR_37 = ((VAR_23 * VAR_34 + VAR_24 * VAR_33 + VAR_25 * VAR_32) >> VAR_6) + 128;

            VAR_12[VAR_31] = VAR_37;
            VAR_13[VAR_31] = VAR_36;
            VAR_11[2 * VAR_31] = VAR_35;

            VAR_32 = VAR_10[6 * VAR_31 + 3];
            VAR_33 = VAR_10[6 * VAR_31 + 4];
            VAR_34 = VAR_10[6 * VAR_31 + 5];

            VAR_35 = ((VAR_20 * VAR_34 + VAR_21 * VAR_33 + VAR_22 * VAR_32) >> VAR_6) + 16;
            VAR_11[2 * VAR_31 + 1] = VAR_35;
        }
        VAR_11 += VAR_16;
        VAR_10 += VAR_18;

        if (VAR_29+1 == VAR_15)
            break;

        for (VAR_31 = 0; VAR_31 < VAR_30; VAR_31++) {
            unsigned int VAR_38 = VAR_10[6 * VAR_31 + 0];
            unsigned int VAR_39 = VAR_10[6 * VAR_31 + 1];
            unsigned int VAR_40 = VAR_10[6 * VAR_31 + 2];

            unsigned int VAR_41 = ((VAR_20 * VAR_40 + VAR_21 * VAR_39 + VAR_22 * VAR_38) >> VAR_6) + 16;

            VAR_11[2 * VAR_31] = VAR_41;

            VAR_38 = VAR_10[6 * VAR_31 + 3];
            VAR_39 = VAR_10[6 * VAR_31 + 4];
            VAR_40 = VAR_10[6 * VAR_31 + 5];

            VAR_41 = ((VAR_20 * VAR_40 + VAR_21 * VAR_39 + VAR_22 * VAR_38) >> VAR_6) + 16;
            VAR_11[2 * VAR_31 + 1] = VAR_41;
        }
        VAR_12 += VAR_17;
        VAR_13 += VAR_17;
        VAR_11 += VAR_16;
        VAR_10 += VAR_18;
    }
}
