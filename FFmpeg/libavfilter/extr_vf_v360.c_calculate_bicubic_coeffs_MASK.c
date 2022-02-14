
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0(float VAR_0, float *VAR_1)
{
    const float VAR_2 = VAR_0 * VAR_0;
    const float VAR_3 = VAR_0 * VAR_0 * VAR_0;

    VAR_1[0] = - VAR_0 / 3.f + VAR_2 / 2.f - VAR_3 / 6.f;
    VAR_1[1] = 1.f - VAR_0 / 2.f - VAR_2 + VAR_3 / 2.f;
    VAR_1[2] = VAR_0 + VAR_2 / 2.f - VAR_3 / 2.f;
    VAR_1[3] = - VAR_0 / 6.f + VAR_3 / 6.f;
}
