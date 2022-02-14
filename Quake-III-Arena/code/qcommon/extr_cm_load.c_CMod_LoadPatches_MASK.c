
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int * vec3_t ;
struct TYPE_10__ {int filelen; scalar_t__ fileofs; } ;
typedef TYPE_2__ lump_t ;
struct TYPE_11__ {int shaderNum; int firstVert; int patchHeight; int patchWidth; int surfaceType; } ;
typedef TYPE_3__ dsurface_t ;
struct TYPE_12__ {int * xyz; } ;
typedef TYPE_4__ drawVert_t ;
struct TYPE_13__ {int pc; int surfaceFlags; int contents; } ;
typedef TYPE_5__ cPatch_t ;
struct TYPE_14__ {int numSurfaces; TYPE_1__* shaders; TYPE_5__** surfaces; } ;
struct TYPE_9__ {int surfaceFlags; int contentFlags; } ;


 int FUNC_0 (int,int,int **) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

void FUNC_5( lump_t *VAR_6, lump_t *VAR_7 ) {
 drawVert_t *VAR_8, *VAR_9;
 dsurface_t *VAR_10;
 int VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;
 cPatch_t *VAR_15;
 vec3_t VAR_16[VAR_1];
 int VAR_17, VAR_18;
 int VAR_19;

 VAR_10 = (void *)(VAR_4 + VAR_6->fileofs);
 if (VAR_6->filelen % sizeof(*VAR_10))
  FUNC_1 (VAR_0, "MOD_LoadBmodel: funny lump size");
 VAR_3.numSurfaces = VAR_11 = VAR_6->filelen / sizeof(*VAR_10);
 VAR_3.surfaces = FUNC_2( VAR_3.numSurfaces * sizeof( VAR_3.surfaces[0] ), VAR_5 );

 VAR_8 = (void *)(VAR_4 + VAR_7->fileofs);
 if (VAR_7->filelen % sizeof(*VAR_8))
  FUNC_1 (VAR_0, "MOD_LoadBmodel: funny lump size");



 for ( VAR_12 = 0 ; VAR_12 < VAR_11 ; VAR_12++, VAR_10++ ) {
  if ( FUNC_4( VAR_10->surfaceType ) != VAR_2 ) {
   continue;
  }


  VAR_3.surfaces[ VAR_12 ] = VAR_15 = FUNC_2( sizeof( *VAR_15 ), VAR_5 );


  VAR_17 = FUNC_4( VAR_10->patchWidth );
  VAR_18 = FUNC_4( VAR_10->patchHeight );
  VAR_14 = VAR_17 * VAR_18;
  if ( VAR_14 > VAR_1 ) {
   FUNC_1( VAR_0, "ParseMesh: MAX_PATCH_VERTS" );
  }

  VAR_9 = VAR_8 + FUNC_4( VAR_10->firstVert );
  for ( VAR_13 = 0 ; VAR_13 < VAR_14 ; VAR_13++, VAR_9++ ) {
   VAR_16[VAR_13][0] = FUNC_3( VAR_9->xyz[0] );
   VAR_16[VAR_13][1] = FUNC_3( VAR_9->xyz[1] );
   VAR_16[VAR_13][2] = FUNC_3( VAR_9->xyz[2] );
  }

  VAR_19 = FUNC_4( VAR_10->shaderNum );
  VAR_15->contents = VAR_3.shaders[VAR_19].contentFlags;
  VAR_15->surfaceFlags = VAR_3.shaders[VAR_19].surfaceFlags;


  VAR_15->pc = FUNC_0( VAR_17, VAR_18, VAR_16 );
 }
}
