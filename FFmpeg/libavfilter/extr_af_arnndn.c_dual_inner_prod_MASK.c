
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0(const float *VAR_0, const float *VAR_1, const float *VAR_2,
                                   int VAR_3, float *VAR_4, float *VAR_5)
{
    float VAR_6 = 0, VAR_7 = 0;

    for (int VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
        VAR_6 += (VAR_0[VAR_8] * VAR_1[VAR_8]);
        VAR_7 += (VAR_0[VAR_8] * VAR_2[VAR_8]);
    }

    *VAR_4 = VAR_6;
    *VAR_5 = VAR_7;
}
