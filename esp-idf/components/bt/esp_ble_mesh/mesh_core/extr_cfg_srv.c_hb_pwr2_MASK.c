
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u16_t ;



__attribute__((used)) static u16_t FUNC_0(u8_t VAR_0, u8_t VAR_1)
{
    if (!VAR_0) {
        return 0x0000;
    } else if (VAR_0 == 0xff || VAR_0 == 0x11) {
        return 0xffff;
    } else {
        return (1 << (VAR_0 - VAR_1));
    }
}
