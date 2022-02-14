
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(float *VAR_0, float VAR_1[2], const float *VAR_2,
                   const float *VAR_3, const float *VAR_4, int VAR_5)
{
    for (int VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
        float VAR_7, VAR_8;

        VAR_7 = VAR_2[VAR_6];
        VAR_8 = VAR_2[VAR_6] + VAR_1[0];
        VAR_1[0] = VAR_1[1] + (VAR_3[0]*VAR_7 - VAR_4[0]*VAR_8);
        VAR_1[1] = (VAR_3[1]*VAR_7 - VAR_4[1]*VAR_8);
        VAR_0[VAR_6] = VAR_8;
    }
}
