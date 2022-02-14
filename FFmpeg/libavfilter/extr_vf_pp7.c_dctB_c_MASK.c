
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;



__attribute__((used)) static void FUNC_0(int16_t *VAR_0, int16_t *VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
        int VAR_3 = VAR_1[0 * 4] + VAR_1[6 * 4];
        int VAR_4 = VAR_1[1 * 4] + VAR_1[5 * 4];
        int VAR_5 = VAR_1[2 * 4] + VAR_1[4 * 4];
        int VAR_6 = VAR_1[3 * 4];
        int VAR_7 = VAR_6 + VAR_6;
        VAR_6 = VAR_7 - VAR_3;
        VAR_3 = VAR_7 + VAR_3;
        VAR_7 = VAR_5 + VAR_4;
        VAR_5 = VAR_5 - VAR_4;
        VAR_0[0 * 4] = VAR_3 + VAR_7;
        VAR_0[2 * 4] = VAR_3 - VAR_7;
        VAR_0[1 * 4] = 2 * VAR_6 + VAR_5;
        VAR_0[3 * 4] = VAR_6 - 2 * VAR_5;
        VAR_1++;
        VAR_0++;
    }
}
