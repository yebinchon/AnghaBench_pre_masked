
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const void *VAR_0, const void *VAR_1, size_t VAR_2)
{
 register unsigned long VAR_3 asm("2") = (unsigned long) VAR_0;
 register unsigned long VAR_4 asm("3") = (unsigned long) VAR_2;
 register unsigned long VAR_5 asm("4") = (unsigned long) VAR_1;
 register unsigned long VAR_6 asm("5") = (unsigned long) VAR_2;
 int VAR_7;

 asm volatile ("0: clcle %1,%3,0\n"
        "   jo    0b\n"
        "   ipm   %0\n"
        "   srl   %0,28"
        : "=&d" (VAR_7), "+a" (VAR_3), "+a" (VAR_4), "+a" (VAR_5), "+a" (VAR_6)
        : : "cc" );
 if (VAR_7)
  VAR_7 = *(char *) VAR_3 - *(char *) VAR_5;
 return VAR_7;
}
