
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ validcount; int lightlevel; TYPE_2__* thinglist; } ;
typedef TYPE_1__ sector_t ;
struct TYPE_6__ {struct TYPE_6__* snext; } ;
typedef TYPE_2__ mobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

void FUNC_1 (sector_t* VAR_6)
{
    mobj_t* VAR_7;
    int VAR_8;





    if (VAR_6->validcount == VAR_5)
 return;


    VAR_6->validcount = VAR_5;

    VAR_8 = (VAR_6->lightlevel >> VAR_1)+VAR_2;

    if (VAR_8 < 0)
 VAR_4 = VAR_3[0];
    else if (VAR_8 >= VAR_0)
 VAR_4 = VAR_3[VAR_0-1];
    else
 VAR_4 = VAR_3[VAR_8];


    for (VAR_7 = VAR_6->thinglist ; VAR_7 ; VAR_7 = VAR_7->snext)
 FUNC_0 (VAR_7);
}
