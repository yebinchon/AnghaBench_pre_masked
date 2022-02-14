
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(float *VAR_0, float VAR_1, float VAR_2, int VAR_3)
{
    static const float VAR_4[] = { 0, 0.3313, 0.6625, 1, 1 };
    VAR_0[0] = (1.0 - VAR_4[VAR_3 ]) * VAR_2
                  + VAR_4[VAR_3 ] * VAR_1;
    VAR_0[1] = (1.0 - VAR_4[VAR_3 + 1]) * VAR_2
                  + VAR_4[VAR_3 + 1] * VAR_1;
    VAR_0[2] = (1.0 - VAR_4[VAR_3 + 2]) * VAR_2
                  + VAR_4[VAR_3 + 2] * VAR_1;
}
