
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float) ;

void FUNC_1(float *VAR_0, float *VAR_1, float *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6, VAR_7, VAR_8;
    for(VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6){
        for(VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7){
            for(VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8){
                int VAR_9 = VAR_6*VAR_4*VAR_5 + VAR_7*VAR_5 + VAR_8;
                VAR_0[VAR_9] = (VAR_0[VAR_9] - VAR_1[VAR_7])/(FUNC_0(VAR_2[VAR_7]) + .000001f);
            }
        }
    }
}
