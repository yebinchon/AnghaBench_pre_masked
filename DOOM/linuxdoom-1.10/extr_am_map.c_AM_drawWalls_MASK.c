
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int y; int x; } ;
struct TYPE_11__ {int y; int x; } ;
struct TYPE_17__ {TYPE_3__ b; TYPE_1__ a; } ;
typedef TYPE_7__ mline_t ;
struct TYPE_19__ {int flags; int special; TYPE_6__* frontsector; TYPE_5__* backsector; TYPE_4__* v2; TYPE_2__* v1; } ;
struct TYPE_18__ {scalar_t__* powers; } ;
struct TYPE_16__ {scalar_t__ floorheight; scalar_t__ ceilingheight; } ;
struct TYPE_15__ {scalar_t__ floorheight; scalar_t__ ceilingheight; } ;
struct TYPE_14__ {int y; int x; } ;
struct TYPE_12__ {int y; int x; } ;


 int FUNC_0 (TYPE_7__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_9__* VAR_12 ;
 int VAR_13 ;
 TYPE_8__* VAR_14 ;
 size_t VAR_15 ;

void FUNC_1(void)
{
    int VAR_16;
    static mline_t VAR_17;

    for (VAR_16=0;VAR_16<VAR_13;VAR_16++)
    {
 VAR_17.a.x = VAR_12[VAR_16].v1->x;
 VAR_17.a.y = VAR_12[VAR_16].v1->y;
 VAR_17.b.x = VAR_12[VAR_16].v2->x;
 VAR_17.b.y = VAR_12[VAR_16].v2->y;
 if (VAR_10 || (VAR_12[VAR_16].flags & VAR_4))
 {
     if ((VAR_12[VAR_16].flags & VAR_3) && !VAR_10)
  continue;
     if (!VAR_12[VAR_16].backsector)
     {
  FUNC_0(&VAR_17, VAR_8+VAR_11);
     }
     else
     {
  if (VAR_12[VAR_16].special == 39)
  {
      FUNC_0(&VAR_17, VAR_8+VAR_9/2);
  }
  else if (VAR_12[VAR_16].flags & VAR_5)
  {
      if (VAR_10) FUNC_0(&VAR_17, VAR_6 + VAR_11);
      else FUNC_0(&VAR_17, VAR_8+VAR_11);
  }
  else if (VAR_12[VAR_16].backsector->floorheight
      != VAR_12[VAR_16].frontsector->floorheight) {
      FUNC_0(&VAR_17, VAR_1 + VAR_11);
  }
  else if (VAR_12[VAR_16].backsector->ceilingheight
      != VAR_12[VAR_16].frontsector->ceilingheight) {
      FUNC_0(&VAR_17, VAR_0+VAR_11);
  }
  else if (VAR_10) {
      FUNC_0(&VAR_17, VAR_7+VAR_11);
  }
     }
 }
 else if (VAR_14->powers[VAR_15])
 {
     if (!(VAR_12[VAR_16].flags & VAR_3)) FUNC_0(&VAR_17, VAR_2+3);
 }
    }
}
