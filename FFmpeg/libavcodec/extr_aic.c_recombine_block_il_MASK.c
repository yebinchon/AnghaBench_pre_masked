
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int int16_t ;



__attribute__((used)) static void FUNC_0(int16_t *VAR_0, const uint8_t *VAR_1,
                               int16_t **VAR_2, int16_t **VAR_3,
                               int VAR_4)
{
    int VAR_5, VAR_6;

    if (VAR_4 < 2) {
        for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
            for (VAR_6 = 0; VAR_6 < 4; VAR_6++)
                VAR_0[VAR_1[VAR_5 * 8 + VAR_6]] = (*VAR_2)[VAR_6];
            for (VAR_6 = 0; VAR_6 < 4; VAR_6++)
                VAR_0[VAR_1[VAR_5 * 8 + VAR_6 + 4]] = (*VAR_3)[VAR_6];
            *VAR_2 += 4;
            *VAR_3 += 4;
        }
    } else {
        for (VAR_5 = 0; VAR_5 < 64; VAR_5++)
            VAR_0[VAR_1[VAR_5]] = (*VAR_3)[VAR_5];
        *VAR_3 += 64;
    }
}
