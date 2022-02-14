
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int CFGR2; scalar_t__* EXTICR; int CFGR1; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_0(void)
{

  VAR_0->CFGR1 &= VAR_1;

  VAR_0->EXTICR[0] = 0;
  VAR_0->EXTICR[1] = 0;
  VAR_0->EXTICR[2] = 0;
  VAR_0->EXTICR[3] = 0;

  VAR_0->CFGR2 |= (uint32_t) VAR_2;
}
