
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int pts ;
typedef int int64_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, int VAR_1, int64_t VAR_2)
{
    int VAR_3;

    VAR_3 = VAR_1 << 4 | (((VAR_2 >> 30) & 0x07) << 1) | 1;
    *VAR_0++ = VAR_3;
    VAR_3 = (((VAR_2 >> 15) & 0x7fff) << 1) | 1;
    *VAR_0++ = VAR_3 >> 8;
    *VAR_0++ = VAR_3;
    VAR_3 = (((VAR_2) & 0x7fff) << 1) | 1;
    *VAR_0++ = VAR_3 >> 8;
    *VAR_0++ = VAR_3;
}
