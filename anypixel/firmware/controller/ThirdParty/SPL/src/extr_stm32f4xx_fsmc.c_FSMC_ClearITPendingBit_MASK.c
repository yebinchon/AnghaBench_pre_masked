
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ SR2; } ;
struct TYPE_5__ {scalar_t__ SR3; } ;
struct TYPE_4__ {scalar_t__ SR4; } ;


 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

void FUNC_3(uint32_t VAR_5, uint32_t VAR_6)
{

  FUNC_2(FUNC_1(VAR_5));
  FUNC_2(FUNC_0(VAR_6));

  if(VAR_5 == VAR_1)
  {
    VAR_0->SR2 &= ~(VAR_6 >> 3);
  }
  else if(VAR_5 == VAR_3)
  {
    VAR_2->SR3 &= ~(VAR_6 >> 3);
  }

  else
  {
    VAR_4->SR4 &= ~(VAR_6 >> 3);
  }
}
