
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ SR2; } ;
struct TYPE_5__ {scalar_t__ SR3; } ;
struct TYPE_4__ {scalar_t__ SR4; } ;
typedef scalar_t__ FunctionalState ;


 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

void FUNC_4(uint32_t VAR_6, uint32_t VAR_7, FunctionalState VAR_8)
{
  FUNC_3(FUNC_1(VAR_6));
  FUNC_3(FUNC_0(VAR_7));
  FUNC_3(FUNC_2(VAR_8));

  if (VAR_8 != VAR_0)
  {

    if(VAR_6 == VAR_2)
    {
      VAR_1->SR2 |= VAR_7;
    }

    else if (VAR_6 == VAR_4)
    {
      VAR_3->SR3 |= VAR_7;
    }

    else
    {
      VAR_5->SR4 |= VAR_7;
    }
  }
  else
  {

    if(VAR_6 == VAR_2)
    {

      VAR_1->SR2 &= (uint32_t)~VAR_7;
    }

    else if (VAR_6 == VAR_4)
    {
      VAR_3->SR3 &= (uint32_t)~VAR_7;
    }

    else
    {
      VAR_5->SR4 &= (uint32_t)~VAR_7;
    }
  }
}
