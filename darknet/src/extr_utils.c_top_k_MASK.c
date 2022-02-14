
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(float *VAR_0, int VAR_1, int VAR_2, int *VAR_3)
{
    int VAR_4,VAR_5;
    for(VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) VAR_3[VAR_5] = -1;
    for(VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4){
        int VAR_6 = VAR_4;
        for(VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5){
            if((VAR_3[VAR_5] < 0) || VAR_0[VAR_6] > VAR_0[VAR_3[VAR_5]]){
                int VAR_7 = VAR_6;
                VAR_6 = VAR_3[VAR_5];
                VAR_3[VAR_5] = VAR_7;
            }
        }
    }
}
