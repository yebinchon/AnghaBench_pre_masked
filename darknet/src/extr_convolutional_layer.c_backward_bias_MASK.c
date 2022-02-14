
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (float*,int) ;

void FUNC_1(float *VAR_0, float *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5,VAR_6;
    for(VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6){
        for(VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5){
            VAR_0[VAR_5] += FUNC_0(VAR_1+VAR_4*(VAR_5+VAR_6*VAR_3), VAR_4);
        }
    }
}
