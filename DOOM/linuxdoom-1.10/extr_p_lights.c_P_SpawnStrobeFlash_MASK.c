
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
struct TYPE_9__ {int darktime; scalar_t__ maxlight; scalar_t__ minlight; int count; TYPE_7__ thinker; int brighttime; TYPE_3__* sector; } ;
typedef TYPE_2__ strobe_t ;
struct TYPE_10__ {scalar_t__ lightlevel; scalar_t__ special; } ;
typedef TYPE_3__ sector_t ;
typedef scalar_t__ actionf_p1 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_7__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,scalar_t__) ;
 int FUNC_2 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_3 (int,int ,int ) ;

void
FUNC_4
( sector_t* VAR_3,
  int VAR_4,
  int VAR_5 )
{
    strobe_t* VAR_6;

    VAR_6 = FUNC_3 ( sizeof(*VAR_6), VAR_0, 0);

    FUNC_0 (&VAR_6->thinker);

    VAR_6->sector = VAR_3;
    VAR_6->darktime = VAR_4;
    VAR_6->brighttime = VAR_1;
    VAR_6->thinker.function.acp1 = (actionf_p1) VAR_2;
    VAR_6->maxlight = VAR_3->lightlevel;
    VAR_6->minlight = FUNC_1(VAR_3, VAR_3->lightlevel);

    if (VAR_6->minlight == VAR_6->maxlight)
 VAR_6->minlight = 0;


    VAR_3->special = 0;

    if (!VAR_5)
 VAR_6->count = (FUNC_2()&7)+1;
    else
 VAR_6->count = 1;
}
