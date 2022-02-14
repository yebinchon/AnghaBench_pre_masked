
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, unsigned VAR_1, unsigned VAR_2,
                        const uint8_t *VAR_3, int VAR_4, int VAR_5,
                        unsigned VAR_6, unsigned VAR_7, unsigned VAR_8, unsigned VAR_9)
{
    unsigned VAR_10, VAR_11, VAR_12, VAR_13 = 0;
    unsigned VAR_14 = 3 - VAR_5;
    unsigned VAR_15 = 7 >> VAR_5;
    unsigned VAR_16 = (1 << (1 << VAR_5)) - 1;
    unsigned VAR_17 = 255 / VAR_16;

    for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
        VAR_10 = VAR_9;
        for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
            VAR_13 += ((VAR_3[VAR_10 >> VAR_14] >> ((~VAR_10 & VAR_15) << VAR_5)) & VAR_16)
                 * VAR_17;
            VAR_10++;
        }
        VAR_3 += VAR_4;
    }
    VAR_2 = (VAR_13 >> VAR_8) * VAR_2;
    *VAR_0 = ((0x1010101 - VAR_2) * *VAR_0 + VAR_2 * VAR_1) >> 24;
}
