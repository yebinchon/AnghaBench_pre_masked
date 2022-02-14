
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int MCR; int MSR; } ;
typedef TYPE_1__ CAN_TypeDef ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;

uint8_t FUNC_2(CAN_TypeDef* VAR_5)
{
  uint32_t VAR_6 = VAR_4;
  uint8_t VAR_7 = VAR_2;


  FUNC_1(FUNC_0(VAR_5));


  VAR_5->MCR &= ~(uint32_t)VAR_0;


  while(((VAR_5->MSR & VAR_1) == VAR_1)&&(VAR_6!=0x00))
  {
   VAR_6--;
  }
  if((VAR_5->MSR & VAR_1) != VAR_1)
  {

    VAR_7 = VAR_3;
  }

  return (uint8_t)VAR_7;
}
