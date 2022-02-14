
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0[4], int VAR_1[4],
                           int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;


    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
        for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
            VAR_0[0][VAR_6 * VAR_1[0] + VAR_5] = VAR_5 + VAR_6 + VAR_4 * 3;


    for (VAR_6 = 0; VAR_6 < VAR_3 / 2; VAR_6++) {
        for (VAR_5 = 0; VAR_5 < VAR_2 / 2; VAR_5++) {
            VAR_0[1][VAR_6 * VAR_1[1] + VAR_5] = 128 + VAR_6 + VAR_4 * 2;
            VAR_0[2][VAR_6 * VAR_1[2] + VAR_5] = 64 + VAR_5 + VAR_4 * 5;
        }
    }
}
