
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int ESR; int MSR; int TSR; int RF0R; int RF1R; } ;
typedef scalar_t__ FlagStatus ;
typedef TYPE_1__ CAN_TypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ) ;

FlagStatus FUNC_3(CAN_TypeDef* VAR_6, uint32_t VAR_7)
{
  FlagStatus VAR_8 = VAR_4;


  FUNC_2(FUNC_0(VAR_6));
  FUNC_2(FUNC_1(VAR_7));


  if((VAR_7 & VAR_0) != (uint32_t)VAR_4)
  {

    if ((VAR_6->ESR & (VAR_7 & 0x000FFFFF)) != (uint32_t)VAR_4)
    {

      VAR_8 = VAR_5;
    }
    else
    {

      VAR_8 = VAR_4;
    }
  }
  else if((VAR_7 & VAR_1) != (uint32_t)VAR_4)
  {

    if ((VAR_6->MSR & (VAR_7 & 0x000FFFFF)) != (uint32_t)VAR_4)
    {

      VAR_8 = VAR_5;
    }
    else
    {

      VAR_8 = VAR_4;
    }
  }
  else if((VAR_7 & VAR_3) != (uint32_t)VAR_4)
  {

    if ((VAR_6->TSR & (VAR_7 & 0x000FFFFF)) != (uint32_t)VAR_4)
    {

      VAR_8 = VAR_5;
    }
    else
    {

      VAR_8 = VAR_4;
    }
  }
  else if((VAR_7 & VAR_2) != (uint32_t)VAR_4)
  {

    if ((VAR_6->RF0R & (VAR_7 & 0x000FFFFF)) != (uint32_t)VAR_4)
    {

      VAR_8 = VAR_5;
    }
    else
    {

      VAR_8 = VAR_4;
    }
  }
  else
  {

    if ((uint32_t)(VAR_6->RF1R & (VAR_7 & 0x000FFFFF)) != (uint32_t)VAR_4)
    {

      VAR_8 = VAR_5;
    }
    else
    {

      VAR_8 = VAR_4;
    }
  }

  return VAR_8;
}
