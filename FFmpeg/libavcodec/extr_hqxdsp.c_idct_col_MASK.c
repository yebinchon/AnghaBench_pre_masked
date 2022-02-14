
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;



__attribute__((used)) static inline void FUNC_0(int16_t *VAR_0, const uint8_t *VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    int VAR_18, VAR_19, VAR_20, VAR_21;
    int VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;

    VAR_22 = (int) VAR_0[0 * 8] * VAR_1[0 * 8];
    VAR_23 = (int) VAR_0[1 * 8] * VAR_1[1 * 8];
    VAR_24 = (int) VAR_0[2 * 8] * VAR_1[2 * 8];
    VAR_25 = (int) VAR_0[3 * 8] * VAR_1[3 * 8];
    VAR_26 = (int) VAR_0[4 * 8] * VAR_1[4 * 8];
    VAR_27 = (int) VAR_0[5 * 8] * VAR_1[5 * 8];
    VAR_28 = (int) VAR_0[6 * 8] * VAR_1[6 * 8];
    VAR_29 = (int) VAR_0[7 * 8] * VAR_1[7 * 8];

    VAR_2 = (int)(VAR_25 * 19266U + VAR_27 * 12873U) >> 15;
    VAR_3 = (int)(VAR_27 * 19266U - VAR_25 * 12873U) >> 15;
    VAR_4 = ((int)(VAR_29 * 4520U + VAR_23 * 22725U) >> 15) - VAR_2;
    VAR_5 = ((int)(VAR_23 * 4520U - VAR_29 * 22725U) >> 15) - VAR_3;
    VAR_6 = VAR_2 * 2 + VAR_4;
    VAR_7 = VAR_3 * 2 + VAR_5;
    VAR_8 = VAR_4 - VAR_5;
    VAR_9 = VAR_5 * 2 + VAR_8;
    VAR_10 = (int)(VAR_8 * 11585U) >> 14;
    VAR_11 = (int)(VAR_9 * 11585U) >> 14;
    VAR_12 = (int)(VAR_24 * 8867U - VAR_28 * 21407U) >> 14;
    VAR_13 = (int)(VAR_28 * 8867U + VAR_24 * 21407U) >> 14;
    VAR_14 = (VAR_22 >> 1) - (VAR_26 >> 1);
    VAR_15 = (VAR_26 >> 1) * 2 + VAR_14;
    VAR_16 = VAR_14 - (VAR_12 >> 1);
    VAR_17 = VAR_15 - (VAR_13 >> 1);
    VAR_18 = VAR_17 - VAR_7;
    VAR_19 = VAR_16 - VAR_10;
    VAR_20 = VAR_16 + (VAR_12 >> 1) * 2 - VAR_11;
    VAR_21 = VAR_17 + (VAR_13 >> 1) * 2 - VAR_6;

    VAR_0[0 * 8] = VAR_21 + VAR_6 * 2;
    VAR_0[1 * 8] = VAR_20 + VAR_11 * 2;
    VAR_0[2 * 8] = VAR_19 + VAR_10 * 2;
    VAR_0[3 * 8] = VAR_18 + VAR_7 * 2;
    VAR_0[4 * 8] = VAR_18;
    VAR_0[5 * 8] = VAR_19;
    VAR_0[6 * 8] = VAR_20;
    VAR_0[7 * 8] = VAR_21;
}
