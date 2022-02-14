
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ special; int lightlevel; } ;
typedef TYPE_2__ sector_t ;
struct TYPE_8__ {scalar_t__ acp1; } ;
struct TYPE_11__ {TYPE_1__ function; } ;
struct TYPE_10__ {int direction; TYPE_7__ thinker; int maxlight; int minlight; TYPE_2__* sector; } ;
typedef TYPE_3__ glow_t ;
typedef scalar_t__ actionf_p1 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_2 (int,int ,int ) ;

void FUNC_3(sector_t* VAR_2)
{
    glow_t* VAR_3;

    VAR_3 = FUNC_2( sizeof(*VAR_3), VAR_0, 0);

    FUNC_0(&VAR_3->thinker);

    VAR_3->sector = VAR_2;
    VAR_3->minlight = FUNC_1(VAR_2,VAR_2->lightlevel);
    VAR_3->maxlight = VAR_2->lightlevel;
    VAR_3->thinker.function.acp1 = (actionf_p1) VAR_1;
    VAR_3->direction = -1;

    VAR_2->special = 0;
}
