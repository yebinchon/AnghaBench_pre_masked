
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vcdClear; int dirtyState; scalar_t__ vcdHi; scalar_t__ vcdLo; scalar_t__ vcdNrms; } ;


 TYPE_1__* VAR_0 ;

void FUNC_0()
{
 VAR_0->vcdNrms = 0;
 VAR_0->vcdClear = ((VAR_0->vcdClear&~0x0600)|0x0200);
 VAR_0->vcdLo = VAR_0->vcdHi = 0;
 VAR_0->dirtyState |= 0x0008;
}
