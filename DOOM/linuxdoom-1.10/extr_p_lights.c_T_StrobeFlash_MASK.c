
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ minlight; scalar_t__ maxlight; scalar_t__ darktime; scalar_t__ count; TYPE_1__* sector; scalar_t__ brighttime; } ;
typedef TYPE_2__ strobe_t ;
struct TYPE_4__ {scalar_t__ lightlevel; } ;



void FUNC_0 (strobe_t* VAR_0)
{
    if (--VAR_0->count)
 return;

    if (VAR_0->sector->lightlevel == VAR_0->minlight)
    {
 VAR_0-> sector->lightlevel = VAR_0->maxlight;
 VAR_0->count = VAR_0->brighttime;
    }
    else
    {
 VAR_0-> sector->lightlevel = VAR_0->minlight;
 VAR_0->count =VAR_0->darktime;
    }

}
