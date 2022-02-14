
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int surfaceType_t ;
struct TYPE_14__ {void** normal; int type; int dist; } ;
struct TYPE_15__ {int numPoints; int numIndices; int ofsIndices; TYPE_10__ plane; void*** points; int surfaceType; } ;
typedef TYPE_1__ srfSurfaceFace_t ;
struct TYPE_16__ {int fogIndex; int * data; TYPE_9__* shader; } ;
typedef TYPE_2__ msurface_t ;
struct TYPE_17__ {int lightmapNum; int fogNum; int numVerts; int numIndexes; int firstVert; int firstIndex; int ** lightmapVecs; int shaderNum; } ;
typedef TYPE_3__ dsurface_t ;
struct TYPE_18__ {int color; int * lightmap; int * st; int * xyz; } ;
typedef TYPE_4__ drawVert_t ;
typedef int byte ;
struct TYPE_22__ {int isSky; } ;
struct TYPE_21__ {scalar_t__ integer; } ;
struct TYPE_20__ {TYPE_1__* (* Hunk_Alloc ) (int,int ) ;int (* Printf ) (int ,char*,int) ;} ;
struct TYPE_19__ {TYPE_9__* defaultShader; } ;


 int FUNC_0 (void**,void**) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (void**) ;
 int FUNC_4 (int ,int *) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_10__*) ;
 TYPE_9__* FUNC_6 (int ,int) ;
 int VAR_3 ;
 TYPE_8__* VAR_4 ;
 TYPE_7__ VAR_5 ;
 int FUNC_7 (int ,char*,int) ;
 TYPE_1__* FUNC_8 (int,int ) ;
 TYPE_5__ VAR_6 ;

__attribute__((used)) static void FUNC_9( dsurface_t *VAR_7, drawVert_t *VAR_8, msurface_t *VAR_9, int *VAR_10 ) {
 int VAR_11, VAR_12;
 srfSurfaceFace_t *VAR_13;
 int VAR_14, VAR_15;
 int VAR_16;
 int VAR_17, VAR_18;

 VAR_16 = FUNC_2( VAR_7->lightmapNum );


 VAR_9->fogIndex = FUNC_2( VAR_7->fogNum ) + 1;


 VAR_9->shader = FUNC_6( VAR_7->shaderNum, VAR_16 );
 if ( VAR_4->integer && !VAR_9->shader->isSky ) {
  VAR_9->shader = VAR_6.defaultShader;
 }

 VAR_14 = FUNC_2( VAR_7->numVerts );
 if (VAR_14 > VAR_0) {
  VAR_5.Printf( VAR_1, "WARNING: MAX_FACE_POINTS exceeded: %i\n", VAR_14);
    VAR_14 = VAR_0;
    VAR_9->shader = VAR_6.defaultShader;
 }

 VAR_15 = FUNC_2( VAR_7->numIndexes );


 VAR_17 = ( int ) &((srfSurfaceFace_t *)0)->points[VAR_14];
 VAR_18 = VAR_17;
 VAR_17 += sizeof( int ) * VAR_15;

 VAR_13 = VAR_5.Hunk_Alloc( VAR_17, VAR_3 );
 VAR_13->surfaceType = VAR_2;
 VAR_13->numPoints = VAR_14;
 VAR_13->numIndices = VAR_15;
 VAR_13->ofsIndices = VAR_18;

 VAR_8 += FUNC_2( VAR_7->firstVert );
 for ( VAR_11 = 0 ; VAR_11 < VAR_14 ; VAR_11++ ) {
  for ( VAR_12 = 0 ; VAR_12 < 3 ; VAR_12++ ) {
   VAR_13->points[VAR_11][VAR_12] = FUNC_1( VAR_8[VAR_11].xyz[VAR_12] );
  }
  for ( VAR_12 = 0 ; VAR_12 < 2 ; VAR_12++ ) {
   VAR_13->points[VAR_11][3+VAR_12] = FUNC_1( VAR_8[VAR_11].st[VAR_12] );
   VAR_13->points[VAR_11][5+VAR_12] = FUNC_1( VAR_8[VAR_11].lightmap[VAR_12] );
  }
  FUNC_4( VAR_8[VAR_11].color, (byte *)&VAR_13->points[VAR_11][7] );
 }

 VAR_10 += FUNC_2( VAR_7->firstIndex );
 for ( VAR_11 = 0 ; VAR_11 < VAR_15 ; VAR_11++ ) {
  ((int *)((byte *)VAR_13 + VAR_13->ofsIndices ))[VAR_11] = FUNC_2( VAR_10[ VAR_11 ] );
 }


 for ( VAR_11 = 0 ; VAR_11 < 3 ; VAR_11++ ) {
  VAR_13->plane.normal[VAR_11] = FUNC_1( VAR_7->lightmapVecs[2][VAR_11] );
 }
 VAR_13->plane.dist = FUNC_0( VAR_13->points[0], VAR_13->plane.normal );
 FUNC_5( &VAR_13->plane );
 VAR_13->plane.type = FUNC_3( VAR_13->plane.normal );

 VAR_9->data = (surfaceType_t *)VAR_13;
}
