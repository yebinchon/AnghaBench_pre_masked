
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int CR; int SR; } ;
typedef scalar_t__ ITStatus ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;

ITStatus FUNC_3(uint32_t VAR_3, uint32_t VAR_4)
{
  ITStatus VAR_5 = VAR_1;
  uint32_t VAR_6 = 0;


  FUNC_2(FUNC_0(VAR_3));
  FUNC_2(FUNC_1(VAR_4));


  VAR_6 = (VAR_0->CR & (VAR_4 << VAR_3)) ;


  if (((VAR_0->SR & (VAR_4 << VAR_3)) != (uint32_t)VAR_1) && VAR_6)
  {

    VAR_5 = VAR_2;
  }
  else
  {

    VAR_5 = VAR_1;
  }

  return VAR_5;
}
