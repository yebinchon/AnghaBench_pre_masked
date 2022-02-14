
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, unsigned VAR_1, unsigned VAR_2,
                       int VAR_3, int VAR_4, unsigned VAR_5, int VAR_6, int VAR_7)
{
    unsigned VAR_8 = VAR_2 * VAR_1;
    unsigned VAR_9 = 0x1010101 - VAR_2;
    int VAR_10;

    if (VAR_6) {
        unsigned VAR_11 = (VAR_6 * VAR_2) >> VAR_5;
        *VAR_0 = (*VAR_0 * (0x1010101 - VAR_11) + VAR_1 * VAR_11) >> 24;
        VAR_0 += VAR_3;
    }
    for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
        *VAR_0 = (*VAR_0 * VAR_9 + VAR_8) >> 24;
        VAR_0 += VAR_3;
    }
    if (VAR_7) {
        unsigned VAR_12 = (VAR_7 * VAR_2) >> VAR_5;
        *VAR_0 = (*VAR_0 * (0x1010101 - VAR_12) + VAR_1 * VAR_12) >> 24;
    }
}
