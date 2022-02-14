
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int volatile u8 ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(int VAR_1, u8 VAR_2)
{
 u8 VAR_3;



 *((volatile u8 *)(VAR_0 + VAR_1)) = VAR_2;

 VAR_3 = *((volatile u8 *)VAR_0);
 __asm__ __volatile__("mov %0, %0" : "+r" (VAR_3));
}
