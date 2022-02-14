
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


    VAR_10 = (VAR_0 * VAR_7[ 0] + VAR_0 * VAR_7[32] ) >> 3;
    VAR_11 = (VAR_1 * VAR_7[ 8] + VAR_6 * VAR_7[56] + 4) >> 3;
    VAR_12 = (VAR_2 * VAR_7[16] + VAR_5 * VAR_7[48] + 4) >> 3;
    VAR_13 = (VAR_3 * VAR_7[40] - VAR_4 * VAR_7[24] + 4) >> 3;
    VAR_14 = (VAR_0 * VAR_7[ 0] - VAR_0 * VAR_7[32] ) >> 3;
    VAR_15 = (VAR_4 * VAR_7[40] + VAR_3 * VAR_7[24] + 4) >> 3;
    VAR_16 = (VAR_5 * VAR_7[16] - VAR_2 * VAR_7[48] + 4) >> 3;
    VAR_17 = (VAR_6 * VAR_7[ 8] - VAR_1 * VAR_7[56] + 4) >> 3;


    VAR_8 = (181 * (VAR_11 - VAR_15 + VAR_17 - VAR_13) + 128) >> 8;
    VAR_9 = (181 * (VAR_11 - VAR_15 - VAR_17 + VAR_13) + 128) >> 8;


    VAR_7[ 0] = (VAR_10 + VAR_12 + VAR_11 + VAR_15 + 8192) >> 14;
    VAR_7[ 8] = (VAR_14 + VAR_16 + VAR_8 + 8192) >> 14;
    VAR_7[16] = (VAR_14 - VAR_16 + VAR_9 + 8192) >> 14;
    VAR_7[24] = (VAR_10 - VAR_12 + VAR_17 + VAR_13 + 8192) >> 14;

    VAR_7[32] = (VAR_10 - VAR_12 - VAR_17 - VAR_13 + 8192) >> 14;
    VAR_7[40] = (VAR_14 - VAR_16 - VAR_9 + 8192) >> 14;
    VAR_7[48] = (VAR_14 + VAR_16 - VAR_8 + 8192) >> 14;
    VAR_7[56] = (VAR_10 + VAR_12 - VAR_11 - VAR_15 + 8192) >> 14;
}
