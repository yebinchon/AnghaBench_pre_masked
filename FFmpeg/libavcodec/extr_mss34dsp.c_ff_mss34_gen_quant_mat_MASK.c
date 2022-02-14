
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int* VAR_0 ;
 int* VAR_1 ;

void FUNC_0(uint16_t *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;
    const uint8_t *VAR_6 = VAR_4 ? VAR_1 : VAR_0;

    if (VAR_3 >= 50) {
        int VAR_7 = 200 - 2 * VAR_3;

        for (VAR_5 = 0; VAR_5 < 64; VAR_5++)
            VAR_2[VAR_5] = (VAR_6[VAR_5] * VAR_7 + 50) / 100;
    } else {
        for (VAR_5 = 0; VAR_5 < 64; VAR_5++)
            VAR_2[VAR_5] = (5000 * VAR_6[VAR_5] / VAR_3 + 50) / 100;
    }
}
