
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {int OBR; } ;
typedef scalar_t__ FlagStatus ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

FlagStatus FUNC_0(void)
{
  FlagStatus VAR_5 = VAR_3;

  if ((uint8_t)(VAR_0->OBR & (VAR_1 | VAR_2)) != VAR_3)
  {
    VAR_5 = VAR_4;
  }
  else
  {
    VAR_5 = VAR_3;
  }
  return VAR_5;
}
