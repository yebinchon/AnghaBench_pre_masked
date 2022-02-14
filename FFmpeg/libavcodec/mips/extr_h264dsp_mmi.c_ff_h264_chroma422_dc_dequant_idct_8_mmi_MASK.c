
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;



void FUNC_0(int16_t *VAR_0, int VAR_1)
{
    int VAR_2[8];
    int VAR_3[8];

    VAR_2[0] = VAR_0[0] + VAR_0[16];
    VAR_2[1] = VAR_0[0] - VAR_0[16];
    VAR_2[2] = VAR_0[32] + VAR_0[48];
    VAR_2[3] = VAR_0[32] - VAR_0[48];
    VAR_2[4] = VAR_0[64] + VAR_0[80];
    VAR_2[5] = VAR_0[64] - VAR_0[80];
    VAR_2[6] = VAR_0[96] + VAR_0[112];
    VAR_2[7] = VAR_0[96] - VAR_0[112];

    VAR_3[0] = VAR_2[0] + VAR_2[4] + VAR_2[2] + VAR_2[6];
    VAR_3[1] = VAR_2[0] - VAR_2[4] + VAR_2[2] - VAR_2[6];
    VAR_3[2] = VAR_2[0] - VAR_2[4] - VAR_2[2] + VAR_2[6];
    VAR_3[3] = VAR_2[0] + VAR_2[4] - VAR_2[2] - VAR_2[6];
    VAR_3[4] = VAR_2[1] + VAR_2[5] + VAR_2[3] + VAR_2[7];
    VAR_3[5] = VAR_2[1] - VAR_2[5] + VAR_2[3] - VAR_2[7];
    VAR_3[6] = VAR_2[1] - VAR_2[5] - VAR_2[3] + VAR_2[7];
    VAR_3[7] = VAR_2[1] + VAR_2[5] - VAR_2[3] - VAR_2[7];

    VAR_0[ 0]= (VAR_3[0]*VAR_1 + 128) >> 8;
    VAR_0[ 32]= (VAR_3[1]*VAR_1 + 128) >> 8;
    VAR_0[ 64]= (VAR_3[2]*VAR_1 + 128) >> 8;
    VAR_0[ 96]= (VAR_3[3]*VAR_1 + 128) >> 8;
    VAR_0[ 16]= (VAR_3[4]*VAR_1 + 128) >> 8;
    VAR_0[ 48]= (VAR_3[5]*VAR_1 + 128) >> 8;
    VAR_0[ 80]= (VAR_3[6]*VAR_1 + 128) >> 8;
    VAR_0[112]= (VAR_3[7]*VAR_1 + 128) >> 8;
}
