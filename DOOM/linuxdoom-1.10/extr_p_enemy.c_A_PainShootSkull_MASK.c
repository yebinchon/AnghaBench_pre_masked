
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ acp1; } ;
struct TYPE_16__ {struct TYPE_16__* next; TYPE_1__ function; } ;
typedef TYPE_3__ thinker_t ;
struct TYPE_17__ {size_t type; int target; scalar_t__ y; scalar_t__ x; scalar_t__ z; TYPE_2__* info; } ;
typedef TYPE_4__ mobj_t ;
typedef scalar_t__ fixed_t ;
typedef size_t angle_t ;
typedef scalar_t__ actionf_p1 ;
struct TYPE_18__ {int radius; } ;
struct TYPE_15__ {int radius; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int ) ;
 size_t VAR_2 ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*,TYPE_4__*,int) ;
 scalar_t__ VAR_3 ;
 TYPE_4__* FUNC_3 (scalar_t__,scalar_t__,scalar_t__,size_t) ;
 int FUNC_4 (TYPE_4__*,scalar_t__,scalar_t__) ;
 int * VAR_4 ;
 int * VAR_5 ;
 TYPE_6__* VAR_6 ;
 TYPE_3__ VAR_7 ;

void
FUNC_5
( mobj_t* VAR_8,
  angle_t VAR_9 )
{
    fixed_t VAR_10;
    fixed_t VAR_11;
    fixed_t VAR_12;

    mobj_t* VAR_13;
    angle_t VAR_14;
    int VAR_15;
    int VAR_16;
    thinker_t* VAR_17;


    VAR_16 = 0;

    VAR_17 = VAR_7.next;
    while (VAR_17 != &VAR_7)
    {
 if ( (VAR_17->function.acp1 == (actionf_p1)VAR_3)
     && ((mobj_t *)VAR_17)->type == VAR_2)
     VAR_16++;
 VAR_17 = VAR_17->next;
    }



    if (VAR_16 > 20)
 return;



    VAR_14 = VAR_9 >> VAR_0;

    VAR_15 =
 4*VAR_1
 + 3*(VAR_8->info->radius + VAR_6[VAR_2].radius)/2;

    VAR_10 = VAR_8->x + FUNC_1 (VAR_15, VAR_4[VAR_14]);
    VAR_11 = VAR_8->y + FUNC_1 (VAR_15, VAR_5[VAR_14]);
    VAR_12 = VAR_8->z + 8*VAR_1;

    VAR_13 = FUNC_3 (VAR_10 , VAR_11, VAR_12, VAR_2);


    if (!FUNC_4 (VAR_13, VAR_13->x, VAR_13->y))
    {

 FUNC_2 (VAR_13,VAR_8,VAR_8,10000);
 return;
    }

    VAR_13->target = VAR_8->target;
    FUNC_0 (VAR_13);
}
