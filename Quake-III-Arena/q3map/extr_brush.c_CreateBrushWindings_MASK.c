
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_7__ {size_t planenum; int * winding; scalar_t__ backSide; scalar_t__ bevel; } ;
typedef TYPE_1__ side_t ;
typedef int qboolean ;
struct TYPE_8__ {int dist; int normal; } ;
typedef TYPE_2__ plane_t ;
struct TYPE_9__ {int numsides; TYPE_1__* sides; } ;
typedef TYPE_3__ bspbrush_t ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int **,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 TYPE_2__* VAR_0 ;

qboolean FUNC_4 (bspbrush_t *VAR_1)
{
 int VAR_2, VAR_3;
 winding_t *VAR_4;
 side_t *VAR_5;
 plane_t *VAR_6;

 for ( VAR_2 = 0; VAR_2 < VAR_1->numsides; VAR_2++ )
 {
  VAR_5 = &VAR_1->sides[VAR_2];

  if ( VAR_5->bevel ) {
   continue;
  }
  VAR_6 = &VAR_0[VAR_5->planenum];
  VAR_4 = FUNC_0 (VAR_6->normal, VAR_6->dist);
  for ( VAR_3 = 0; VAR_3 < VAR_1->numsides && VAR_4; VAR_3++ )
  {
   if (VAR_2 == VAR_3)
    continue;
   if ( VAR_1->sides[VAR_3].planenum == ( VAR_1->sides[VAR_2].planenum ^ 1 ) )
    continue;
   if (VAR_1->sides[VAR_3].bevel)
    continue;
   if (VAR_1->sides[VAR_3].backSide)
    continue;
   VAR_6 = &VAR_0[VAR_1->sides[VAR_3].planenum^1];
   FUNC_2 (&VAR_4, VAR_6->normal, VAR_6->dist, 0);
  }

  if ( VAR_5->winding ) {
   FUNC_3( VAR_5->winding );
  }
  VAR_5->winding = VAR_4;
 }

 return FUNC_1 (VAR_1);
}
