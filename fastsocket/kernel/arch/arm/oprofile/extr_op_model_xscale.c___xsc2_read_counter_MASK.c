
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
__attribute__((used)) static u32 FUNC_0(int VAR_0)
{
 u32 VAR_1 = 0;

 switch (VAR_0) {
 case 132:
  __asm__ __volatile__ ("mrc p14, 0, %0, c1, c1, 0" : "=r" (VAR_1));
  break;
 case 131:
  __asm__ __volatile__ ("mrc p14, 0, %0, c0, c2, 0" : "=r" (VAR_1));
  break;
 case 130:
  __asm__ __volatile__ ("mrc p14, 0, %0, c1, c2, 0" : "=r" (VAR_1));
  break;
 case 129:
  __asm__ __volatile__ ("mrc p14, 0, %0, c2, c2, 0" : "=r" (VAR_1));
  break;
 case 128:
  __asm__ __volatile__ ("mrc p14, 0, %0, c3, c2, 0" : "=r" (VAR_1));
  break;
 }
 return VAR_1;
}
