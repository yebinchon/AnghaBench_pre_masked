
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static inline void FUNC_1(int16_t *VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;

    VAR_5 = VAR_4[5 * 8] - VAR_4[3 * 8];
    VAR_6 = VAR_4[5 * 8] + VAR_4[3 * 8];
    VAR_7 = VAR_4[1 * 8] * 2 - (VAR_4[7 * 8] >> 2);
    VAR_8 = VAR_4[1 * 8] * 2 + (VAR_4[7 * 8] >> 2);
    VAR_9 = VAR_8 - VAR_6;
    VAR_10 = FUNC_0(VAR_5 + VAR_7, VAR_2);
    VAR_11 = FUNC_0(VAR_7, VAR_0) - VAR_10;
    VAR_12 = VAR_10 - FUNC_0(VAR_5, VAR_3) * 2;
    VAR_13 = (VAR_8 + VAR_6) >> 1;
    VAR_14 = VAR_12 * 2 - VAR_13;
    VAR_15 = FUNC_0(VAR_9, VAR_1) * 2 - VAR_14;
    VAR_16 = VAR_11 * 2 + VAR_15;
    VAR_17 = (VAR_4[2 * 8] + (VAR_4[6 * 8] >> 1)) >> 1;
    VAR_18 = VAR_4[2 * 8] - (VAR_4[6 * 8] >> 1);
    VAR_19 = (VAR_4[0 * 8] >> 1) - (VAR_4[4 * 8] >> 1) + 0x2020;
    VAR_20 = (VAR_4[0 * 8] >> 1) + (VAR_4[4 * 8] >> 1) + 0x2020;

    VAR_21 = FUNC_0(VAR_18, VAR_1) * 2 - VAR_17;
    VAR_22 = VAR_19 - VAR_21;
    VAR_23 = VAR_20 - VAR_17;
    VAR_24 = VAR_19 + VAR_21;
    VAR_25 = VAR_20 + VAR_17;

    VAR_4[0 * 8] = (VAR_25 + VAR_13) >> 6;
    VAR_4[1 * 8] = (VAR_24 + VAR_14) >> 6;
    VAR_4[2 * 8] = (VAR_22 + VAR_15) >> 6;
    VAR_4[3 * 8] = (VAR_23 - VAR_16) >> 6;
    VAR_4[4 * 8] = (VAR_23 + VAR_16) >> 6;
    VAR_4[5 * 8] = (VAR_22 - VAR_15) >> 6;
    VAR_4[6 * 8] = (VAR_24 - VAR_14) >> 6;
    VAR_4[7 * 8] = (VAR_25 - VAR_13) >> 6;
}
