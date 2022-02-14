
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;



__attribute__((used)) static inline void FUNC_0(int16_t *VAR_0)
{
    int VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    int VAR_17, VAR_18, VAR_19, VAR_20;

    VAR_1 = (VAR_0[3] * 19266 + VAR_0[5] * 12873) >> 14;
    VAR_2 = (VAR_0[5] * 19266 - VAR_0[3] * 12873) >> 14;
    VAR_3 = ((VAR_0[7] * 4520 + VAR_0[1] * 22725) >> 14) - VAR_1;
    VAR_4 = ((VAR_0[1] * 4520 - VAR_0[7] * 22725) >> 14) - VAR_2;
    VAR_5 = VAR_1 * 2 + VAR_3;
    VAR_6 = VAR_2 * 2 + VAR_4;
    VAR_7 = VAR_3 - VAR_4;
    VAR_8 = VAR_4 * 2 + VAR_7;
    VAR_9 = (VAR_7 * 11585) >> 14;
    VAR_10 = (VAR_8 * 11585) >> 14;
    VAR_11 = (VAR_0[2] * 8867 - VAR_0[6] * 21407) >> 14;
    VAR_12 = (VAR_0[6] * 8867 + VAR_0[2] * 21407) >> 14;
    VAR_13 = VAR_0[0] - VAR_0[4];
    VAR_14 = VAR_0[4] * 2 + VAR_13;
    VAR_15 = VAR_13 - VAR_11;
    VAR_16 = VAR_14 - VAR_12;
    VAR_17 = VAR_16 - VAR_6;
    VAR_18 = VAR_15 - VAR_9;
    VAR_19 = VAR_15 + VAR_11 * 2 - VAR_10;
    VAR_20 = VAR_16 + VAR_12 * 2 - VAR_5;

    VAR_0[0] = (VAR_20 + VAR_5 * 2 + 4) >> 3;
    VAR_0[1] = (VAR_19 + VAR_10 * 2 + 4) >> 3;
    VAR_0[2] = (VAR_18 + VAR_9 * 2 + 4) >> 3;
    VAR_0[3] = (VAR_17 + VAR_6 * 2 + 4) >> 3;
    VAR_0[4] = (VAR_17 + 4) >> 3;
    VAR_0[5] = (VAR_18 + 4) >> 3;
    VAR_0[6] = (VAR_19 + 4) >> 3;
    VAR_0[7] = (VAR_20 + 4) >> 3;
}
