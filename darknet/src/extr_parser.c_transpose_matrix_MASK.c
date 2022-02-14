
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float* FUNC_0 (int,int) ;
 int FUNC_1 (float*) ;
 int FUNC_2 (float*,float*,int) ;

void FUNC_3(float *VAR_0, int VAR_1, int VAR_2)
{
    float *VAR_3 = FUNC_0(VAR_1*VAR_2, sizeof(float));
    int VAR_4, VAR_5;
    for(VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4){
        for(VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5){
            VAR_3[VAR_5*VAR_1 + VAR_4] = VAR_0[VAR_4*VAR_2 + VAR_5];
        }
    }
    FUNC_2(VAR_0, VAR_3, VAR_1*VAR_2*sizeof(float));
    FUNC_1(VAR_3);
}
