
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long,unsigned long,long) ;
 int FUNC_1 (unsigned long,unsigned long,long) ;

__attribute__((used)) static inline void FUNC_2 (unsigned long VAR_0, unsigned long VAR_1,
       long VAR_2)
{
 FUNC_0(VAR_0,VAR_1,VAR_2);
 VAR_2 -= 8;
 if (VAR_2 >= 0) {
  unsigned long VAR_3, VAR_4;
  __asm__("ldq_u %0,%1":"=r" (VAR_3):"m" (*(unsigned long *) VAR_1));
  do {
   unsigned long VAR_5;
   __asm__("ldq_u %0,%1":"=r" (VAR_4):"m" (*(unsigned long *)(VAR_1+8)));
   VAR_2 -= 8;
   __asm__("extql %1,%2,%0"
    :"=r" (VAR_3)
    :"r" (VAR_3), "r" (VAR_1));
   __asm__("extqh %1,%2,%0"
    :"=r" (VAR_5)
    :"r" (VAR_4), "r" (VAR_1));
   VAR_1 += 8;
   *(unsigned long *) VAR_0 = VAR_3 | VAR_5;
   VAR_0 += 8;
   VAR_3 = VAR_4;
  } while (VAR_2 >= 0);
 }
 VAR_2 += 8;
 FUNC_1(VAR_0,VAR_1,VAR_2);
}
