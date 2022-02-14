
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static inline void FUNC_2(void)
{
 unsigned long long VAR_2, VAR_3, VAR_4;
 unsigned long VAR_5;

 VAR_2 = VAR_0;
 VAR_3 = VAR_1;
 VAR_4 = 0;


 FUNC_1(VAR_5);


 __asm__ __volatile__ (
  "getcfg	%3, 0, %0\n\t"
  "or	%0, %2, %0\n\t"
  "putcfg	%3, 0, %0\n\t"
  "synci"
  : "=&r" (VAR_4)
  : "0" (VAR_4), "r" (VAR_3), "r" (VAR_2));

 FUNC_0(VAR_5);
}
