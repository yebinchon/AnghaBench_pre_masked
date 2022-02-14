
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
struct TYPE_12__ {size_t planenum; int flags; TYPE_1__* winding; } ;
typedef TYPE_2__ side_t ;
typedef int qboolean ;
struct TYPE_13__ {int dist; int normal; } ;
typedef TYPE_3__ plane_t ;
struct TYPE_14__ {int numsides; int * maxs; int * mins; int brushnum; int entitynum; TYPE_2__* original_sides; } ;
typedef TYPE_4__ mapbrush_t ;


 int FUNC_0 (int ,int *,int *) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__**,int ,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (TYPE_1__*,TYPE_1__*,int ,int ,int ,int ) ;
 TYPE_3__* VAR_3 ;

qboolean FUNC_6(mapbrush_t *VAR_4)
{
 int VAR_5, VAR_6;
 winding_t *VAR_7;
 side_t *VAR_8;
 plane_t *VAR_9, *VAR_10, *VAR_11;

 FUNC_3 (VAR_4->mins, VAR_4->maxs);

 for (VAR_5 = 0; VAR_5 < VAR_4->numsides; VAR_5++)
 {
  VAR_9 = &VAR_3[VAR_4->original_sides[VAR_5].planenum];
  VAR_7 = FUNC_1(VAR_9->normal, VAR_9->dist);
  for (VAR_6 = 0; VAR_6 <VAR_4->numsides && VAR_7; VAR_6++)
  {
   if (VAR_5 == VAR_6) continue;
   if (VAR_4->original_sides[VAR_6].flags & VAR_1) continue;
   VAR_9 = &VAR_3[VAR_4->original_sides[VAR_6].planenum^1];
   FUNC_2(&VAR_7, VAR_9->normal, VAR_9->dist, 0);
  }

  VAR_8 = &VAR_4->original_sides[VAR_5];
  VAR_8->winding = VAR_7;
  if (VAR_7)
  {
   VAR_8->flags |= VAR_2;
   for (VAR_6 = 0; VAR_6 < VAR_7->numpoints; VAR_6++)
    FUNC_0 (VAR_7->p[VAR_6], VAR_4->mins, VAR_4->maxs);
  }
 }

 for (VAR_5 = 0; VAR_5 < VAR_4->numsides; VAR_5++)
 {
  for (VAR_6 = 0; VAR_6 < VAR_4->numsides; VAR_6++)
  {
   if (VAR_5 == VAR_6) continue;
   VAR_10 = &VAR_3[VAR_4->original_sides[VAR_5].planenum];
   VAR_11 = &VAR_3[VAR_4->original_sides[VAR_6].planenum];
   if (FUNC_5(VAR_4->original_sides[VAR_5].winding,
         VAR_4->original_sides[VAR_6].winding,
         VAR_10->normal, VAR_11->normal,
         VAR_10->dist, VAR_11->dist))
   {
    FUNC_4("non convex brush");
   }
  }
 }

 for (VAR_5 = 0; VAR_5 < 3; VAR_5++)
 {

  if (VAR_4->mins[VAR_5] < -VAR_0 || VAR_4->maxs[VAR_5] > VAR_0)
  {
   FUNC_4("entity %i, brush %i: bounds out of range\n", VAR_4->entitynum, VAR_4->brushnum);
   FUNC_4("ob->mins[%d] = %f, ob->maxs[%d] = %f\n", VAR_5, VAR_4->mins[VAR_5], VAR_5, VAR_4->maxs[VAR_5]);
   VAR_4->numsides = 0;
   break;
  }
  if (VAR_4->mins[VAR_5] > VAR_0 || VAR_4->maxs[VAR_5] < -VAR_0)
  {
   FUNC_4("entity %i, brush %i: no visible sides on brush\n", VAR_4->entitynum, VAR_4->brushnum);
   FUNC_4("ob->mins[%d] = %f, ob->maxs[%d] = %f\n", VAR_5, VAR_4->mins[VAR_5], VAR_5, VAR_4->maxs[VAR_5]);
   VAR_4->numsides = 0;
   break;
  }
 }
 return 1;
}
