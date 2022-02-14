
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int surfaceFlags; } ;
typedef TYPE_2__ shaderInfo_t ;
struct TYPE_12__ {int lightmapNum; struct TYPE_12__* nextOnShader; TYPE_2__* shaderInfo; int * lightmapVecs; TYPE_1__* side; int patch; scalar_t__ miscModel; int numVerts; } ;
typedef TYPE_3__ mapDrawSurface_t ;
struct TYPE_13__ {int firstDrawSurf; } ;
typedef TYPE_4__ entity_t ;
struct TYPE_14__ {int normal; } ;
struct TYPE_10__ {size_t planenum; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 TYPE_6__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (char*,...) ;
 TYPE_3__** VAR_11 ;

void FUNC_4( entity_t *VAR_12 ) {
 int VAR_13, VAR_14;
 mapDrawSurface_t *VAR_15;
 shaderInfo_t *VAR_16;

 FUNC_3 ("--- AllocateLightmaps ---\n");




 VAR_10 = 0;

 for ( VAR_13 = VAR_12->firstDrawSurf ; VAR_13 < VAR_9 ; VAR_13++ ) {
  VAR_15 = &VAR_6[VAR_13];
  if ( !VAR_15->numVerts ) {
   continue;
  }
  if ( VAR_15->miscModel ) {
   continue;
  }
  if ( !VAR_15->patch ) {
   FUNC_2( VAR_7[VAR_15->side->planenum].normal, VAR_15->lightmapVecs[2] );
  }


  for ( VAR_14 = 0 ; VAR_14 < VAR_10 ; VAR_14++ ) {
   if ( VAR_15->shaderInfo == VAR_11[VAR_14]->shaderInfo ) {
    VAR_15->nextOnShader = VAR_11[VAR_14];
    VAR_11[VAR_14] = VAR_15;
    break;
   }
  }
  if ( VAR_14 == VAR_10 ) {
   if ( VAR_10 >= VAR_2 ) {
    FUNC_1( "MAX_MAP_SHADERS" );
   }
   VAR_11[VAR_14] = VAR_15;
   VAR_10++;
  }
 }
 FUNC_3( "%5i unique shaders\n", VAR_10 );






 for ( VAR_13 = 0 ; VAR_13 < VAR_10 ; VAR_13++ ) {
  VAR_16 = VAR_11[VAR_13]->shaderInfo;

  for ( VAR_15 = VAR_11[VAR_13] ; VAR_15 ; VAR_15 = VAR_15->nextOnShader ) {

   if ( VAR_16->surfaceFlags & VAR_3 ) {
    VAR_15->lightmapNum = -1;
   } else if ( VAR_16->surfaceFlags & VAR_4 ) {
    VAR_15->lightmapNum = -3;
   } else {
    FUNC_0( VAR_15 );
   }
  }
 }

 FUNC_3( "%7i exact lightmap texels\n", VAR_5 );
 FUNC_3( "%7i block lightmap texels\n", VAR_8 * VAR_1*VAR_0 );
}
