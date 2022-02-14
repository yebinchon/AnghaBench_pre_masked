
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void *FUNC_0(const void *VAR_0, int VAR_1, size_t VAR_2)
{
 register int VAR_3 asm("0") = (char) VAR_1;
 const void *VAR_4 = VAR_0 + VAR_2;

 asm volatile ("0: srst  %0,%1\n"
        "   jo    0b\n"
        "   jl	1f\n"
        "   la    %0,0\n"
        "1:"
        : "+a" (VAR_4), "+&a" (VAR_0) : "d" (VAR_3) : "cc" );
 return (void *) VAR_4;
}
