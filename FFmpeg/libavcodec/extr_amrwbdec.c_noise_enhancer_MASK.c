
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float,float) ;
 float FUNC_1 (float,float) ;

__attribute__((used)) static float FUNC_2(float VAR_0, float *VAR_1,
                            float VAR_2, float VAR_3)
{
    float VAR_4 = 0.5 * (1 - VAR_2) * VAR_3;
    float VAR_5;




    if (VAR_0 < *VAR_1) {
        VAR_5 = FUNC_1(*VAR_1, VAR_0 + VAR_0 *
                     (6226 * (1.0f / (1 << 15))));
    } else
        VAR_5 = FUNC_0(*VAR_1, VAR_0 *
                    (27536 * (1.0f / (1 << 15))));

    *VAR_1 = VAR_5;

    return VAR_4 * VAR_5 + (1 - VAR_4) * VAR_0;
}
