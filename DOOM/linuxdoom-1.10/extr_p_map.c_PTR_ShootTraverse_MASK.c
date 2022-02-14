
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {int flags; scalar_t__ z; scalar_t__ height; } ;
typedef TYPE_4__ mobj_t ;
struct TYPE_20__ {int flags; TYPE_2__* backsector; TYPE_1__* frontsector; scalar_t__ special; } ;
typedef TYPE_5__ line_t ;
struct TYPE_18__ {TYPE_4__* thing; TYPE_5__* line; } ;
struct TYPE_21__ {scalar_t__ frac; TYPE_3__ d; scalar_t__ isaline; } ;
typedef TYPE_6__ intercept_t ;
typedef scalar_t__ fixed_t ;
typedef int boolean ;
struct TYPE_22__ {scalar_t__ x; scalar_t__ dx; scalar_t__ y; scalar_t__ dy; } ;
struct TYPE_17__ {scalar_t__ floorheight; scalar_t__ ceilingheight; scalar_t__ ceilingpic; } ;
struct TYPE_16__ {scalar_t__ floorheight; scalar_t__ ceilingheight; scalar_t__ ceilingpic; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*,TYPE_4__*,scalar_t__) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_4__* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_7__ VAR_12 ;

boolean FUNC_7 (intercept_t* VAR_13)
{
    fixed_t VAR_14;
    fixed_t VAR_15;
    fixed_t VAR_16;
    fixed_t VAR_17;

    line_t* VAR_18;

    mobj_t* VAR_19;

    fixed_t VAR_20;
    fixed_t VAR_21;
    fixed_t VAR_22;
    fixed_t VAR_23;

    if (VAR_13->isaline)
    {
 VAR_18 = VAR_13->d.line;

 if (VAR_18->special)
     FUNC_4 (VAR_9, VAR_18);

 if ( !(VAR_18->flags & VAR_3) )
     goto hitline;


 FUNC_3 (VAR_18);

 VAR_21 = FUNC_1 (VAR_5, VAR_13->frac);

 if (VAR_18->frontsector->floorheight != VAR_18->backsector->floorheight)
 {
     VAR_20 = FUNC_0 (VAR_7 - VAR_10 , VAR_21);
     if (VAR_20 > VAR_4)
  goto hitline;
 }

 if (VAR_18->frontsector->ceilingheight != VAR_18->backsector->ceilingheight)
 {
     VAR_20 = FUNC_0 (VAR_8 - VAR_10 , VAR_21);
     if (VAR_20 < VAR_4)
  goto hitline;
 }


 return 1;



      hitline:

 VAR_17 = VAR_13->frac - FUNC_0 (4*VAR_0,VAR_5);
 VAR_14 = VAR_12.x + FUNC_1 (VAR_12.dx, VAR_17);
 VAR_15 = VAR_12.y + FUNC_1 (VAR_12.dy, VAR_17);
 VAR_16 = VAR_10 + FUNC_1 (VAR_4, FUNC_1(VAR_17, VAR_5));

 if (VAR_18->frontsector->ceilingpic == VAR_11)
 {

     if (VAR_16 > VAR_18->frontsector->ceilingheight)
  return 0;


     if (VAR_18->backsector && VAR_18->backsector->ceilingpic == VAR_11)
  return 0;
 }


 FUNC_6 (VAR_14,VAR_15,VAR_16);


 return 0;
    }


    VAR_19 = VAR_13->d.thing;
    if (VAR_19 == VAR_9)
 return 1;

    if (!(VAR_19->flags&VAR_2))
 return 1;


    VAR_21 = FUNC_1 (VAR_5, VAR_13->frac);
    VAR_22 = FUNC_0 (VAR_19->z+VAR_19->height - VAR_10 , VAR_21);

    if (VAR_22 < VAR_4)
 return 1;

    VAR_23 = FUNC_0 (VAR_19->z - VAR_10, VAR_21);

    if (VAR_23 > VAR_4)
 return 1;




    VAR_17 = VAR_13->frac - FUNC_0 (10*VAR_0,VAR_5);

    VAR_14 = VAR_12.x + FUNC_1 (VAR_12.dx, VAR_17);
    VAR_15 = VAR_12.y + FUNC_1 (VAR_12.dy, VAR_17);
    VAR_16 = VAR_10 + FUNC_1 (VAR_4, FUNC_1(VAR_17, VAR_5));



    if (VAR_13->d.thing->flags & VAR_1)
 FUNC_6 (VAR_14,VAR_15,VAR_16);
    else
 FUNC_5 (VAR_14,VAR_15,VAR_16, VAR_6);

    if (VAR_6)
 FUNC_2 (VAR_19, VAR_9, VAR_9, VAR_6);


    return 0;

}
