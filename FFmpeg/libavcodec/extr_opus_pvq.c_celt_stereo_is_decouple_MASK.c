
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 float FUNC_0 (float) ;

__attribute__((used)) static void FUNC_1(float *VAR_1, float *VAR_2, float VAR_3, float VAR_4, int VAR_5)
{
    int VAR_6;
    const float VAR_7 = 1.0f/(FUNC_0(VAR_3*VAR_3 + VAR_4*VAR_4) + VAR_0);
    VAR_3 *= VAR_7;
    VAR_4 *= VAR_7;
    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
        VAR_1[VAR_6] = VAR_3*VAR_1[VAR_6] + VAR_4*VAR_2[VAR_6];
}
