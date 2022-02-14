
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {int * BTCR; } ;
typedef scalar_t__ FunctionalState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

void FUNC_3(uint32_t VAR_4, FunctionalState VAR_5)
{
  FUNC_2(FUNC_0(VAR_4));
  FUNC_2(FUNC_1(VAR_5));

  if (VAR_5 != VAR_2)
  {

    VAR_3->BTCR[VAR_4] |= VAR_1;
  }
  else
  {

    VAR_3->BTCR[VAR_4] &= VAR_0;
  }
}
