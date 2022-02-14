
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, unsigned VAR_1)
{
    if (VAR_1>>28)
        *VAR_0++ = ((VAR_1>>28)&0x7f)|0x80;
    if (VAR_1>>21)
        *VAR_0++ = ((VAR_1>>21)&0x7f)|0x80;
    if (VAR_1>>14)
        *VAR_0++ = ((VAR_1>>14)&0x7f)|0x80;
    if (VAR_1>>7)
        *VAR_0++ = ((VAR_1>>7)&0x7f)|0x80;
}
