
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int numpoints; int points; } ;
typedef TYPE_1__ winding_t ;
typedef int vec3_t ;
struct TYPE_13__ {int dist; int normal; } ;
typedef TYPE_2__ plane_t ;
struct TYPE_14__ {int firstSide; int numSides; } ;
typedef TYPE_3__ dbrush_t ;
struct TYPE_16__ {size_t planeNum; } ;
struct TYPE_15__ {int dist; int normal; } ;


 TYPE_1__* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,double) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 TYPE_5__* VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_4 (int ,int ,int) ;

winding_t *FUNC_5(dbrush_t *VAR_3, int VAR_4, winding_t *VAR_5)
{
 int VAR_6, VAR_7;
 winding_t *VAR_8;
 plane_t VAR_9;

 FUNC_2(VAR_2[ VAR_1[ VAR_3->firstSide + VAR_4 ].planeNum ].normal, VAR_9.normal);
 FUNC_3(VAR_9.normal);
 VAR_9.dist = -VAR_2[ VAR_1[ VAR_3->firstSide + VAR_4 ].planeNum ].dist;
 VAR_8 = FUNC_0( VAR_9.normal, VAR_9.dist );
 FUNC_4(VAR_5->points, VAR_8->points, sizeof(vec3_t) * VAR_8->numpoints);
 VAR_5->numpoints = VAR_8->numpoints;

 for (VAR_6 = 0; VAR_6 < VAR_3->numSides; VAR_6++)
 {
  if (VAR_6 == VAR_4)
   continue;
  FUNC_2(VAR_2[ VAR_1[ VAR_3->firstSide + VAR_6 ].planeNum ].normal, VAR_9.normal);
  FUNC_3(VAR_9.normal);
  VAR_9.dist = -VAR_2[ VAR_1[ VAR_3->firstSide + VAR_6 ].planeNum ].dist;
  VAR_7 = FUNC_1(VAR_5, &VAR_9, 0.1);
  if (VAR_7 == VAR_0)
   return ((void*)0);
 }
 return VAR_5;
}
