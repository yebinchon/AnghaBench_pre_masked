
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int CFGR; int PLLCFGR; int CIR; int CR; } ;


 TYPE_1__* VAR_0 ;

void FUNC_0(void)
{

  VAR_0->CR |= (uint32_t)0x00000001;


  VAR_0->CFGR = 0x00000000;


  VAR_0->CR &= (uint32_t)0xFEF6FFFF;


  VAR_0->PLLCFGR = 0x24003010;


  VAR_0->CR &= (uint32_t)0xFFFBFFFF;


  VAR_0->CIR = 0x00000000;
}
