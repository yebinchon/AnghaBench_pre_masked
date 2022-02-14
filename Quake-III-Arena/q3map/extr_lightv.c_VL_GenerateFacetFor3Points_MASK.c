
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int vec3_t ;
typedef int shaderInfo_t ;
typedef int qboolean ;
struct TYPE_15__ {int numpoints; int * points; int plane; int * boundaries; int ** lightmapCoords; scalar_t__ num; } ;
typedef TYPE_1__ lFacet_t ;
typedef int dsurface_t ;
struct TYPE_16__ {int * lightmap; int xyz; } ;
typedef TYPE_2__ drawVert_t ;


 int FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (int *,int *,TYPE_1__*,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (int ,int ,int ) ;
 double FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;

qboolean FUNC_7( dsurface_t *VAR_5, shaderInfo_t *VAR_6, lFacet_t *VAR_7, drawVert_t *VAR_8, drawVert_t *VAR_9, drawVert_t *VAR_10 ) {

 vec3_t VAR_11;
 int VAR_12;


 if ( !FUNC_2( &VAR_7->plane, VAR_8->xyz, VAR_9->xyz, VAR_10->xyz ) ) {
  VAR_7->numpoints = 0;
  return VAR_2;
 }

 VAR_7->num = VAR_1++;

 FUNC_4( VAR_8->xyz, VAR_4[VAR_5 - VAR_0], VAR_7->points[0] );
 FUNC_4( VAR_9->xyz, VAR_4[VAR_5 - VAR_0], VAR_7->points[1] );
 FUNC_4( VAR_10->xyz, VAR_4[VAR_5 - VAR_0], VAR_7->points[2] );

 VAR_7->lightmapCoords[0][0] = VAR_8->lightmap[0];
 VAR_7->lightmapCoords[0][1] = VAR_8->lightmap[1];
 VAR_7->lightmapCoords[1][0] = VAR_9->lightmap[0];
 VAR_7->lightmapCoords[1][1] = VAR_9->lightmap[1];
 VAR_7->lightmapCoords[2][0] = VAR_10->lightmap[0];
 VAR_7->lightmapCoords[2][1] = VAR_10->lightmap[1];

 FUNC_0( &VAR_7->boundaries[0], &VAR_7->plane, VAR_7->points[0], VAR_7->points[1] );
 FUNC_0( &VAR_7->boundaries[1], &VAR_7->plane, VAR_7->points[1], VAR_7->points[2] );
 FUNC_0( &VAR_7->boundaries[2], &VAR_7->plane, VAR_7->points[2], VAR_7->points[0] );

 for (VAR_12 = 0; VAR_12 < 3; VAR_12++)
 {
  FUNC_6(VAR_7->points[(VAR_12+1)%3], VAR_7->points[VAR_12], VAR_11);
  if (FUNC_5(VAR_11) < 0.1)
   return VAR_2;
 }

 FUNC_3( VAR_7, VAR_8, VAR_9, VAR_10 );
 FUNC_1( VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 );

 VAR_7->numpoints = 3;

 return VAR_3;
}
