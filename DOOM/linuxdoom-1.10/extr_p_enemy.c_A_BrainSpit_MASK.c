
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int reactiontime; int y; int momy; TYPE_1__* state; struct TYPE_9__* target; } ;
typedef TYPE_2__ mobj_t ;
struct TYPE_8__ {int tics; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_1 (int *,int ) ;
 size_t VAR_1 ;
 TYPE_2__** VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

void FUNC_2 (mobj_t* VAR_7)
{
    mobj_t* VAR_8;
    mobj_t* VAR_9;

    static int VAR_10 = 0;

    VAR_10 ^= 1;
    if (VAR_3 <= VAR_6 && (!VAR_10))
 return;


    VAR_8 = VAR_2[VAR_1];
    VAR_1 = (VAR_1+1)%VAR_4;


    VAR_9 = FUNC_0 (VAR_7, VAR_8, VAR_0);
    VAR_9->target = VAR_8;
    VAR_9->reactiontime =
 ((VAR_8->y - VAR_7->y)/VAR_9->momy) / VAR_9->state->tics;

    FUNC_1(((void*)0), VAR_5);
}
