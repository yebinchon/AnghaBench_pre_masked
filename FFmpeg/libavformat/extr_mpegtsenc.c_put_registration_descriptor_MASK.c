
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static void FUNC_0(uint8_t **VAR_0, uint32_t VAR_1)
{
    uint8_t *VAR_2 = *VAR_0;
    *VAR_2++ = 0x05;
    *VAR_2++ = 4;
    *VAR_2++ = VAR_1;
    *VAR_2++ = VAR_1 >> 8;
    *VAR_2++ = VAR_1 >> 16;
    *VAR_2++ = VAR_1 >> 24;
    *VAR_0 = VAR_2;
}
