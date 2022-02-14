
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ ECCR2; } ;
struct TYPE_3__ {scalar_t__ ECCR3; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;

uint32_t FUNC_0(uint32_t VAR_3)
{
  uint32_t VAR_4 = 0x00000000;

  if(VAR_3 == VAR_1)
  {

    VAR_4 = VAR_0->ECCR2;
  }
  else
  {

    VAR_4 = VAR_2->ECCR3;
  }

  return(VAR_4);
}
