
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int HCNT; int VCNT; int TVSTAT; } ;


 TYPE_1__* VAR_0 ;

void FUNC_0(int VAR_1, int VAR_2)
{
   VAR_0->HCNT = VAR_1 << 1;
   VAR_0->VCNT = VAR_2;
   VAR_0->TVSTAT |= 0x200;
}
