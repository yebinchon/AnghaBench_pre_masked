
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int CR; int WPR; } ;
typedef scalar_t__ FunctionalState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;

void FUNC_3(uint32_t VAR_4, FunctionalState VAR_5)
{
  uint32_t VAR_6 = 0;


  FUNC_2(FUNC_1(VAR_4));
  FUNC_2(FUNC_0(VAR_5));


  VAR_6 = (uint32_t)(VAR_1->CR & (uint32_t)~(VAR_3 | VAR_2));


  if (VAR_5 != VAR_0)
  {
    VAR_6 |= (uint32_t)(VAR_4 | VAR_2);
  }
  else
  {
    VAR_6 |= (uint32_t)(VAR_4);
  }


  VAR_1->WPR = 0xCA;
  VAR_1->WPR = 0x53;


  VAR_1->CR = (uint32_t)VAR_6;


  VAR_1->WPR = 0xFF;
}
