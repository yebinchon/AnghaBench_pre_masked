
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int CR; int SR; } ;
typedef scalar_t__ FlagStatus ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;

FlagStatus FUNC_2(uint16_t VAR_4)
{
  FlagStatus VAR_5 = VAR_2;
  uint32_t VAR_6 = 0;


  FUNC_1(FUNC_0(VAR_4));


  if ((VAR_4 & VAR_1) != (uint16_t)VAR_2 )
  {
    VAR_6 = VAR_0->CR;
  }
  else
  {
    VAR_6 = VAR_0->SR;
  }


  if ((VAR_6 & VAR_4) != (uint16_t)VAR_2)
  {

    VAR_5 = VAR_3;
  }
  else
  {

    VAR_5 = VAR_2;
  }


  return VAR_5;
}
