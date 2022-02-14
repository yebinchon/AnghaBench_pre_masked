
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;



__attribute__((used)) static inline void FUNC_0(int16_t *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
        int VAR_4 = VAR_1[0 * VAR_2] + VAR_1[6 * VAR_2];
        int VAR_5 = VAR_1[1 * VAR_2] + VAR_1[5 * VAR_2];
        int VAR_6 = VAR_1[2 * VAR_2] + VAR_1[4 * VAR_2];
        int VAR_7 = VAR_1[3 * VAR_2];
        int VAR_8 = VAR_7 + VAR_7;
        VAR_7 = VAR_8 - VAR_4;
        VAR_4 = VAR_8 + VAR_4;
        VAR_8 = VAR_6 + VAR_5;
        VAR_6 = VAR_6 - VAR_5;
        VAR_0[0] = VAR_4 + VAR_8;
        VAR_0[2] = VAR_4 - VAR_8;
        VAR_0[1] = 2 * VAR_7 + VAR_6;
        VAR_0[3] = VAR_7 - 2 * VAR_6;
        VAR_1++;
        VAR_0 += 4;
    }
}
