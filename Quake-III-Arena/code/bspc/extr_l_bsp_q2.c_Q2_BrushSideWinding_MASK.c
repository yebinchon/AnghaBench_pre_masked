
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_8__ {scalar_t__ dist; int normal; } ;
typedef TYPE_1__ dplane_t ;
struct TYPE_9__ {size_t planenum; } ;
typedef TYPE_2__ dbrushside_t ;
struct TYPE_10__ {int numsides; int firstside; } ;
typedef TYPE_3__ dbrush_t ;


 int * FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int **,int ,scalar_t__,double) ;
 double FUNC_2 (int ,int ) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 double FUNC_3 (scalar_t__) ;

winding_t *FUNC_4(dbrush_t *VAR_2, dbrushside_t *VAR_3)
{
 int VAR_4;
 dplane_t *VAR_5, *VAR_6;
 winding_t *VAR_7;
 dbrushside_t *VAR_8;


 VAR_5 = &VAR_1[VAR_3->planenum];
 VAR_7 = FUNC_0(VAR_5->normal, VAR_5->dist);
 for (VAR_4 = 0; VAR_4 < VAR_2->numsides && VAR_7; VAR_4++)
 {
  VAR_8 = &VAR_0[VAR_2->firstside + VAR_4];

  if (VAR_8->planenum == VAR_3->planenum) continue;

  VAR_6 = &VAR_1[VAR_8->planenum];
  if (FUNC_2(VAR_5->normal, VAR_6->normal) > 0.999
    && FUNC_3(VAR_5->dist - VAR_6->dist) < 0.01) continue;

  VAR_6 = &VAR_1[VAR_8->planenum^1];
  FUNC_1(&VAR_7, VAR_6->normal, VAR_6->dist, -0.1);
 }
 return VAR_7;
}
