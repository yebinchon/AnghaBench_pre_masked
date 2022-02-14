
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;

__attribute__((used)) static inline int
FUNC_1(int *VAR_2, void *VAR_3,
           unsigned long *VAR_4, unsigned long *VAR_5)
{
 unsigned long VAR_6, VAR_7;
 int VAR_8;

 if (VAR_1 == 0) {
  VAR_8 = FUNC_0();
  if (VAR_8 < 0)
   return VAR_8;
  VAR_1 = 1;
 }
 VAR_6 = (unsigned long) VAR_3;
 VAR_7 = (unsigned long) *VAR_2;
 asm volatile(
  "	diag	%0,%1,0x64\n"
  "	ipm	%2\n"
  "	srl	%2,28\n"
  : "+d" (VAR_6), "+d" (VAR_7), "=d" (VAR_8) : : "cc");

 *VAR_4 = VAR_6;
 *VAR_5 = VAR_7;
 return VAR_8;
}
