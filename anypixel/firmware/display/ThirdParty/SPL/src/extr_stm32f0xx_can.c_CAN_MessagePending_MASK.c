
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int RF0R; int RF1R; } ;
typedef TYPE_1__ CAN_TypeDef ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

uint8_t FUNC_3(CAN_TypeDef* VAR_2, uint8_t VAR_3)
{
  uint8_t VAR_4=0;

  FUNC_2(FUNC_0(VAR_2));
  FUNC_2(FUNC_1(VAR_3));
  if (VAR_3 == VAR_0)
  {
    VAR_4 = (uint8_t)(VAR_2->RF0R&(uint32_t)0x03);
  }
  else if (VAR_3 == VAR_1)
  {
    VAR_4 = (uint8_t)(VAR_2->RF1R&(uint32_t)0x03);
  }
  else
  {
    VAR_4 = 0;
  }
  return VAR_4;
}
