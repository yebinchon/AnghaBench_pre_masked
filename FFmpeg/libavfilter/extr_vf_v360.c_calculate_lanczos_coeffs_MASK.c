
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 float const FUNC_0 (float const) ;

__attribute__((used)) static inline void FUNC_1(float VAR_1, float *VAR_2)
{
    float VAR_3 = 0.f;

    for (int VAR_4 = 0; VAR_4 < 4; VAR_4++) {
        const float VAR_5 = VAR_0 * (VAR_1 - VAR_4 + 1);
        if (VAR_5 == 0.f) {
            VAR_2[VAR_4] = 1.f;
        } else {
            VAR_2[VAR_4] = FUNC_0(VAR_5) * FUNC_0(VAR_5 / 2.f) / (VAR_5 * VAR_5 / 2.f);
        }
        VAR_3 += VAR_2[VAR_4];
    }

    for (int VAR_6 = 0; VAR_6 < 4; VAR_6++) {
        VAR_2[VAR_6] /= VAR_3;
    }
}
