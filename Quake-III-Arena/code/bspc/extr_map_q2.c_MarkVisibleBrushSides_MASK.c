
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; int planenum; } ;
typedef TYPE_1__ side_t ;
struct TYPE_7__ {int numsides; scalar_t__ leafnum; TYPE_1__* original_sides; } ;
typedef TYPE_2__ mapbrush_t ;
struct TYPE_8__ {size_t planenum; } ;
typedef TYPE_3__ dface_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;

void FUNC_0(mapbrush_t *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 side_t *VAR_9;
 dface_t *VAR_10;

 for (VAR_6 = 0; VAR_6 < VAR_5->numsides; VAR_6++)
 {
  VAR_9 = VAR_5->original_sides + VAR_6;

  if ((VAR_9->flags & VAR_0) || VAR_5->leafnum < 0)
  {

   VAR_9->flags |= VAR_1;
   continue;
  }

  VAR_9->flags &= ~VAR_1;

  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  {
   VAR_10 = &VAR_2[VAR_7];
   VAR_8 = VAR_3[VAR_10->planenum];
   if ((VAR_8 & ~1) == (VAR_9->planenum & ~1))
   {

    VAR_9->flags |= VAR_1;
   }
  }
 }
}
