
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ acp1; } ;
struct TYPE_10__ {TYPE_1__ function; } ;
struct TYPE_8__ {int topcountdown; int speed; int type; scalar_t__ direction; TYPE_3__* sector; TYPE_6__ thinker; } ;
typedef TYPE_2__ vldoor_t ;
struct TYPE_9__ {scalar_t__ special; TYPE_2__* specialdata; } ;
typedef TYPE_3__ sector_t ;
typedef scalar_t__ actionf_p1 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int,int ,int ) ;
 int VAR_3 ;

void FUNC_2 (sector_t* VAR_4)
{
    vldoor_t* VAR_5;

    VAR_5 = FUNC_1 ( sizeof(*VAR_5), VAR_0, 0);

    FUNC_0 (&VAR_5->thinker);

    VAR_4->specialdata = VAR_5;
    VAR_4->special = 0;

    VAR_5->thinker.function.acp1 = (actionf_p1)VAR_1;
    VAR_5->sector = VAR_4;
    VAR_5->direction = 0;
    VAR_5->type = VAR_3;
    VAR_5->speed = VAR_2;
    VAR_5->topcountdown = 30 * 35;
}
