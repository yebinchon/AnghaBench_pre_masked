
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;



__attribute__((used)) static void FUNC_0(int16_t *VAR_0, int16_t *VAR_1)
{
    int VAR_2;
    int VAR_3, VAR_4, VAR_5, VAR_6;
    int VAR_7, VAR_8;
    int VAR_9 = 4, VAR_10 = 3;
    for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
        VAR_3 = VAR_0[48];
        VAR_4 = VAR_0[56];
        VAR_5 = VAR_1[0];
        VAR_6 = VAR_1[8];
        VAR_7 = VAR_3 - VAR_6;
        VAR_8 = VAR_3 - VAR_6 + VAR_4 - VAR_5;

        VAR_0[48] = ((VAR_3 * 8) - VAR_7 + VAR_9) >> 3;
        VAR_0[56] = ((VAR_4 * 8) - VAR_8 + VAR_10) >> 3;
        VAR_1[0] = ((VAR_5 * 8) + VAR_8 + VAR_9) >> 3;
        VAR_1[8] = ((VAR_6 * 8) + VAR_7 + VAR_10) >> 3;

        VAR_1++;
        VAR_0++;
        VAR_10 = 7 - VAR_10;
        VAR_9 = 7 - VAR_9;
    }
}
