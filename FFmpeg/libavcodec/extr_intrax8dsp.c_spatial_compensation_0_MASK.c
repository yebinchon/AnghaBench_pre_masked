
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int ptrdiff_t ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_3, uint8_t *VAR_4, ptrdiff_t VAR_5)
{
    int VAR_6, VAR_7;
    int VAR_8, VAR_9;
    unsigned int VAR_10;
    int VAR_11;
    uint16_t VAR_12[2][8] = { { 0 } };
    uint16_t VAR_13[2][8] = { { 0 } };

    for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
        VAR_11 = VAR_3[VAR_0 + 7 - VAR_6] << 4;
        for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
            VAR_10 = FUNC_0(VAR_6 - VAR_7);
            VAR_12[VAR_10 & 1][VAR_7] += VAR_11 >> (VAR_10 >> 1);
        }
    }

    for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
        VAR_11 = VAR_3[VAR_1 + VAR_6] << 4;
        for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
            VAR_10 = FUNC_0(VAR_6 - VAR_7);
            VAR_13[VAR_10 & 1][VAR_7] += VAR_11 >> (VAR_10 >> 1);
        }
    }
    for (; VAR_6 < 10; VAR_6++) {
        VAR_11 = VAR_3[VAR_1 + VAR_6] << 4;
        for (VAR_7 = 5; VAR_7 < 8; VAR_7++) {
            VAR_10 = FUNC_0(VAR_6 - VAR_7);
            VAR_13[VAR_10 & 1][VAR_7] += VAR_11 >> (VAR_10 >> 1);
        }
    }
    for (; VAR_6 < 12; VAR_6++) {
        VAR_11 = VAR_3[VAR_1 + VAR_6] << 4;
        for (VAR_7 = 7; VAR_7 < 8; VAR_7++) {
            VAR_10 = FUNC_0(VAR_6 - VAR_7);
            VAR_13[VAR_10 & 1][VAR_7] += VAR_11 >> (VAR_10 >> 1);
        }
    }

    for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
        VAR_13[0][VAR_6] += (VAR_13[1][VAR_6] * 181 + 128) >> 8;
        VAR_12[0][VAR_6] += (VAR_12[1][VAR_6] * 181 + 128) >> 8;
    }
    for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
        for (VAR_8 = 0; VAR_8 < 8; VAR_8++)
            VAR_4[VAR_8] = ((uint32_t) VAR_13[0][VAR_8] * VAR_2[VAR_9 * 16 + VAR_8 * 2 + 0] +
                      (uint32_t) VAR_12[0][VAR_9] * VAR_2[VAR_9 * 16 + VAR_8 * 2 + 1] +
                      0x8000) >> 16;
        VAR_4 += VAR_5;
    }
}
