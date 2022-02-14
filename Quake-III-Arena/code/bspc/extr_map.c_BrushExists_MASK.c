
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int planenum; } ;
typedef TYPE_1__ side_t ;
struct TYPE_6__ {scalar_t__ entitynum; int numsides; TYPE_1__* original_sides; } ;
typedef TYPE_2__ mapbrush_t ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;

int FUNC_0(mapbrush_t *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 side_t *VAR_6, *VAR_7;
 mapbrush_t *VAR_8, *VAR_9;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
 {
  VAR_8 = VAR_2;
  VAR_9 = &VAR_0[VAR_3];

  if (VAR_8->entitynum != VAR_9->entitynum) continue;

  if (VAR_8->numsides != VAR_9->numsides) continue;
  for (VAR_4 = 0; VAR_4 < VAR_8->numsides; VAR_4++)
  {
   VAR_6 = VAR_8->original_sides + VAR_4;

   for (VAR_5 = 0; VAR_5 < VAR_9->numsides; VAR_5++)
   {
    VAR_7 = VAR_9->original_sides + VAR_5;

    if ((VAR_6->planenum & ~1) == (VAR_7->planenum & ~1)



     ) break;
   }
   if (VAR_5 >= VAR_9->numsides) break;
  }
  if (VAR_4 >= VAR_8->numsides) return 1;
 }
 return 0;
}
