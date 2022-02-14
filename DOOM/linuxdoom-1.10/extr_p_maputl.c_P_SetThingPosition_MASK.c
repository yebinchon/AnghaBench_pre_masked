
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* sector; } ;
typedef TYPE_1__ subsector_t ;
struct TYPE_8__ {TYPE_3__* thinglist; } ;
typedef TYPE_2__ sector_t ;
struct TYPE_9__ {int x; int y; int flags; struct TYPE_9__* bprev; struct TYPE_9__* bnext; struct TYPE_9__* sprev; struct TYPE_9__* snext; TYPE_1__* subsector; } ;
typedef TYPE_3__ mobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int,int) ;
 TYPE_3__** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_1 (mobj_t* VAR_8)
{
    subsector_t* VAR_9;
    sector_t* VAR_10;
    int VAR_11;
    int VAR_12;
    mobj_t** VAR_13;



    VAR_9 = FUNC_0 (VAR_8->x,VAR_8->y);
    VAR_8->subsector = VAR_9;

    if ( ! (VAR_8->flags & VAR_2) )
    {

 VAR_10 = VAR_9->sector;

 VAR_8->sprev = ((void*)0);
 VAR_8->snext = VAR_10->thinglist;

 if (VAR_10->thinglist)
     VAR_10->thinglist->sprev = VAR_8;

 VAR_10->thinglist = VAR_8;
    }



    if ( ! (VAR_8->flags & VAR_1) )
    {

 VAR_11 = (VAR_8->x - VAR_5)>>VAR_0;
 VAR_12 = (VAR_8->y - VAR_6)>>VAR_0;

 if (VAR_11>=0
     && VAR_11 < VAR_7
     && VAR_12>=0
     && VAR_12 < VAR_4)
 {
     VAR_13 = &VAR_3[VAR_12*VAR_7+VAR_11];
     VAR_8->bprev = ((void*)0);
     VAR_8->bnext = *VAR_13;
     if (*VAR_13)
  (*VAR_13)->bprev = VAR_8;

     *VAR_13 = VAR_8;
 }
 else
 {

     VAR_8->bnext = VAR_8->bprev = ((void*)0);
 }
    }
}
