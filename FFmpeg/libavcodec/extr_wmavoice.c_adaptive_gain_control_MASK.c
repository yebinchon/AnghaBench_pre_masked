
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (float const) ;

__attribute__((used)) static void FUNC_1(float *VAR_0, const float *VAR_1,
                                  const float *VAR_2,
                                  int VAR_3, float VAR_4, float *VAR_5)
{
    int VAR_6;
    float VAR_7 = 0.0, VAR_8 = 0.0, VAR_9;
    float VAR_10 = *VAR_5;

    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
        VAR_7 += FUNC_0(VAR_2[VAR_6]);
        VAR_8 += FUNC_0(VAR_1[VAR_6]);
    }
    VAR_9 = VAR_8 == 0.0 ? 0.0 :
                        (1.0 - VAR_4) * VAR_7 / VAR_8;

    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
        VAR_10 = VAR_4 * VAR_10 + VAR_9;
        VAR_0[VAR_6] = VAR_1[VAR_6] * VAR_10;
    }

    *VAR_5 = VAR_10;
}
