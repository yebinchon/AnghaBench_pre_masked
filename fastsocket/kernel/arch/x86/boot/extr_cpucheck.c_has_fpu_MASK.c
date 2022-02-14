
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(void)
{
 u16 VAR_2 = -1, VAR_3 = -1;
 u32 VAR_4;

 asm("movl %%cr0,%0" : "=r" (VAR_4));
 if (VAR_4 & (VAR_0|VAR_1)) {
  VAR_4 &= ~(VAR_0|VAR_1);
  asm volatile("movl %0,%%cr0" : : "r" (VAR_4));
 }

 asm volatile("fninit ; fnstsw %0 ; fnstcw %1"
       : "+m" (VAR_3), "+m" (VAR_2));

 return VAR_3 == 0 && (VAR_2 & 0x103f) == 0x003f;
}
