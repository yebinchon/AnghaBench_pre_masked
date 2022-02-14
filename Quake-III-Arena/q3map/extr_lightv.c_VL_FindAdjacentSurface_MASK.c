
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_7__ {int normal; } ;
typedef TYPE_1__ plane_t ;
struct TYPE_8__ {double radius; int numFacets; int patch; scalar_t__ trisoup; TYPE_3__* facets; int origin; } ;
typedef TYPE_2__ lsurfaceTest_t ;
struct TYPE_9__ {int numpoints; float** points; TYPE_1__ plane; } ;
typedef TYPE_3__ lFacet_t ;
struct TYPE_10__ {scalar_t__ lightmapNum; } ;
typedef TYPE_4__ dsurface_t ;


 double FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__*,int ,scalar_t__*) ;
 TYPE_4__* VAR_0 ;
 double FUNC_2 (scalar_t__) ;
 TYPE_2__** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_3(int VAR_5, int VAR_6, vec3_t VAR_7, vec3_t VAR_8, int *VAR_9, int *VAR_10, int *VAR_11)
{
 int VAR_12, VAR_13, VAR_14;
 lsurfaceTest_t *VAR_15;
 lFacet_t *VAR_16;
 dsurface_t *VAR_17;
 float *VAR_18, *VAR_19;
 vec3_t VAR_20;
 plane_t *VAR_21;


 VAR_21 = &VAR_1[VAR_5]->facets[VAR_6].plane;





 for ( VAR_12 = 0 ; VAR_12 < VAR_2 ; VAR_12++ )
 {
  if (VAR_12 == VAR_5)
   continue;
  VAR_15 = VAR_1[ VAR_12 ];
  if (!VAR_15)
   continue;
  if (VAR_15->trisoup)
   continue;
  VAR_17 = &VAR_0[VAR_12];
  if ( VAR_17->lightmapNum < 0 )
   continue;

  FUNC_1(VAR_7, VAR_15->origin, VAR_20);
  if (FUNC_2(VAR_20[0]) > VAR_15->radius ||
   FUNC_2(VAR_20[1]) > VAR_15->radius ||
   FUNC_2(VAR_20[1]) > VAR_15->radius)
  {
   FUNC_1(VAR_8, VAR_15->origin, VAR_20);
   if (FUNC_2(VAR_20[0]) > VAR_15->radius ||
    FUNC_2(VAR_20[1]) > VAR_15->radius ||
    FUNC_2(VAR_20[1]) > VAR_15->radius)
   {
    continue;
   }
  }

  for (VAR_13 = 0; VAR_13 < VAR_15->numFacets; VAR_13++)
  {
   VAR_16 = &VAR_15->facets[VAR_13];


   if (FUNC_0(VAR_16->plane.normal, VAR_21->normal) < 0.9)
   {
    if (!VAR_15->trisoup && !VAR_15->patch)
     break;
    continue;
   }

   for (VAR_14 = 0; VAR_14 < VAR_16->numpoints; VAR_14++)
   {
    VAR_18 = VAR_16->points[VAR_14];
    if (FUNC_2(VAR_8[0] - VAR_18[0]) < 0.1 &&
     FUNC_2(VAR_8[1] - VAR_18[1]) < 0.1 &&
     FUNC_2(VAR_8[2] - VAR_18[2]) < 0.1)
    {
     VAR_19 = VAR_16->points[(VAR_14+1) % VAR_16->numpoints];
     if (FUNC_2(VAR_7[0] - VAR_19[0]) < 0.1 &&
      FUNC_2(VAR_7[1] - VAR_19[1]) < 0.1 &&
      FUNC_2(VAR_7[2] - VAR_19[2]) < 0.1)
     {



      *VAR_9 = VAR_12;
      *VAR_10 = VAR_13;
      *VAR_11 = VAR_14;
      return VAR_4;
     }
    }
   }
  }
 }
 return VAR_3;
}
