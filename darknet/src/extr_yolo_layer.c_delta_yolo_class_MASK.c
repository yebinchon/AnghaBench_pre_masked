
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(float *VAR_0, float *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, float *VAR_6)
{
    int VAR_7;
    if (VAR_1[VAR_2]){
        VAR_1[VAR_2 + VAR_5*VAR_3] = 1 - VAR_0[VAR_2 + VAR_5*VAR_3];
        if(VAR_6) *VAR_6 += VAR_0[VAR_2 + VAR_5*VAR_3];
        return;
    }
    for(VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7){
        VAR_1[VAR_2 + VAR_5*VAR_7] = ((VAR_7 == VAR_3)?1 : 0) - VAR_0[VAR_2 + VAR_5*VAR_7];
        if(VAR_7 == VAR_3 && VAR_6) *VAR_6 += VAR_0[VAR_2 + VAR_5*VAR_7];
    }
}
