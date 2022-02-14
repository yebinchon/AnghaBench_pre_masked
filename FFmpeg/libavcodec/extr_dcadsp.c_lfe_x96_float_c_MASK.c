
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;



__attribute__((used)) static void FUNC_0(float *VAR_0, const float *VAR_1,
                            float *VAR_2, ptrdiff_t VAR_3)
{
    float VAR_4 = *VAR_2;
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        float VAR_6 = 0.25f * VAR_1[VAR_5] + 0.75f * VAR_4;
        float VAR_7 = 0.75f * VAR_1[VAR_5] + 0.25f * VAR_4;
        VAR_4 = VAR_1[VAR_5];
        *VAR_0++ = VAR_6;
        *VAR_0++ = VAR_7;
    }

    *VAR_2 = VAR_4;
}
