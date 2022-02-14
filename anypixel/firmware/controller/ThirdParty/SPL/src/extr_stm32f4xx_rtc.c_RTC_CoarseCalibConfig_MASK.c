
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int WPR; int CALIBR; } ;
typedef scalar_t__ ErrorStatus ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;

ErrorStatus FUNC_5(uint32_t VAR_3, uint32_t VAR_4)
{
  ErrorStatus VAR_5 = VAR_0;


  FUNC_4(FUNC_0(VAR_3));
  FUNC_4(FUNC_1(VAR_4));


  VAR_1->WPR = 0xCA;
  VAR_1->WPR = 0x53;


  if (FUNC_2() == VAR_0)
  {
    VAR_5 = VAR_0;
  }
  else
  {

    VAR_1->CALIBR = (uint32_t)(VAR_3 | VAR_4);

    FUNC_3();

    VAR_5 = VAR_2;
  }


  VAR_1->WPR = 0xFF;

  return VAR_5;
}
