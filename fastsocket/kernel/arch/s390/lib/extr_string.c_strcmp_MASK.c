
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const char *VAR_0, const char *VAR_1)
{
 register int VAR_2 asm("0") = 0;
 int VAR_3 = 0;

 asm volatile ("0: clst %2,%3\n"
        "   jo   0b\n"
        "   je   1f\n"
        "   ic   %0,0(%2)\n"
        "   ic   %1,0(%3)\n"
        "   sr   %0,%1\n"
        "1:"
        : "+d" (VAR_3), "+d" (VAR_2), "+a" (VAR_0), "+a" (VAR_1)
        : : "cc" );
 return VAR_3;
}
