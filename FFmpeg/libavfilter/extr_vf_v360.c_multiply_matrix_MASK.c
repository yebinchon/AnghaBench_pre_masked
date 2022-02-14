
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(float VAR_0[3][3], const float VAR_1[3][3], const float VAR_2[3][3])
{
    for (int VAR_3 = 0; VAR_3 < 3; VAR_3++) {
        for (int VAR_4 = 0; VAR_4 < 3; VAR_4++) {
            float VAR_5 = 0;

            for (int VAR_6 = 0; VAR_6 < 3; VAR_6++)
                VAR_5 += VAR_1[VAR_3][VAR_6] * VAR_2[VAR_6][VAR_4];

            VAR_0[VAR_3][VAR_4] = VAR_5;
        }
    }
}
