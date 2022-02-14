
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

void FUNC_0(size_t VAR_1, void *VAR_2)
{
    VAR_0;
    volatile char *VAR_3 = (volatile char *)VAR_2;
    while (VAR_1--)
        *VAR_3++ = '\0';
}
