
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;

__attribute__((used)) static inline void FUNC_0 (unsigned long VAR_3)
{
 if (VAR_0) {
  unsigned long VAR_4;

  __asm__ __volatile__ (".chip 68040\n\t"
          "nop\n\t"
          "ptestr (%1)\n\t"
          "movec %%mmusr,%0\n\t"
          ".chip 68k"
          : "=r" (VAR_4)
          : "a" (VAR_3));

  VAR_4 &= VAR_2;
  VAR_4 |= VAR_3 & ~VAR_2;

  __asm__ __volatile__ (".chip 68040\n\t"
          "nop\n\t"
          "cpushl %%bc,(%0)\n\t"
          ".chip 68k"
          : : "a" (VAR_4));
 }
 else if (VAR_1) {
  unsigned long VAR_5;
  __asm__ __volatile__ (".chip 68060\n\t"
          "plpar (%0)\n\t"
          ".chip 68k"
          : "=a" (VAR_5)
          : "0" (VAR_3));
  __asm__ __volatile__ (".chip 68060\n\t"
          "cpushl %%bc,(%0)\n\t"
          ".chip 68k"
          : : "a" (VAR_5));
 }
 else {





  unsigned long VAR_6;
  asm volatile ("movec %%cacr,%0" : "=r" (VAR_6));
  VAR_6 += 4;
  asm volatile ("movec %0,%%caar\n\t"
         "movec %1,%%cacr"
         : : "r" (VAR_3), "r" (VAR_6));
  asm volatile ("movec %0,%%caar\n\t"
         "movec %1,%%cacr"
         : : "r" (VAR_3 + 4), "r" (VAR_6));
 }
}
