
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int numpoints; int points; } ;
typedef TYPE_1__ winding_t ;
typedef int vec3_t ;
struct TYPE_7__ {int numFacets; TYPE_3__* facets; } ;
typedef TYPE_2__ lsurfaceTest_t ;
struct TYPE_8__ {int numpoints; int points; } ;
typedef TYPE_3__ lFacet_t ;


 int FUNC_0 (int ,int,TYPE_1__*) ;
 TYPE_2__** VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_1 ;

void FUNC_2(void)
{
 int VAR_2, VAR_3;
 lsurfaceTest_t *VAR_4;
 lFacet_t *VAR_5;
 winding_t VAR_6;

 for ( VAR_2 = 0 ; VAR_2 < VAR_1 ; VAR_2++ )
 {
  VAR_4 = VAR_0[ VAR_2 ];
  if (!VAR_4)
   continue;
  for (VAR_3 = 0; VAR_3 < VAR_4->numFacets; VAR_3++)
  {
   VAR_5 = &VAR_4->facets[VAR_3];
   FUNC_1(VAR_6.points, VAR_5->points, VAR_5->numpoints * sizeof(vec3_t));
   VAR_6.numpoints = VAR_5->numpoints;
   FUNC_0(0, VAR_2, &VAR_6);
  }
 }
}
