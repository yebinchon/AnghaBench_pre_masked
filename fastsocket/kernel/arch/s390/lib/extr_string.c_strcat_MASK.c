
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *FUNC_0(char *VAR_0, const char *VAR_1)
{
 register int VAR_2 asm("0") = 0;
 unsigned long VAR_3;
 char *VAR_4 = VAR_0;

 asm volatile ("0: srst  %0,%1\n"
        "   jo    0b\n"
        "1: mvst  %0,%2\n"
        "   jo    1b"
        : "=&a" (VAR_3), "+a" (VAR_0), "+a" (VAR_1)
        : "d" (VAR_2), "0" (0UL) : "cc", "memory" );
 return VAR_4;
}
