
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float*,int) ;
 float FUNC_1 (int ) ;
 int FUNC_2 (float*,int) ;

void FUNC_3(float *VAR_0, int VAR_1)
{
    int VAR_2;
    float VAR_3 = FUNC_0(VAR_0,VAR_1);
    float VAR_4 = FUNC_1(FUNC_2(VAR_0,VAR_1));
    for(VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2){
        VAR_0[VAR_2] = (VAR_0[VAR_2] - VAR_3)/VAR_4;
    }
    VAR_3 = FUNC_0(VAR_0,VAR_1);
    VAR_4 = FUNC_1(FUNC_2(VAR_0,VAR_1));
}
