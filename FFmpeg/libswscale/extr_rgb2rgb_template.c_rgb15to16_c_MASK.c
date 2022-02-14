
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int uint32_t ;
typedef unsigned short uint16_t ;



__attribute__((used)) static inline void FUNC_0(const uint8_t *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    register uint8_t *VAR_3 = VAR_1;
    register const uint8_t *VAR_4 = VAR_0;
    register const uint8_t *VAR_5 = VAR_4 + VAR_2;
    const uint8_t *VAR_6 = VAR_5 - 3;

    while (VAR_4 < VAR_6) {
        register unsigned VAR_7 = *((const uint32_t *)VAR_4);
        *((uint32_t *)VAR_3) = (VAR_7 & 0x7FFF7FFF) + (VAR_7 & 0x7FE07FE0);
        VAR_3 += 4;
        VAR_4 += 4;
    }
    if (VAR_4 < VAR_5) {
        register unsigned short VAR_8 = *((const uint16_t *)VAR_4);
        *((uint16_t *)VAR_3) = (VAR_8 & 0x7FFF) + (VAR_8 & 0x7FE0);
    }
}
