
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int numVerts; int numIndexes; int * indexes; int * verts; int * lightmapVecs; int lightmapOrigin; int lightmapHeight; int lightmapWidth; int lightmapY; int lightmapX; int lightmapNum; int fogNum; int patchHeight; int patchWidth; TYPE_1__* shaderInfo; } ;
typedef TYPE_2__ mapDrawSurface_t ;
struct TYPE_11__ {size_t firstVert; int numVerts; size_t firstIndex; int numIndexes; int * lightmapVecs; int lightmapOrigin; int lightmapHeight; int lightmapWidth; int lightmapY; int lightmapX; int lightmapNum; int fogNum; int patchHeight; int patchWidth; int shaderNum; int surfaceType; } ;
typedef TYPE_3__ dsurface_t ;
struct TYPE_12__ {int* color; } ;
typedef TYPE_4__ drawVert_t ;
struct TYPE_9__ {int shader; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int * VAR_4 ;
 TYPE_3__* VAR_5 ;
 TYPE_4__* VAR_6 ;
 int FUNC_3 (TYPE_4__*,int *,int) ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;

void FUNC_4( mapDrawSurface_t *VAR_10 ) {
 int VAR_11;
 dsurface_t *VAR_12;
 drawVert_t *VAR_13;

 if ( VAR_8 == VAR_1 ) {
  FUNC_1( "MAX_MAP_DRAW_SURFS" );
 }
 VAR_12 = &VAR_5[ VAR_8 ];
 VAR_8++;

 VAR_12->surfaceType = VAR_3;
 VAR_12->shaderNum = FUNC_0( VAR_10->shaderInfo->shader );
 VAR_12->firstVert = VAR_9;
 VAR_12->numVerts = VAR_10->numVerts;
 VAR_12->firstIndex = VAR_7;
 VAR_12->numIndexes = VAR_10->numIndexes;
 VAR_12->patchWidth = VAR_10->patchWidth;
 VAR_12->patchHeight = VAR_10->patchHeight;
 VAR_12->fogNum = VAR_10->fogNum;
 VAR_12->lightmapNum = VAR_10->lightmapNum;
 VAR_12->lightmapX = VAR_10->lightmapX;
 VAR_12->lightmapY = VAR_10->lightmapY;
 VAR_12->lightmapWidth = VAR_10->lightmapWidth;
 VAR_12->lightmapHeight = VAR_10->lightmapHeight;

 FUNC_2( VAR_10->lightmapOrigin, VAR_12->lightmapOrigin );
 FUNC_2( VAR_10->lightmapVecs[0], VAR_12->lightmapVecs[0] );
 FUNC_2( VAR_10->lightmapVecs[1], VAR_12->lightmapVecs[1] );
 FUNC_2( VAR_10->lightmapVecs[2], VAR_12->lightmapVecs[2] );

 for ( VAR_11 = 0 ; VAR_11 < VAR_10->numVerts ; VAR_11++ ) {
  if ( VAR_9 == VAR_2 ) {
   FUNC_1( "MAX_MAP_DRAW_VERTS" );
  }
  VAR_13 = &VAR_6[ VAR_9 ];
  VAR_9++;
  FUNC_3( VAR_13, &VAR_10->verts[ VAR_11 ], sizeof( *VAR_13 ) );
  VAR_13->color[0] = 255;
  VAR_13->color[1] = 255;
  VAR_13->color[2] = 255;
 }

 for ( VAR_11 = 0 ; VAR_11 < VAR_10->numIndexes ; VAR_11++ ) {
  if ( VAR_7 == VAR_0 ) {
   FUNC_1( "MAX_MAP_DRAW_INDEXES" );
  }
  VAR_4[ VAR_7 ] = VAR_10->indexes[ VAR_11 ];
  VAR_7++;
 }
}
