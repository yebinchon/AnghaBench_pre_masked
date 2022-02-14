
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int CIR; int CR2; int CFGR3; int CFGR2; int CFGR; int CR; } ;


 TYPE_1__* VAR_0 ;

void FUNC_0(void)
{

  VAR_0->CR |= (uint32_t)0x00000001;






  VAR_0->CFGR &= (uint32_t)0x08FFB80C;



  VAR_0->CR &= (uint32_t)0xFEF6FFFF;


  VAR_0->CR &= (uint32_t)0xFFFBFFFF;


  VAR_0->CFGR &= (uint32_t)0xFFC0FFFF;


  VAR_0->CFGR2 &= (uint32_t)0xFFFFFFF0;


  VAR_0->CFGR3 &= (uint32_t)0xFFFFFEAC;


  VAR_0->CR2 &= (uint32_t)0xFFFFFFFE;


  VAR_0->CIR = 0x00000000;
}
