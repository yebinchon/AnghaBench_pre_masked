
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;



__attribute__((used)) static inline void FUNC_0(const uint8_t *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    uint8_t *VAR_3 = VAR_1;
    const uint16_t *VAR_4 = (const uint16_t *)VAR_0;
    const uint16_t *VAR_5 = VAR_4 + VAR_2 / 2;

    while (VAR_4 < VAR_5) {
        register uint16_t VAR_6 = *VAR_4++;






        *VAR_3++ = ((VAR_6&0x001F)<<3) | ((VAR_6&0x001F)>> 2);
        *VAR_3++ = ((VAR_6&0x07E0)>>3) | ((VAR_6&0x07E0)>> 9);
        *VAR_3++ = ((VAR_6&0xF800)>>8) | ((VAR_6&0xF800)>>13);
        *VAR_3++ = 255;

    }
}
