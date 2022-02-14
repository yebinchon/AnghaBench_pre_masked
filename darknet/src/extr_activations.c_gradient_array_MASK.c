
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACTIVATION ;


 float FUNC_0 (float const,int const) ;

void FUNC_1(const float *VAR_0, const int VAR_1, const ACTIVATION VAR_2, float *VAR_3)
{
    int VAR_4;
    for(VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4){
        VAR_3[VAR_4] *= FUNC_0(VAR_0[VAR_4], VAR_2);
    }
}
