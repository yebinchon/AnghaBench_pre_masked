
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int vec3_t ;
typedef int shaderInfo_t ;
typedef int qboolean ;
struct TYPE_21__ {float dist; int normal; } ;
typedef TYPE_1__ plane_t ;
struct TYPE_22__ {int numpoints; scalar_t__ num; int * points; TYPE_1__ plane; int * boundaries; int ** lightmapCoords; } ;
typedef TYPE_2__ lFacet_t ;
typedef int dsurface_t ;
struct TYPE_23__ {int * lightmap; int xyz; } ;
typedef TYPE_3__ drawVert_t ;


 float FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int ,int ) ;
 int FUNC_3 (int *,int *,TYPE_2__*,TYPE_3__*,TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,TYPE_3__*,TYPE_3__*) ;
 int FUNC_6 (int ,int ,int ) ;
 double FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int * VAR_1 ;
 scalar_t__ FUNC_9 (float) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;

qboolean FUNC_10( dsurface_t *VAR_6, shaderInfo_t *VAR_7, lFacet_t *VAR_8, drawVert_t *VAR_9, drawVert_t *VAR_10, drawVert_t *VAR_11, drawVert_t *VAR_12 ) {
 float VAR_13;
 vec3_t VAR_14;
 int VAR_15;
 plane_t VAR_16;


 if ( !FUNC_4( &VAR_8->plane, VAR_9->xyz, VAR_10->xyz, VAR_11->xyz ) ) {
  VAR_8->numpoints = 0;
  return VAR_3;
 }


 VAR_13 = FUNC_0( VAR_12->xyz, VAR_8->plane.normal ) - VAR_8->plane.dist;
 if ( FUNC_9( VAR_13 ) > VAR_0 ) {
  VAR_8->numpoints = 0;
  return VAR_3;
 }

 FUNC_6( VAR_9->xyz, VAR_5[VAR_6 - VAR_1], VAR_8->points[0] );
 FUNC_6( VAR_10->xyz, VAR_5[VAR_6 - VAR_1], VAR_8->points[1] );
 FUNC_6( VAR_11->xyz, VAR_5[VAR_6 - VAR_1], VAR_8->points[2] );
 FUNC_6( VAR_12->xyz, VAR_5[VAR_6 - VAR_1], VAR_8->points[3] );

 for (VAR_15 = 1; VAR_15 < 4; VAR_15++)
 {
  if ( !FUNC_4( &VAR_16, VAR_8->points[VAR_15], VAR_8->points[(VAR_15+1) % 4], VAR_8->points[(VAR_15+2) % 4]) ) {
   VAR_8->numpoints = 0;
   return VAR_3;
  }

  if (!FUNC_1(&VAR_8->plane, &VAR_16, VAR_3)) {
   VAR_8->numpoints = 0;
   return VAR_3;
  }
 }

 VAR_8->lightmapCoords[0][0] = VAR_9->lightmap[0];
 VAR_8->lightmapCoords[0][1] = VAR_9->lightmap[1];
 VAR_8->lightmapCoords[1][0] = VAR_10->lightmap[0];
 VAR_8->lightmapCoords[1][1] = VAR_10->lightmap[1];
 VAR_8->lightmapCoords[2][0] = VAR_11->lightmap[0];
 VAR_8->lightmapCoords[2][1] = VAR_11->lightmap[1];
 VAR_8->lightmapCoords[3][0] = VAR_12->lightmap[0];
 VAR_8->lightmapCoords[3][1] = VAR_12->lightmap[1];

 FUNC_2( &VAR_8->boundaries[0], &VAR_8->plane, VAR_8->points[0], VAR_8->points[1] );
 FUNC_2( &VAR_8->boundaries[1], &VAR_8->plane, VAR_8->points[1], VAR_8->points[2] );
 FUNC_2( &VAR_8->boundaries[2], &VAR_8->plane, VAR_8->points[2], VAR_8->points[3] );
 FUNC_2( &VAR_8->boundaries[3], &VAR_8->plane, VAR_8->points[3], VAR_8->points[0] );

 for (VAR_15 = 0; VAR_15 < 4; VAR_15++)
 {
  FUNC_8(VAR_8->points[(VAR_15+1)%4], VAR_8->points[VAR_15], VAR_14);
  if (FUNC_7(VAR_14) < 0.1)
   return VAR_3;
 }

 FUNC_5( VAR_8, VAR_9, VAR_10, VAR_11 );
 FUNC_3( VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11 );

 VAR_8->num = VAR_2++;
 VAR_8->numpoints = 4;

 return VAR_4;
}
