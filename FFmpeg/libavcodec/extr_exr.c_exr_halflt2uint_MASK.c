
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



__attribute__((used)) static inline uint16_t FUNC_0(uint16_t VAR_0)
{
    unsigned VAR_1 = 14 - (VAR_0 >> 10);
    if (VAR_1 >= 14) {
        if (VAR_1 == 14)
            return (VAR_0 >> 9) & 1;
        else
            return (VAR_0 & 0x8000) ? 0 : 0xffff;
    }
    VAR_0 <<= 6;
    return (VAR_0 + (1 << 16)) >> (VAR_1 + 1);
}
