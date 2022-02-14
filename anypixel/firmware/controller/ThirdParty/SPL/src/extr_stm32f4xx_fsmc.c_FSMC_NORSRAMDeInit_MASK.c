
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {int* BTCR; } ;
struct TYPE_3__ {int* BWTR; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;

void FUNC_2(uint32_t VAR_3)
{

  FUNC_1(FUNC_0(VAR_3));


  if(VAR_3 == VAR_2)
  {
    VAR_0->BTCR[VAR_3] = 0x000030DB;
  }

  else
  {
    VAR_0->BTCR[VAR_3] = 0x000030D2;
  }
  VAR_0->BTCR[VAR_3 + 1] = 0x0FFFFFFF;
  VAR_1->BWTR[VAR_3] = 0x0FFFFFFF;
}
