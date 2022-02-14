
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float const*,float const*,int) ;
 float FUNC_1 (float) ;

void FUNC_2(float *VAR_0, const float *VAR_1, float VAR_2,
                              int VAR_3, float VAR_4, float *VAR_5)
{
    int VAR_6;
    float VAR_7 = FUNC_0(VAR_1, VAR_1, VAR_3);
    float VAR_8 = 1.0;
    float VAR_9 = *VAR_5;

    if (VAR_7)
        VAR_8 = FUNC_1(VAR_2 / VAR_7);

    VAR_8 *= 1.0 - VAR_4;

    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
        VAR_9 = VAR_4 * VAR_9 + VAR_8;
        VAR_0[VAR_6] = VAR_1[VAR_6] * VAR_9;
    }

    *VAR_5 = VAR_9;
}
