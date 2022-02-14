
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int count; scalar_t__ maxlight; scalar_t__ minlight; int mintime; int maxtime; TYPE_1__* sector; } ;
typedef TYPE_2__ lightflash_t ;
struct TYPE_4__ {scalar_t__ lightlevel; } ;


 int FUNC_0 () ;

void FUNC_1 (lightflash_t* VAR_0)
{
    if (--VAR_0->count)
 return;

    if (VAR_0->sector->lightlevel == VAR_0->maxlight)
    {
 VAR_0-> sector->lightlevel = VAR_0->minlight;
 VAR_0->count = (FUNC_0()&VAR_0->mintime)+1;
    }
    else
    {
 VAR_0-> sector->lightlevel = VAR_0->maxlight;
 VAR_0->count = (FUNC_0()&VAR_0->maxtime)+1;
    }

}
