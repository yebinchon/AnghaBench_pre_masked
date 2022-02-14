
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;



void FUNC_0(int16_t *VAR_0, int VAR_1)
{
    int VAR_2,VAR_3,VAR_4,VAR_5;

    VAR_5 = VAR_0[0] - VAR_0[16];
    VAR_2 = VAR_0[0] + VAR_0[16];
    VAR_3 = VAR_0[32] - VAR_0[48];
    VAR_4 = VAR_0[32] + VAR_0[48];
    VAR_0[0] = ((VAR_2+VAR_4)*VAR_1) >> 7;
    VAR_0[16]= ((VAR_5+VAR_3)*VAR_1) >> 7;
    VAR_0[32]= ((VAR_2-VAR_4)*VAR_1) >> 7;
    VAR_0[48]= ((VAR_5-VAR_3)*VAR_1) >> 7;
}
