
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;



__attribute__((used)) static void FUNC_0(float *VAR_0, const float *VAR_1, const float *VAR_2, ptrdiff_t VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        const float VAR_5 = VAR_2[2 * VAR_4 ];
        const float VAR_6 = VAR_2[2 * VAR_4 + 1];
        const float VAR_7 = VAR_1[2 * VAR_4 ];
        const float VAR_8 = VAR_1[2 * VAR_4 + 1];

        VAR_0[2 * VAR_4 ] += VAR_7 * VAR_5 - VAR_8 * VAR_6;
        VAR_0[2 * VAR_4 + 1] += VAR_7 * VAR_6 + VAR_8 * VAR_5;
    }

    VAR_0[2 * VAR_4] += VAR_1[2 * VAR_4] * VAR_2[2 * VAR_4];
}
