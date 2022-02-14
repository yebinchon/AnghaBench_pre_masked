
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int width; int height; TYPE_5__* verts; } ;
typedef TYPE_3__ mesh_t ;
struct TYPE_18__ {int patchWidth; int patchHeight; int lightmapWidth; int lightmapHeight; int lightmapX; int lightmapY; scalar_t__ lightmapNum; TYPE_2__* mapBrush; TYPE_1__* shaderInfo; TYPE_5__* verts; } ;
typedef TYPE_4__ mapDrawSurface_t ;
struct TYPE_19__ {float* lightmap; } ;
typedef TYPE_5__ drawVert_t ;
struct TYPE_16__ {int brushnum; int entitynum; } ;
struct TYPE_15__ {int lightmapSampleSize; } ;


 int FUNC_0 (int,int,int*,int*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_3__) ;
 TYPE_3__* FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (TYPE_3__,int,int) ;
 TYPE_3__* FUNC_7 (TYPE_3__*,int,int,int*,int*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;

void FUNC_8( mapDrawSurface_t *VAR_7 ) {
 int VAR_8, VAR_9, VAR_10;
 drawVert_t *VAR_11;
 int VAR_12, VAR_13;
 int VAR_14, VAR_15;
 float VAR_16, VAR_17;
 mesh_t VAR_18, *VAR_19, *VAR_20, *VAR_21;
 int VAR_22[VAR_1], VAR_23[VAR_0], VAR_24;

 VAR_11 = VAR_7->verts;

 VAR_18.width = VAR_7->patchWidth;
 VAR_18.height = VAR_7->patchHeight;
 VAR_18.verts = VAR_11;
 VAR_21 = FUNC_6( VAR_18, 8, 999 );

 FUNC_4( *VAR_21 );
 VAR_20 = FUNC_5( VAR_21 );
 FUNC_2(VAR_21);

 VAR_24 = VAR_6;
 if (VAR_7->shaderInfo->lightmapSampleSize)
  VAR_24 = VAR_7->shaderInfo->lightmapSampleSize;




 VAR_19 = FUNC_7( VAR_20, VAR_24, VAR_1, VAR_22, VAR_23);


 VAR_12 = VAR_19->width;
 VAR_13 = VAR_19->height;






 FUNC_2(VAR_19);


 VAR_2 += VAR_12 * VAR_13;

 if ( !FUNC_0( VAR_12, VAR_13, &VAR_14, &VAR_15 ) ) {
  FUNC_3();
  if ( !FUNC_0( VAR_12, VAR_13, &VAR_14, &VAR_15 ) ) {
   FUNC_1("Entity %i, brush %i: Lightmap allocation failed",
    VAR_7->mapBrush->entitynum, VAR_7->mapBrush->brushnum );
  }
 }







 VAR_7->lightmapNum = VAR_3 - 1;
 VAR_7->lightmapWidth = VAR_12;
 VAR_7->lightmapHeight = VAR_13;
 VAR_7->lightmapX = VAR_14;
 VAR_7->lightmapY = VAR_15;

 for ( VAR_8 = 0 ; VAR_8 < VAR_7->patchWidth ; VAR_8++ ) {
  for ( VAR_10 = 0 ; VAR_10 < VAR_12 ; VAR_10++ ) {
   if ( VAR_5[VAR_10] >= VAR_8 ) {
    break;
   }
  }
  if (VAR_10 >= VAR_12)
   VAR_10 = VAR_12-1;
  VAR_16 = VAR_14 + VAR_10;
  for ( VAR_9 = 0 ; VAR_9 < VAR_7->patchHeight ; VAR_9++ ) {
   for ( VAR_10 = 0 ; VAR_10 < VAR_13 ; VAR_10++ ) {
    if ( VAR_4[VAR_10] >= VAR_9 ) {
     break;
    }
   }
   if (VAR_10 >= VAR_13)
    VAR_10 = VAR_13-1;
   VAR_17 = VAR_15 + VAR_10;
   VAR_11[VAR_8 + VAR_9 * VAR_7->patchWidth].lightmap[0] = ( VAR_16 + 0.5 ) / VAR_1;
   VAR_11[VAR_8 + VAR_9 * VAR_7->patchWidth].lightmap[1] = ( VAR_17 + 0.5 ) / VAR_0;
  }
 }
}
