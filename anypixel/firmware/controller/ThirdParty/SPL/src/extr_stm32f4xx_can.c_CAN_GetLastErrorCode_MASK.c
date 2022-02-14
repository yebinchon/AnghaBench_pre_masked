
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ ESR; } ;
typedef TYPE_1__ CAN_TypeDef ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

uint8_t FUNC_2(CAN_TypeDef* VAR_1)
{
  uint8_t VAR_2=0;


  FUNC_1(FUNC_0(VAR_1));


  VAR_2 = (((uint8_t)VAR_1->ESR) & (uint8_t)VAR_0);


  return VAR_2;
}
