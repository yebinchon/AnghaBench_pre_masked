
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int int32_t ;



__attribute__((used)) static inline uint16_t FUNC_0(int32_t VAR_0)
{
    int32_t VAR_1 = VAR_0 >> 23;


    if (VAR_1 <= 127 + 7 - 24)
        return 0;
    if (VAR_1 >= 127)
        return 0xffff;
    VAR_0 &= 0x007fffff;
    return (VAR_0 + (1 << 23)) >> (127 + 7 - VAR_1);
}
