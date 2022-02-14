
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ volatile uint32_t ;
struct TYPE_2__ {int MAIN_CNT; } ;
typedef TYPE_1__ hpetReg_t ;


 scalar_t__ VAR_0 ;

uint64_t
FUNC_0(void)
{
 hpetReg_t *VAR_1 = (hpetReg_t *) VAR_0;
 volatile uint32_t *VAR_2 = (uint32_t *) &VAR_1->MAIN_CNT;
 uint32_t VAR_3;
 uint32_t VAR_4;

 do {
  VAR_3 = *(VAR_2 + 1);
  VAR_4 = *VAR_2;
 } while (VAR_3 != *(VAR_2 + 1));

 return (((uint64_t) VAR_3) << 32) | VAR_4;
}
