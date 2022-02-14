
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ count; } ;



 size_t FUNC_0 (int ,unsigned int) ;


 TYPE_1__* VAR_0 ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_1)
{
 u32 VAR_2 = -(u32)VAR_0[FUNC_0(FUNC_1(), VAR_1)].count;
 switch (VAR_1) {
 case 130:
  asm volatile("mcr p15, 0, %0, c15, c12, 1" : : "r" (VAR_2));
  break;

 case 129:
  asm volatile("mcr p15, 0, %0, c15, c12, 2" : : "r" (VAR_2));
  break;

 case 128:
  asm volatile("mcr p15, 0, %0, c15, c12, 3" : : "r" (VAR_2));
  break;
 }
}
