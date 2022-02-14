
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;



__attribute__((used)) static inline void FUNC_0(const uint8_t *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    uint16_t *VAR_3 = (uint16_t *)VAR_1;
    const uint8_t *VAR_4 = VAR_0;
    const uint8_t *VAR_5 = VAR_4 + VAR_2;

    while (VAR_4 < VAR_5) {
        register int VAR_6 = *(const uint32_t *)VAR_4;
        VAR_4 += 4;
        *VAR_3++ = ((VAR_6 & 0xFF) >> 3) +
                            ((VAR_6 & 0xF800) >> 6) +
                            ((VAR_6 & 0xF80000) >> 9);
    }
}
