
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (float) ;

void FUNC_1(float *VAR_0, int VAR_1, int VAR_2, float *VAR_3)
{
    int VAR_4, VAR_5;
    for(VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5){
        float VAR_6 = 0;
        for(VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4){
            VAR_6 += FUNC_0(VAR_0[VAR_5*VAR_2 + VAR_4]);
        }
        VAR_6 = VAR_6 / VAR_2;
        for(VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4){
            VAR_3[VAR_5*VAR_2 + VAR_4] = (VAR_0[VAR_5*VAR_2 + VAR_4] > 0) ? VAR_6 : -VAR_6;
        }
    }
}
