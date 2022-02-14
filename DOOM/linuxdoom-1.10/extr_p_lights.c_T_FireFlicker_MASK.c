
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int count; int minlight; int maxlight; TYPE_1__* sector; } ;
typedef TYPE_2__ fireflicker_t ;
struct TYPE_4__ {int lightlevel; } ;


 int FUNC_0 () ;

void FUNC_1 (fireflicker_t* VAR_0)
{
    int VAR_1;

    if (--VAR_0->count)
 return;

    VAR_1 = (FUNC_0()&3)*16;

    if (VAR_0->sector->lightlevel - VAR_1 < VAR_0->minlight)
 VAR_0->sector->lightlevel = VAR_0->minlight;
    else
 VAR_0->sector->lightlevel = VAR_0->maxlight - VAR_1;

    VAR_0->count = 4;
}
