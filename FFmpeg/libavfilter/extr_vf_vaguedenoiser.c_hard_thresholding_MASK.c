
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float const FUNC_0 (float) ;

__attribute__((used)) static void FUNC_1(float *VAR_0, const int VAR_1, const int VAR_2,
                              const int VAR_3, const float VAR_4,
                              const float VAR_5, const int VAR_6)
{
    const float VAR_7 = 1.f - VAR_5 * 0.01f;
    int VAR_8, VAR_9;

    for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
        for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
            if (FUNC_0(VAR_0[VAR_9]) <= VAR_4)
                VAR_0[VAR_9] *= VAR_7;
        }
        VAR_0 += VAR_3;
    }
}
