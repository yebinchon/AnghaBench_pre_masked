
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;



__attribute__((used)) static void FUNC_0(int16_t *VAR_0)
{
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < 4; VAR_1++) {
        int VAR_2 = VAR_0[0 * 4 + VAR_1];
        int VAR_3 = VAR_0[1 * 4 + VAR_1];
        int VAR_4 = VAR_0[2 * 4 + VAR_1];
        int VAR_5 = VAR_0[3 * 4 + VAR_1];
        int VAR_6;
        VAR_2 += VAR_3;
        VAR_5 -= VAR_4;
        VAR_6 = (VAR_2 - VAR_5) >> 1;
        VAR_3 = VAR_6 - VAR_3;
        VAR_4 = VAR_6 - VAR_4;
        VAR_2 -= VAR_4;
        VAR_5 += VAR_3;
        VAR_0[0 * 4 + VAR_1] = VAR_2;
        VAR_0[1 * 4 + VAR_1] = VAR_4;
        VAR_0[2 * 4 + VAR_1] = VAR_5;
        VAR_0[3 * 4 + VAR_1] = VAR_3;
    }
    for (VAR_1 = 0; VAR_1 < 4; VAR_1++) {
        int VAR_7 = VAR_0[VAR_1 * 4 + 0];
        int VAR_8 = VAR_0[VAR_1 * 4 + 1];
        int VAR_9 = VAR_0[VAR_1 * 4 + 2];
        int VAR_10 = VAR_0[VAR_1 * 4 + 3];
        int VAR_11;
        VAR_7 += VAR_8;
        VAR_10 -= VAR_9;
        VAR_11 = (VAR_7 - VAR_10) >> 1;
        VAR_8 = VAR_11 - VAR_8;
        VAR_9 = VAR_11 - VAR_9;
        VAR_7 -= VAR_9;
        VAR_10 += VAR_8;
        VAR_0[VAR_1 * 4 + 0] = VAR_7 * 2;
        VAR_0[VAR_1 * 4 + 1] = VAR_9 * 2;
        VAR_0[VAR_1 * 4 + 2] = VAR_10 * 2;
        VAR_0[VAR_1 * 4 + 3] = VAR_8 * 2;
    }
}
