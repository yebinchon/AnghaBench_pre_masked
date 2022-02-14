
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_7__ {int dist; int normal; } ;
typedef TYPE_2__ plane_t ;
struct TYPE_8__ {int numsides; TYPE_1__* sides; } ;
typedef TYPE_3__ bspbrush_t ;
struct TYPE_6__ {size_t planenum; int * winding; } ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int **,int ,int ,int ) ;
 TYPE_2__* VAR_0 ;

void FUNC_2(bspbrush_t *VAR_1)
{
 int VAR_2, VAR_3;
 winding_t *VAR_4;
 plane_t *VAR_5;

 for (VAR_2 = 0; VAR_2 < VAR_1->numsides; VAR_2++)
 {
  VAR_5 = &VAR_0[VAR_1->sides[VAR_2].planenum];
  VAR_4 = FUNC_0(VAR_5->normal, VAR_5->dist);
  for (VAR_3 = 0; VAR_3 < VAR_1->numsides && VAR_4; VAR_3++)
  {
   if (VAR_2 == VAR_3) continue;
   VAR_5 = &VAR_0[VAR_1->sides[VAR_3].planenum^1];
   FUNC_1(&VAR_4, VAR_5->normal, VAR_5->dist, 0);
  }
  VAR_1->sides[VAR_2].winding = VAR_4;
 }
}
