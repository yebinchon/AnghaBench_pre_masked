
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;






__attribute__((used)) static void FUNC_0(int VAR_0, u32 VAR_1)
{
 switch (VAR_0) {
 case 130:
  __asm__ __volatile__ ("mcr p14, 0, %0, c1, c0, 0" : : "r" (VAR_1));
  break;
 case 129:
  __asm__ __volatile__ ("mcr p14, 0, %0, c2, c0, 0" : : "r" (VAR_1));
  break;
 case 128:
  __asm__ __volatile__ ("mcr p14, 0, %0, c3, c0, 0" : : "r" (VAR_1));
  break;
 }
}
