
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int** VAR_0 ;

void FUNC_0(uint8_t *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5 = VAR_2 * VAR_3 * 2 / 96;

    for (VAR_4 = 0; VAR_4 < 38; VAR_4++) {
        int VAR_6;
        int VAR_7 = VAR_5 * VAR_0[VAR_4][0];
        int VAR_8 = VAR_5 * VAR_0[VAR_4][1];


        for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++, VAR_7++, VAR_8++) {
            int VAR_9 = (VAR_1[VAR_7 >> 1] >> (4 * (VAR_7 & 1))) & 0xF,
                VAR_10 = (VAR_1[VAR_8 >> 1] >> (4 * (VAR_8 & 1))) & 0xF;

            VAR_1[VAR_8 >> 1] = (VAR_9 << (4 * (VAR_8 & 1))) |
                (VAR_1[VAR_8 >> 1] & (0xF << (4 * !(VAR_8 & 1))));
            VAR_1[VAR_7 >> 1] = (VAR_10 << (4 * (VAR_7 & 1))) |
                (VAR_1[VAR_7 >> 1] & (0xF << (4 * !(VAR_7 & 1))));
        }
    }
}
