
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float const*,float const*,int const) ;
 float FUNC_1 (float) ;

void FUNC_2(float *VAR_0, const float *VAR_1,
                                             float VAR_2, const int VAR_3)
{
    int VAR_4;
    float VAR_5 = FUNC_0(VAR_1, VAR_1, VAR_3);
    if (VAR_5)
        VAR_5 = FUNC_1(VAR_2 / VAR_5);
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
        VAR_0[VAR_4] = VAR_1[VAR_4] * VAR_5;
}
