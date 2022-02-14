
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int WPR; int CR; } ;
typedef scalar_t__ FunctionalState ;
typedef scalar_t__ ErrorStatus ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;

ErrorStatus FUNC_4(FunctionalState VAR_5)
{
  ErrorStatus VAR_6 = VAR_1;


  FUNC_3(FUNC_0(VAR_5));


  VAR_2->WPR = 0xCA;
  VAR_2->WPR = 0x53;


  if (FUNC_1() == VAR_1)
  {
    VAR_6 = VAR_1;
  }
  else
  {
    if (VAR_5 != VAR_0)
    {

      VAR_2->CR |= VAR_3;
    }
    else
    {

      VAR_2->CR &= ~VAR_3;
    }

    FUNC_2();

    VAR_6 = VAR_4;
  }


  VAR_2->WPR = 0xFF;

  return VAR_6;
}
