
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

uint8_t FUNC_2(CAN_TypeDef* VAR_6)
{
  uint8_t VAR_7 = VAR_4;


  FUNC_1(FUNC_0(VAR_6));


   VAR_6->MCR = (((VAR_6->MCR) & (uint32_t)(~(uint32_t)VAR_0)) | VAR_1);


  if ((VAR_6->MSR & (VAR_3|VAR_2)) == VAR_3)
  {

    VAR_7 = VAR_5;
  }

   return (uint8_t)VAR_7;
}
