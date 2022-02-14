
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;
typedef int AVCRC ;


 int FUNC_0 (int const) ;

uint32_t FUNC_1(const AVCRC *VAR_0, uint32_t VAR_1,
                const uint8_t *VAR_2, size_t VAR_3)
{
    const uint8_t *VAR_4 = VAR_2 + VAR_3;


    if (!VAR_0[256]) {
        while (((intptr_t) VAR_2 & 3) && VAR_2 < VAR_4)
            VAR_1 = VAR_0[((uint8_t) VAR_1) ^ *VAR_2++] ^ (VAR_1 >> 8);

        while (VAR_2 < VAR_4 - 3) {
            VAR_1 ^= FUNC_0(*(const uint32_t *) VAR_2); VAR_2 += 4;
            VAR_1 = VAR_0[3 * 256 + ( VAR_1 & 0xFF)] ^
                  VAR_0[2 * 256 + ((VAR_1 >> 8 ) & 0xFF)] ^
                  VAR_0[1 * 256 + ((VAR_1 >> 16) & 0xFF)] ^
                  VAR_0[0 * 256 + ((VAR_1 >> 24) )];
        }
    }

    while (VAR_2 < VAR_4)
        VAR_1 = VAR_0[((uint8_t) VAR_1) ^ *VAR_2++] ^ (VAR_1 >> 8);

    return VAR_1;
}
