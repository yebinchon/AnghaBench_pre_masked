
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int WPR; int ISR; int CR; scalar_t__ SHIFTR; } ;
typedef scalar_t__ ErrorStatus ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ) ;

ErrorStatus FUNC_4(uint32_t VAR_7, uint32_t VAR_8)
{
  ErrorStatus VAR_9 = VAR_0;
  uint32_t VAR_10 = 0;


  FUNC_3(FUNC_0(VAR_7));
  FUNC_3(FUNC_1(VAR_8));


  VAR_2->WPR = 0xCA;
  VAR_2->WPR = 0x53;


  if ((VAR_2->ISR & VAR_4) != VAR_1)
  {

    while (((VAR_2->ISR & VAR_4) != VAR_1) && (VAR_10 != VAR_5))
    {
      VAR_10++;
    }
  }


  if ((VAR_2->ISR & VAR_4) == VAR_1)
  {

    if((VAR_2->CR & VAR_3) == VAR_1)
    {

      VAR_2->SHIFTR = (uint32_t)(uint32_t)(VAR_8) | (uint32_t)(VAR_7);

      if(FUNC_2() == VAR_0)
      {
        VAR_9 = VAR_0;
      }
      else
      {
        VAR_9 = VAR_6;
      }
    }
    else
    {
      VAR_9 = VAR_0;
    }
  }
  else
  {
    VAR_9 = VAR_0;
  }


  VAR_2->WPR = 0xFF;

  return (ErrorStatus)(VAR_9);
}
