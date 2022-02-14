
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;


 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_0(uint8_t *VAR_2, uint8_t *VAR_3, uint8_t *VAR_4, ptrdiff_t VAR_5)
{
    int VAR_6, VAR_7, VAR_8;
    int VAR_9 = 0;
    int VAR_10 = 0;
    const uint8_t *VAR_11 = VAR_1 + VAR_0;

    for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
        VAR_9 += (VAR_6 + 1) * (VAR_3[5 + VAR_6] - VAR_3[3 - VAR_6]);
        VAR_10 += (VAR_6 + 1) * (VAR_4[5 + VAR_6] - VAR_4[3 - VAR_6]);
    }
    VAR_8 = (VAR_3[8] + VAR_4[8]) << 4;
    VAR_9 = (17 * VAR_9 + 16) >> 5;
    VAR_10 = (17 * VAR_10 + 16) >> 5;
    for (VAR_7 = 0; VAR_7 < 8; VAR_7++)
        for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
            VAR_2[VAR_7 * VAR_5 + VAR_6] = VAR_11[(VAR_8 + (VAR_6 - 3) * VAR_9 + (VAR_7 - 3) * VAR_10 + 16) >> 5];
}
