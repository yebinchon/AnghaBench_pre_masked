
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int64_t ;



__attribute__((used)) static int FUNC_0(uint8_t *VAR_0, int64_t VAR_1)
{
    int64_t VAR_2 = VAR_1 % 300, VAR_3 = VAR_1 / 300;

    *VAR_0++ = VAR_3 >> 25;
    *VAR_0++ = VAR_3 >> 17;
    *VAR_0++ = VAR_3 >> 9;
    *VAR_0++ = VAR_3 >> 1;
    *VAR_0++ = VAR_3 << 7 | VAR_2 >> 8 | 0x7e;
    *VAR_0++ = VAR_2;

    return 6;
}
