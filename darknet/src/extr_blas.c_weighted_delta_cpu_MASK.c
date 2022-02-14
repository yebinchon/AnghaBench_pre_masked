
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(float *VAR_0, float *VAR_1, float *VAR_2, float *VAR_3, float *VAR_4, float *VAR_5, int VAR_6, float *VAR_7)
{
    int VAR_8;
    for(VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8){
        if(VAR_3) VAR_3[VAR_8] += VAR_7[VAR_8] * VAR_2[VAR_8];
        if(VAR_4) VAR_4[VAR_8] += VAR_7[VAR_8] * (1-VAR_2[VAR_8]);
        VAR_5[VAR_8] += VAR_7[VAR_8] * (VAR_0[VAR_8] - VAR_1[VAR_8]);
    }
}
