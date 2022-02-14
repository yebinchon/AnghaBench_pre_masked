
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned FUNC_0(unsigned char *VAR_0, unsigned char *VAR_1)
{
    unsigned VAR_2 = 0;
    while (*VAR_1)
    {
        *VAR_0++ = *VAR_1++;
        VAR_2++;
    }
    return VAR_2;
}
