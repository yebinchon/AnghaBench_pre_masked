
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ acp1; } ;
struct TYPE_11__ {TYPE_1__ function; } ;
struct TYPE_9__ {int direction; int topheight; int topcountdown; int topwait; int speed; int type; TYPE_3__* sector; TYPE_7__ thinker; } ;
typedef TYPE_2__ vldoor_t ;
struct TYPE_10__ {scalar_t__ special; TYPE_2__* specialdata; } ;
typedef TYPE_3__ sector_t ;
typedef scalar_t__ actionf_p1 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_2 (int,int ,int ) ;
 int VAR_5 ;

void
FUNC_3
( sector_t* VAR_6,
  int VAR_7 )
{
    vldoor_t* VAR_8;

    VAR_8 = FUNC_2 ( sizeof(*VAR_8), VAR_1, 0);

    FUNC_0 (&VAR_8->thinker);

    VAR_6->specialdata = VAR_8;
    VAR_6->special = 0;

    VAR_8->thinker.function.acp1 = (actionf_p1)VAR_2;
    VAR_8->sector = VAR_6;
    VAR_8->direction = 2;
    VAR_8->type = VAR_5;
    VAR_8->speed = VAR_3;
    VAR_8->topheight = FUNC_1(VAR_6);
    VAR_8->topheight -= 4*VAR_0;
    VAR_8->topwait = VAR_4;
    VAR_8->topcountdown = 5 * 60 * 35;
}
