
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int WPR; int ISR; scalar_t__ CALR; } ;
typedef int ErrorStatus ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;

ErrorStatus FUNC_4(uint32_t VAR_6,
                                  uint32_t VAR_7,
                                  uint32_t VAR_8)
{
  ErrorStatus VAR_9 = VAR_0;
  uint32_t VAR_10 = 0;


  FUNC_3(FUNC_1(VAR_6));
  FUNC_3(FUNC_2(VAR_7));
  FUNC_3(FUNC_0(VAR_8));


  VAR_3->WPR = 0xCA;
  VAR_3->WPR = 0x53;


  if ((VAR_3->ISR & VAR_4) != VAR_2)
  {

    while (((VAR_3->ISR & VAR_4) != VAR_2) && (VAR_10 != VAR_1))
    {
      VAR_10++;
    }
  }


  if ((VAR_3->ISR & VAR_4) == VAR_2)
  {

    VAR_3->CALR = (uint32_t)((uint32_t)VAR_6 | (uint32_t)VAR_7 | (uint32_t)VAR_8);

    VAR_9 = VAR_5;
  }
  else
  {
    VAR_9 = VAR_0;
  }


  VAR_3->WPR = 0xFF;

  return (ErrorStatus)(VAR_9);
}
