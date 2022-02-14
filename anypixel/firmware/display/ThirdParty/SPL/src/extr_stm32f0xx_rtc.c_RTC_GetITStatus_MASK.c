
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int TAFCR; int CR; int ISR; } ;
typedef scalar_t__ ITStatus ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;

ITStatus FUNC_2(uint32_t VAR_4)
{
  ITStatus VAR_5 = VAR_0;
  uint32_t VAR_6 = 0, VAR_7 = 0;


  FUNC_1(FUNC_0(VAR_4));


  VAR_6 = (uint32_t)(VAR_1->TAFCR & (VAR_2));


  VAR_7 = (uint32_t)((VAR_1->CR & VAR_4) | (VAR_6 & ((VAR_4 >> (VAR_4 >> 18)) >> 15)));


  VAR_6 = (uint32_t)((VAR_1->ISR & (uint32_t)(VAR_4 >> 4)));


  if ((VAR_7 != (uint32_t)VAR_0) && ((VAR_6 & 0x0000FFFF) != (uint32_t)VAR_0))
  {
    VAR_5 = VAR_3;
  }
  else
  {
    VAR_5 = VAR_0;
  }
  return VAR_5;
}
