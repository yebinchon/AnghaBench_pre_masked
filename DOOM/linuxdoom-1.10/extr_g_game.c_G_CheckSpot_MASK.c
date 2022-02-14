
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* sector; } ;
typedef TYPE_2__ subsector_t ;
typedef int mobj_t ;
struct TYPE_12__ {int x; int y; int angle; } ;
typedef TYPE_3__ mapthing_t ;
typedef int fixed_t ;
typedef int boolean ;
struct TYPE_14__ {int x; int y; } ;
struct TYPE_13__ {int viewz; TYPE_5__* mo; } ;
struct TYPE_10__ {int floorheight; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_5__*,int,int) ;
 int FUNC_1 (TYPE_5__*) ;
 int * FUNC_2 (int,int,int ,int ) ;
 TYPE_2__* FUNC_3 (int,int) ;
 int FUNC_4 (int *,int ) ;
 TYPE_5__** VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 TYPE_4__* VAR_10 ;
 int VAR_11 ;

boolean
FUNC_5
( int VAR_12,
  mapthing_t* VAR_13 )
{
    fixed_t VAR_14;
    fixed_t VAR_15;
    subsector_t* VAR_16;
    unsigned VAR_17;
    mobj_t* VAR_18;
    int VAR_19;

    if (!VAR_10[VAR_12].mo)
    {

 for (VAR_19=0 ; VAR_19<VAR_12 ; VAR_19++)
     if (VAR_10[VAR_19].mo->x == VAR_13->x << VAR_3
  && VAR_10[VAR_19].mo->y == VAR_13->y << VAR_3)
  return 0;
 return 1;
    }

    VAR_14 = VAR_13->x << VAR_3;
    VAR_15 = VAR_13->y << VAR_3;

    if (!FUNC_0 (VAR_10[VAR_12].mo, VAR_14, VAR_15) )
 return 0;


    if (VAR_6 >= VAR_2)
 FUNC_1 (VAR_5[VAR_6%VAR_2]);
    VAR_5[VAR_6%VAR_2] = VAR_10[VAR_12].mo;
    VAR_6++;


    VAR_16 = FUNC_3 (VAR_14,VAR_15);
    VAR_17 = ( VAR_0 * (VAR_13->angle/45) ) >> VAR_1;

    VAR_18 = FUNC_2 (VAR_14+20*VAR_8[VAR_17], VAR_15+20*VAR_9[VAR_17]
        , VAR_16->sector->floorheight
        , VAR_4);

    if (VAR_10[VAR_7].viewz != 1)
 FUNC_4 (VAR_18, VAR_11);

    return 1;
}
