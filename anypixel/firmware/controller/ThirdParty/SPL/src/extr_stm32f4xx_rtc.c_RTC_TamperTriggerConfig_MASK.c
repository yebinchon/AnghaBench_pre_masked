
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ TAFCR; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;

void FUNC_3(uint32_t VAR_2, uint32_t VAR_3)
{

  FUNC_2(FUNC_0(VAR_2));
  FUNC_2(FUNC_1(VAR_3));

  if (VAR_3 == VAR_1)
  {

    VAR_0->TAFCR &= (uint32_t)((uint32_t)~(VAR_2 << 1));
  }
  else
  {

    VAR_0->TAFCR |= (uint32_t)(VAR_2 << 1);
  }
}
