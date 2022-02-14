
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; size_t planenum; int winding; } ;
typedef TYPE_1__ side_t ;
struct TYPE_6__ {int numsides; int brushnum; TYPE_1__* original_sides; } ;
typedef TYPE_2__ mapbrush_t ;
struct TYPE_7__ {int type; } ;


 int FUNC_0 (char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 size_t VAR_8 ;

void FUNC_4(mapbrush_t *VAR_9)
{
 int VAR_10;
 int VAR_11;
 side_t *VAR_12;


 for (VAR_10 = 0; VAR_10 < VAR_9->numsides; VAR_10++)
 {
  VAR_12 = VAR_9->original_sides + VAR_10;

  if (!VAR_12->winding)
  {
   FUNC_0("MarkBrushBevels: brush %d no winding", VAR_9->brushnum);
   VAR_12->flags |= VAR_0;
  }

  else if (FUNC_3(VAR_12->winding))
  {
   VAR_12->flags |= VAR_0;
   FUNC_0("MarkBrushBevels: brush %d tiny winding", VAR_9->brushnum);
  }

  else
  {
   VAR_11 = FUNC_1(VAR_12->winding);
   if (VAR_11 == VAR_2
     || VAR_11 == VAR_4
     || VAR_11 == VAR_3

     )
   {
    FUNC_0("MarkBrushBevels: brush %d %s", VAR_9->brushnum, FUNC_2());
    VAR_12->flags |= VAR_0;
   }
  }
  if (VAR_12->flags & VAR_0)
  {
   VAR_12->flags &= ~VAR_1;

   if (VAR_12->planenum > 0 && VAR_12->planenum < VAR_8)
   {

    if (VAR_7[VAR_12->planenum].type < 3) VAR_5++;
    else VAR_6++;
   }
  }
 }
}
