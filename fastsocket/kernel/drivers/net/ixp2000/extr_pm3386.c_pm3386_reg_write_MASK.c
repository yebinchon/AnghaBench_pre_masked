
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int volatile u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(int VAR_2, int VAR_3, u16 VAR_4)
{
 void *VAR_5;
 u16 VAR_6;



 VAR_5 = (void *)VAR_0;
 if (VAR_2 == 1)
  VAR_5 = (void *)VAR_1;

 *((volatile u16 *)(VAR_5 + (VAR_3 << 1))) = VAR_4;

 VAR_6 = *((volatile u16 *)VAR_5);
 __asm__ __volatile__("mov %0, %0" : "+r" (VAR_6));
}
