
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;

unsigned char FUNC_1(char *VAR_0)
{
    unsigned char VAR_1;

    VAR_1 = FUNC_0(*VAR_0) & 0x0f;
    VAR_1 = VAR_1 << 4;
    VAR_0++;
    VAR_1 |= FUNC_0(*VAR_0) & 0x0f;

    return VAR_1;
}
