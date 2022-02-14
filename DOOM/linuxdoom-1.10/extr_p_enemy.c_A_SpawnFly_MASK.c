
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int mobjtype_t ;
struct TYPE_11__ {int y; int x; TYPE_1__* info; int z; struct TYPE_11__* target; scalar_t__ reactiontime; } ;
typedef TYPE_2__ mobj_t ;
struct TYPE_10__ {int seestate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int VAR_12 ;

void FUNC_7 (mobj_t* VAR_13)
{
    mobj_t* VAR_14;
    mobj_t* VAR_15;
    mobj_t* VAR_16;
    int VAR_17;
    mobjtype_t VAR_18;

    if (--VAR_13->reactiontime)
 return;

    VAR_16 = VAR_13->target;


    VAR_15 = FUNC_4 (VAR_16->x, VAR_16->y, VAR_16->z, VAR_8);
    FUNC_6 (VAR_15, VAR_12);


    VAR_17 = FUNC_1 ();



    if ( VAR_17<50 )
 VAR_18 = VAR_9;
    else if (VAR_17<90)
 VAR_18 = VAR_6;
    else if (VAR_17<120)
 VAR_18 = VAR_7;
    else if (VAR_17<130)
 VAR_18 = VAR_5;
    else if (VAR_17<160)
 VAR_18 = VAR_3;
    else if (VAR_17<162)
 VAR_18 = VAR_11;
    else if (VAR_17<172)
 VAR_18 = VAR_10;
    else if (VAR_17<192)
 VAR_18 = VAR_0;
    else if (VAR_17<222)
 VAR_18 = VAR_2;
    else if (VAR_17<246)
 VAR_18 = VAR_4;
    else
 VAR_18 = VAR_1;

    VAR_14 = FUNC_4 (VAR_16->x, VAR_16->y, VAR_16->z, VAR_18);
    if (FUNC_0 (VAR_14, 1) )
 FUNC_3 (VAR_14, VAR_14->info->seestate);


    FUNC_5 (VAR_14, VAR_14->x, VAR_14->y);


    FUNC_2 (VAR_13);
}
