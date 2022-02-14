
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;



__attribute__((used)) static inline void FUNC_0(const uint8_t *VAR_0, uint8_t *VAR_1,
                                  int VAR_2)
{
    uint16_t *VAR_3 = (uint16_t *)VAR_1;
    const uint8_t *VAR_4 = VAR_0;
    const uint8_t *VAR_5 = VAR_4 + VAR_2;

    while (VAR_4 < VAR_5) {
        const int VAR_6 = *VAR_4++;
        const int VAR_7 = *VAR_4++;
        const int VAR_8 = *VAR_4++;
        *VAR_3++ = (VAR_6 >> 3) | ((VAR_7 & 0xFC) << 3) | ((VAR_8 & 0xF8) << 8);
    }
}
