
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
struct TYPE_14__ {int numSides; int firstSide; } ;
typedef TYPE_3__ dbrush_t ;
struct TYPE_16__ {size_t planeNum; } ;
struct TYPE_15__ {int dist; int normal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_2__*,double) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 TYPE_5__* VAR_3 ;
 TYPE_4__* VAR_4 ;
 int FUNC_4 (int ,int ,int) ;

int FUNC_5(winding_t *VAR_5, dbrush_t *VAR_6, winding_t *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 winding_t VAR_12, VAR_13;
 plane_t VAR_14;

 VAR_11 = 0;
 FUNC_4(VAR_12.points, VAR_5->points, VAR_5->numpoints * sizeof(vec3_t));
 VAR_12.numpoints = VAR_5->numpoints;
 for (VAR_9 = 0; VAR_9 < VAR_6->numSides; VAR_9++)
 {
  FUNC_1(VAR_4[ VAR_3[ VAR_6->firstSide + VAR_9 ].planeNum ].normal, VAR_14.normal);
  FUNC_2(VAR_14.normal);
  VAR_14.dist = -VAR_4[ VAR_3[ VAR_6->firstSide + VAR_9 ].planeNum ].dist;
  VAR_10 = FUNC_0(&VAR_12, &VAR_13, &VAR_14, 0.1);
  if (VAR_10 == VAR_0 || VAR_10 == VAR_2)
  {
   FUNC_4(VAR_7[0].points, VAR_5->points, VAR_5->numpoints * sizeof(vec3_t));
   VAR_7[0].numpoints = VAR_5->numpoints;
   return 1;
  }
  if (VAR_10 != VAR_1)
  {
   if (VAR_11 >= VAR_8)
   {
    FUNC_3("WARNING: VS_ChopWindingWithBrush: more than %d windings\n", VAR_8);
    return 0;
   }
   FUNC_4(VAR_7[VAR_11].points, VAR_13.points, VAR_13.numpoints * sizeof(vec3_t));
   VAR_7[VAR_11].numpoints = VAR_13.numpoints;
   VAR_11++;
  }
 }
 return VAR_11;
}
