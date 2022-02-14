
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_8__ {scalar_t__ dist; int normal; } ;
typedef TYPE_1__ q3_dplane_t ;
struct TYPE_9__ {size_t planeNum; } ;
typedef TYPE_2__ q3_dbrushside_t ;
struct TYPE_10__ {int numSides; int firstSide; } ;
typedef TYPE_3__ q3_dbrush_t ;


 int * FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int **,int ,scalar_t__,double) ;
 double FUNC_2 (int ,int ) ;
 double FUNC_3 (scalar_t__) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;

winding_t *FUNC_4(q3_dbrush_t *VAR_2, q3_dbrushside_t *VAR_3)
{
 int VAR_4;
 q3_dplane_t *VAR_5, *VAR_6;
 winding_t *VAR_7;
 q3_dbrushside_t *VAR_8;


 VAR_5 = &VAR_1[VAR_3->planeNum];
 VAR_7 = FUNC_0(VAR_5->normal, VAR_5->dist);
 for (VAR_4 = 0; VAR_4 < VAR_2->numSides && VAR_7; VAR_4++)
 {
  VAR_8 = &VAR_0[VAR_2->firstSide + VAR_4];

  if (VAR_8->planeNum == VAR_3->planeNum) continue;

  VAR_6 = &VAR_1[VAR_8->planeNum];
  if (FUNC_2(VAR_5->normal, VAR_6->normal) > 0.999
    && FUNC_3(VAR_5->dist - VAR_6->dist) < 0.01) continue;

  VAR_6 = &VAR_1[VAR_8->planeNum^1];
  FUNC_1(&VAR_7, VAR_6->normal, VAR_6->dist, -0.1);
 }
 return VAR_7;
}
