
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
struct TYPE_10__ {size_t planenum; int flags; TYPE_1__* winding; } ;
typedef TYPE_2__ side_t ;
typedef int qboolean ;
struct TYPE_11__ {int dist; int normal; } ;
typedef TYPE_3__ plane_t ;
struct TYPE_12__ {int numsides; int brushnum; int entitynum; int * maxs; int * mins; TYPE_2__* original_sides; } ;
typedef TYPE_4__ mapbrush_t ;


 int FUNC_0 (int ,int *,int *) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__**,int ,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;

qboolean FUNC_5(mapbrush_t *VAR_4)
{
 int VAR_5, VAR_6;
 winding_t *VAR_7;
 side_t *VAR_8;
 plane_t *VAR_9;

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

 for (VAR_5 = 0; VAR_5 < 3; VAR_5++)
 {

  if (VAR_4->mins[VAR_5] < -VAR_0 || VAR_4->maxs[VAR_5] > VAR_0)
  {
   FUNC_4("entity %i, brush %i: bounds out of range\n", VAR_4->entitynum, VAR_4->brushnum);
   VAR_4->numsides = 0;
   break;
  }
  if (VAR_4->mins[VAR_5] > VAR_0 || VAR_4->maxs[VAR_5] < -VAR_0)
  {
   FUNC_4("entity %i, brush %i: no visible sides on brush\n", VAR_4->entitynum, VAR_4->brushnum);
   VAR_4->numsides = 0;
   break;
  }
 }
 return 1;
}
