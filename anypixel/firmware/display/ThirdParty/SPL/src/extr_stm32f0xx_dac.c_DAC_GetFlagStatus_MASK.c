
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int SR; } ;
typedef scalar_t__ FlagStatus ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;

FlagStatus FUNC_3(uint32_t VAR_3, uint32_t VAR_4)
{
  FlagStatus VAR_5 = VAR_1;

  FUNC_2(FUNC_0(VAR_3));
  FUNC_2(FUNC_1(VAR_4));


  if ((VAR_0->SR & (VAR_4 << VAR_3)) != (uint8_t)VAR_1)
  {

    VAR_5 = VAR_2;
  }
  else
  {

    VAR_5 = VAR_1;
  }

  return VAR_5;
}
