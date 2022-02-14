
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(int VAR_0, float *VAR_1, int VAR_2, float *VAR_3, int VAR_4, float *VAR_5)
{
    int VAR_6, VAR_7;
    int VAR_8 = 0;
    for(VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7) {
        for(VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6){
            if(VAR_1) VAR_1[VAR_7*VAR_0 + VAR_6] += VAR_5[VAR_8];
            ++VAR_8;
        }
        for(VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6){
            if(VAR_3) VAR_3[VAR_7*VAR_2 + VAR_6] += VAR_5[VAR_8];
            ++VAR_8;
        }
    }
}
