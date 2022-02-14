
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int flags; scalar_t__ z; scalar_t__ height; } ;
typedef TYPE_4__ mobj_t ;
struct TYPE_15__ {int flags; TYPE_2__* backsector; TYPE_1__* frontsector; } ;
typedef TYPE_5__ line_t ;
struct TYPE_13__ {TYPE_4__* thing; TYPE_5__* line; } ;
struct TYPE_16__ {int frac; TYPE_3__ d; scalar_t__ isaline; } ;
typedef TYPE_6__ intercept_t ;
typedef scalar_t__ fixed_t ;
typedef int boolean ;
struct TYPE_12__ {scalar_t__ floorheight; scalar_t__ ceilingheight; } ;
struct TYPE_11__ {scalar_t__ floorheight; scalar_t__ ceilingheight; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_4__* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

boolean
FUNC_3 (intercept_t* VAR_11)
{
    line_t* VAR_12;
    mobj_t* VAR_13;
    fixed_t VAR_14;
    fixed_t VAR_15;
    fixed_t VAR_16;
    fixed_t VAR_17;

    if (VAR_11->isaline)
    {
 VAR_12 = VAR_11->d.line;

 if ( !(VAR_12->flags & VAR_1) )
     return 0;




 FUNC_2 (VAR_12);

 if (VAR_6 >= VAR_7)
     return 0;

 VAR_17 = FUNC_1 (VAR_3, VAR_11->frac);

 if (VAR_12->frontsector->floorheight != VAR_12->backsector->floorheight)
 {
     VAR_14 = FUNC_0 (VAR_6 - VAR_9 , VAR_17);
     if (VAR_14 > VAR_4)
  VAR_4 = VAR_14;
 }

 if (VAR_12->frontsector->ceilingheight != VAR_12->backsector->ceilingheight)
 {
     VAR_14 = FUNC_0 (VAR_7 - VAR_9 , VAR_17);
     if (VAR_14 < VAR_10)
  VAR_10 = VAR_14;
 }

 if (VAR_10 <= VAR_4)
     return 0;

 return 1;
    }


    VAR_13 = VAR_11->d.thing;
    if (VAR_13 == VAR_8)
 return 1;

    if (!(VAR_13->flags&VAR_0))
 return 1;


    VAR_17 = FUNC_1 (VAR_3, VAR_11->frac);
    VAR_15 = FUNC_0 (VAR_13->z+VAR_13->height - VAR_9 , VAR_17);

    if (VAR_15 < VAR_4)
 return 1;

    VAR_16 = FUNC_0 (VAR_13->z - VAR_9, VAR_17);

    if (VAR_16 > VAR_10)
 return 1;


    if (VAR_15 > VAR_10)
 VAR_15 = VAR_10;

    if (VAR_16 < VAR_4)
 VAR_16 = VAR_4;

    VAR_2 = (VAR_15+VAR_16)/2;
    VAR_5 = VAR_13;

    return 0;
}
