
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int ESR; int RF0R; int RF1R; int TSR; int MSR; } ;
typedef TYPE_1__ CAN_TypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;

void FUNC_3(CAN_TypeDef* VAR_5, uint32_t VAR_6)
{
  uint32_t VAR_7=0;

  FUNC_2(FUNC_0(VAR_5));
  FUNC_2(FUNC_1(VAR_6));

  if (VAR_6 == VAR_3)
  {

    VAR_5->ESR = (uint32_t)VAR_4;
  }
  else
  {
    VAR_7 = VAR_6 & 0x000FFFFF;

    if ((VAR_6 & VAR_0)!=(uint32_t)VAR_4)
    {

      VAR_5->RF0R = (uint32_t)(VAR_7);
    }
    else if ((VAR_6 & VAR_1)!=(uint32_t)VAR_4)
    {

      VAR_5->RF1R = (uint32_t)(VAR_7);
    }
    else if ((VAR_6 & VAR_2)!=(uint32_t)VAR_4)
    {

      VAR_5->TSR = (uint32_t)(VAR_7);
    }
    else
    {

      VAR_5->MSR = (uint32_t)(VAR_7);
    }
  }
}
