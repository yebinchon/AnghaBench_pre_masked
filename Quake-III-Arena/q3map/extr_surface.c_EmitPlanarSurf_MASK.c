
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int numVerts; int * verts; int * lightmapVecs; int lightmapOrigin; int lightmapHeight; int lightmapWidth; int lightmapY; int lightmapX; int lightmapNum; int fogNum; TYPE_1__* shaderInfo; } ;
typedef TYPE_2__ mapDrawSurface_t ;
struct TYPE_12__ {size_t firstVert; int numVerts; int * lightmapVecs; int lightmapOrigin; int lightmapHeight; int lightmapWidth; int lightmapY; int lightmapX; int lightmapNum; int fogNum; int shaderNum; int surfaceType; } ;
typedef TYPE_3__ dsurface_t ;
struct TYPE_13__ {int* color; } ;
typedef TYPE_4__ drawVert_t ;
struct TYPE_10__ {int shader; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ) ;
 TYPE_3__* VAR_3 ;
 TYPE_4__* VAR_4 ;
 int FUNC_4 (TYPE_4__*,int *,int) ;
 size_t VAR_5 ;
 size_t VAR_6 ;

void FUNC_5( mapDrawSurface_t *VAR_7 ) {
 int VAR_8;
 dsurface_t *VAR_9;
 drawVert_t *VAR_10;

 if ( VAR_5 == VAR_0 ) {
  FUNC_1( "MAX_MAP_DRAW_SURFS" );
 }
 VAR_9 = &VAR_3[ VAR_5 ];
 VAR_5++;

 VAR_9->surfaceType = VAR_2;
 VAR_9->shaderNum = FUNC_0( VAR_7->shaderInfo->shader );
 VAR_9->firstVert = VAR_6;
 VAR_9->numVerts = VAR_7->numVerts;
 VAR_9->fogNum = VAR_7->fogNum;
 VAR_9->lightmapNum = VAR_7->lightmapNum;
 VAR_9->lightmapX = VAR_7->lightmapX;
 VAR_9->lightmapY = VAR_7->lightmapY;
 VAR_9->lightmapWidth = VAR_7->lightmapWidth;
 VAR_9->lightmapHeight = VAR_7->lightmapHeight;

 FUNC_3( VAR_7->lightmapOrigin, VAR_9->lightmapOrigin );
 FUNC_3( VAR_7->lightmapVecs[0], VAR_9->lightmapVecs[0] );
 FUNC_3( VAR_7->lightmapVecs[1], VAR_9->lightmapVecs[1] );
 FUNC_3( VAR_7->lightmapVecs[2], VAR_9->lightmapVecs[2] );

 for ( VAR_8 = 0 ; VAR_8 < VAR_7->numVerts ; VAR_8++ ) {
  if ( VAR_6 == VAR_1 ) {
   FUNC_1( "MAX_MAP_DRAW_VERTS" );
  }
  VAR_10 = &VAR_4[ VAR_6 ];
  VAR_6++;
  FUNC_4( VAR_10, &VAR_7->verts[ VAR_8 ], sizeof( *VAR_10 ) );
  VAR_10->color[0] = 255;
  VAR_10->color[1] = 255;
  VAR_10->color[2] = 255;
  VAR_10->color[3] = 255;
 }


 FUNC_2( VAR_9 );
}
