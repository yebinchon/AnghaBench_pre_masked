
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int ISR; } ;
typedef scalar_t__ FlagStatus ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;

FlagStatus FUNC_2(uint32_t VAR_4)
{
  FlagStatus VAR_5 = VAR_0;
  uint32_t VAR_6 = 0;


  FUNC_1(FUNC_0(VAR_4));


  VAR_6 = (uint32_t)(VAR_1->ISR & VAR_2);


  if ((VAR_6 & VAR_4) != (uint32_t)VAR_0)
  {
    VAR_5 = VAR_3;
  }
  else
  {
    VAR_5 = VAR_0;
  }
  return VAR_5;
}
