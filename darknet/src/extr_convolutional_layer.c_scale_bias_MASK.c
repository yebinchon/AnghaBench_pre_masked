
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(float *VAR_0, float *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5,VAR_6,VAR_7;
    for(VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7){
        for(VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5){
            for(VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6){
                VAR_0[(VAR_7*VAR_3 + VAR_5)*VAR_4 + VAR_6] *= VAR_1[VAR_5];
            }
        }
    }
}
