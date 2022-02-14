
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0(const float VAR_0[3][3],
                          float *VAR_1)
{
    const float VAR_2 = VAR_1[0] * VAR_0[0][0] + VAR_1[1] * VAR_0[0][1] + VAR_1[2] * VAR_0[0][2];
    const float VAR_3 = VAR_1[0] * VAR_0[1][0] + VAR_1[1] * VAR_0[1][1] + VAR_1[2] * VAR_0[1][2];
    const float VAR_4 = VAR_1[0] * VAR_0[2][0] + VAR_1[1] * VAR_0[2][1] + VAR_1[2] * VAR_0[2][2];

    VAR_1[0] = VAR_2;
    VAR_1[1] = VAR_3;
    VAR_1[2] = VAR_4;
}
