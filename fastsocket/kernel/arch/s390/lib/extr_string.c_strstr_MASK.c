
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* FUNC_0 (char const*) ;

char * FUNC_1(const char * VAR_0,const char * VAR_1)
{
 int VAR_2, VAR_3;

 VAR_3 = FUNC_0(VAR_1) - VAR_1;
 if (!VAR_3)
  return (char *) VAR_0;
 VAR_2 = FUNC_0(VAR_0) - VAR_0;
 while (VAR_2-- >= VAR_3) {
  register unsigned long VAR_4 asm("2") = (unsigned long) VAR_0;
  register unsigned long VAR_5 asm("3") = (unsigned long) VAR_3;
  register unsigned long VAR_6 asm("4") = (unsigned long) VAR_1;
  register unsigned long VAR_7 asm("5") = (unsigned long) VAR_3;
  int VAR_8;

  asm volatile ("0: clcle %1,%3,0\n"
         "   jo    0b\n"
         "   ipm   %0\n"
         "   srl   %0,28"
         : "=&d" (VAR_8), "+a" (VAR_4), "+a" (VAR_5),
           "+a" (VAR_6), "+a" (VAR_7) : : "cc" );
  if (!VAR_8)
   return (char *) VAR_0;
  VAR_0++;
 }
 return ((void*)0);
}
