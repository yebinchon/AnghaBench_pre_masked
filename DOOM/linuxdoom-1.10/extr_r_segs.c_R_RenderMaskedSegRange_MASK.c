
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int scalestep; int scale1; int x1; int sprtopclip; int sprbottomclip; scalar_t__* maskedtexturecol; TYPE_7__* curline; } ;
typedef TYPE_5__ drawseg_t ;
typedef int column_t ;
typedef int byte ;
struct TYPE_17__ {scalar_t__ floorheight; scalar_t__ ceilingheight; } ;
struct TYPE_16__ {TYPE_4__* sidedef; TYPE_3__* linedef; TYPE_2__* v2; TYPE_1__* v1; TYPE_8__* backsector; TYPE_6__* frontsector; } ;
struct TYPE_15__ {int lightlevel; scalar_t__ floorheight; scalar_t__ ceilingheight; } ;
struct TYPE_13__ {size_t midtexture; scalar_t__ rowoffset; } ;
struct TYPE_12__ {int flags; } ;
struct TYPE_11__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_10__ {scalar_t__ y; scalar_t__ x; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int,scalar_t__) ;
 TYPE_8__* VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_7__* VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 TYPE_6__* VAR_15 ;
 scalar_t__* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__** VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 scalar_t__* VAR_23 ;
 int* VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__* VAR_26 ;

void
FUNC_3
( drawseg_t* VAR_27,
  int VAR_28,
  int VAR_29 )
{
    unsigned VAR_30;
    column_t* VAR_31;
    int VAR_32;
    int VAR_33;





    VAR_8 = VAR_27->curline;
    VAR_15 = VAR_8->frontsector;
    VAR_6 = VAR_8->backsector;
    VAR_33 = VAR_24[VAR_8->sidedef->midtexture];

    VAR_32 = (VAR_15->lightlevel >> VAR_2)+VAR_13;

    if (VAR_8->v1->y == VAR_8->v2->y)
 VAR_32--;
    else if (VAR_8->v1->x == VAR_8->v2->x)
 VAR_32++;

    if (VAR_32 < 0)
 VAR_26 = VAR_20[0];
    else if (VAR_32 >= VAR_0)
 VAR_26 = VAR_20[VAR_0-1];
    else
 VAR_26 = VAR_20[VAR_32];

    VAR_16 = VAR_27->maskedtexturecol;

    VAR_19 = VAR_27->scalestep;
    VAR_22 = VAR_27->scale1 + (VAR_28 - VAR_27->x1)*VAR_19;
    VAR_18 = VAR_27->sprbottomclip;
    VAR_17 = VAR_27->sprtopclip;


    if (VAR_8->linedef->flags & VAR_5)
    {
 VAR_11 = VAR_15->floorheight > VAR_6->floorheight
     ? VAR_15->floorheight : VAR_6->floorheight;
 VAR_11 = VAR_11 + VAR_23[VAR_33] - VAR_25;
    }
    else
    {
 VAR_11 =VAR_15->ceilingheight<VAR_6->ceilingheight
     ? VAR_15->ceilingheight : VAR_6->ceilingheight;
 VAR_11 = VAR_11 - VAR_25;
    }
    VAR_11 += VAR_8->sidedef->rowoffset;

    if (VAR_14)
 VAR_9 = VAR_14;


    for (VAR_12 = VAR_28 ; VAR_12 <= VAR_29 ; VAR_12++)
    {

 if (VAR_16[VAR_12] != VAR_4)
 {
     if (!VAR_14)
     {
  VAR_30 = VAR_22>>VAR_1;

  if (VAR_30 >= VAR_3 )
      VAR_30 = VAR_3-1;

  VAR_9 = VAR_26[VAR_30];
     }

     VAR_21 = VAR_7 - FUNC_0(VAR_11, VAR_22);
     VAR_10 = 0xffffffffu / (unsigned)VAR_22;


     VAR_31 = (column_t *)(
  (byte *)FUNC_2(VAR_33,VAR_16[VAR_12]) -3);

     FUNC_1 (VAR_31);
     VAR_16[VAR_12] = VAR_4;
 }
 VAR_22 += VAR_19;
    }

}
