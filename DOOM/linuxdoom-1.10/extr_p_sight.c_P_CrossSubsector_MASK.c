
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ vertex_t ;
struct TYPE_14__ {int numlines; size_t firstline; } ;
typedef TYPE_2__ subsector_t ;
struct TYPE_15__ {TYPE_4__* backsector; TYPE_4__* frontsector; TYPE_5__* linedef; } ;
typedef TYPE_3__ seg_t ;
struct TYPE_16__ {scalar_t__ floorheight; scalar_t__ ceilingheight; } ;
typedef TYPE_4__ sector_t ;
struct TYPE_17__ {scalar_t__ validcount; int flags; TYPE_1__* v2; TYPE_1__* v1; } ;
typedef TYPE_5__ line_t ;
typedef scalar_t__ fixed_t ;
struct TYPE_18__ {scalar_t__ y; scalar_t__ x; scalar_t__ dy; scalar_t__ dx; } ;
typedef TYPE_6__ divline_t ;
typedef int boolean ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,scalar_t__,TYPE_6__*) ;
 scalar_t__ FUNC_3 (TYPE_6__*,TYPE_6__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_6__ VAR_5 ;
 TYPE_2__* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

boolean FUNC_4 (int VAR_11)
{
    seg_t* VAR_12;
    line_t* VAR_13;
    int VAR_14;
    int VAR_15;
    int VAR_16;
    subsector_t* VAR_17;
    sector_t* VAR_18;
    sector_t* VAR_19;
    fixed_t VAR_20;
    fixed_t VAR_21;
    divline_t VAR_22;
    vertex_t* VAR_23;
    vertex_t* VAR_24;
    fixed_t VAR_25;
    fixed_t VAR_26;
    VAR_17 = &VAR_6[VAR_11];


    VAR_16 = VAR_17->numlines;
    VAR_12 = &VAR_3[VAR_17->firstline];

    for ( ; VAR_16 ; VAR_12++, VAR_16--)
    {
 VAR_13 = VAR_12->linedef;


 if (VAR_13->validcount == VAR_10)
     continue;

 VAR_13->validcount = VAR_10;

 VAR_23 = VAR_13->v1;
 VAR_24 = VAR_13->v2;
 VAR_14 = FUNC_2 (VAR_23->x,VAR_23->y, &VAR_5);
 VAR_15 = FUNC_2 (VAR_24->x, VAR_24->y, &VAR_5);


 if (VAR_14 == VAR_15)
     continue;

 VAR_22.x = VAR_23->x;
 VAR_22.y = VAR_23->y;
 VAR_22.dx = VAR_24->x - VAR_23->x;
 VAR_22.dy = VAR_24->y - VAR_23->y;
 VAR_14 = FUNC_2 (VAR_5.x, VAR_5.y, &VAR_22);
 VAR_15 = FUNC_2 (VAR_7, VAR_8, &VAR_22);


 if (VAR_14 == VAR_15)
     continue;



 if ( !(VAR_13->flags & VAR_0) )
     return 0;


 VAR_18 = VAR_12->frontsector;
 VAR_19 = VAR_12->backsector;


 if (VAR_18->floorheight == VAR_19->floorheight
     && VAR_18->ceilingheight == VAR_19->ceilingheight)
     continue;



 if (VAR_18->ceilingheight < VAR_19->ceilingheight)
     VAR_20 = VAR_18->ceilingheight;
 else
     VAR_20 = VAR_19->ceilingheight;


 if (VAR_18->floorheight > VAR_19->floorheight)
     VAR_21 = VAR_18->floorheight;
 else
     VAR_21 = VAR_19->floorheight;


 if (VAR_21 >= VAR_20)
     return 0;

 VAR_25 = FUNC_3 (&VAR_5, &VAR_22);

 if (VAR_18->floorheight != VAR_19->floorheight)
 {
     VAR_26 = FUNC_0 (VAR_21 - VAR_4 , VAR_25);
     if (VAR_26 > VAR_1)
  VAR_1 = VAR_26;
 }

 if (VAR_18->ceilingheight != VAR_19->ceilingheight)
 {
     VAR_26 = FUNC_0 (VAR_20 - VAR_4 , VAR_25);
     if (VAR_26 < VAR_9)
  VAR_9 = VAR_26;
 }

 if (VAR_9 <= VAR_1)
     return 0;
    }

    return 1;
}
