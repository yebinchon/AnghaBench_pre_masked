
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 short VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 short VAR_4 ;
 short VAR_5 ;
 short VAR_6 ;

__attribute__((used)) static void FUNC_0(short * VAR_7)
{
    int VAR_8, VAR_9;
    int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;


    VAR_10 = VAR_0 * VAR_7[0] + VAR_0 * VAR_7[4];
    VAR_11 = VAR_1 * VAR_7[1] + VAR_6 * VAR_7[7];
    VAR_12 = VAR_2 * VAR_7[2] + VAR_5 * VAR_7[6];
    VAR_13 = VAR_3 * VAR_7[5] - VAR_4 * VAR_7[3];
    VAR_14 = VAR_0 * VAR_7[0] - VAR_0 * VAR_7[4];
    VAR_15 = VAR_4 * VAR_7[5] + VAR_3 * VAR_7[3];
    VAR_16 = VAR_5 * VAR_7[2] - VAR_2 * VAR_7[6];
    VAR_17 = VAR_6 * VAR_7[1] - VAR_1 * VAR_7[7];


    VAR_8 = (181 * (VAR_11 - VAR_15 + VAR_17 - VAR_13) + 128) >> 8;
    VAR_9 = (181 * (VAR_11 - VAR_15 - VAR_17 + VAR_13) + 128) >> 8;


    VAR_7[0] = (VAR_10 + VAR_12 + VAR_11 + VAR_15 + 128) >> 8;
    VAR_7[1] = (VAR_14 + VAR_16 + VAR_8 + 128) >> 8;
    VAR_7[2] = (VAR_14 - VAR_16 + VAR_9 + 128) >> 8;
    VAR_7[3] = (VAR_10 - VAR_12 + VAR_17 + VAR_13 + 128) >> 8;
    VAR_7[4] = (VAR_10 - VAR_12 - VAR_17 - VAR_13 + 128) >> 8;
    VAR_7[5] = (VAR_14 - VAR_16 - VAR_9 + 128) >> 8;
    VAR_7[6] = (VAR_14 + VAR_16 - VAR_8 + 128) >> 8;
    VAR_7[7] = (VAR_10 + VAR_12 - VAR_11 - VAR_15 + 128) >> 8;
}
