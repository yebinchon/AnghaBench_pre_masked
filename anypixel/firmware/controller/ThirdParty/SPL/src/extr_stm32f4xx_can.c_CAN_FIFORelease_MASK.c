
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {int RF1R; int RF0R; } ;
typedef TYPE_1__ CAN_TypeDef ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

void FUNC_3(CAN_TypeDef* VAR_3, uint8_t VAR_4)
{

  FUNC_2(FUNC_0(VAR_3));
  FUNC_2(FUNC_1(VAR_4));

  if (VAR_4 == VAR_0)
  {
    VAR_3->RF0R |= VAR_1;
  }

  else
  {
    VAR_3->RF1R |= VAR_2;
  }
}
