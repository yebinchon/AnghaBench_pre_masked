
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec3_t ;
typedef int qboolean ;
struct TYPE_12__ {int width; int height; TYPE_4__* verts; } ;
struct TYPE_8__ {int shaderInfo; TYPE_7__ mesh; void* grouped; struct TYPE_8__* next; } ;
typedef TYPE_1__ parseMesh_t ;
struct TYPE_9__ {int * lightmapVecs; int shaderInfo; } ;
typedef TYPE_2__ mapDrawSurface_t ;
typedef int grouped ;
struct TYPE_10__ {TYPE_1__* patches; } ;
typedef TYPE_3__ entity_t ;
struct TYPE_11__ {scalar_t__* xyz; } ;
typedef TYPE_4__ drawVert_t ;
typedef int byte ;


 int FUNC_0 (scalar_t__*,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__* FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (int,int,int*,int*) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ) ;
 double FUNC_5 (scalar_t__) ;
 int* FUNC_6 (int) ;
 int FUNC_7 (int*,int ,int) ;
 int FUNC_8 (char*,...) ;
 void* VAR_1 ;

void FUNC_9( entity_t *VAR_2 ) {
 parseMesh_t *VAR_3;
 parseMesh_t *VAR_4, *VAR_5;
 mapDrawSurface_t *VAR_6;
 int VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 drawVert_t *VAR_15, *VAR_16;
 vec3_t VAR_17[2];
 byte *VAR_18;
 parseMesh_t *VAR_19[VAR_0];
 qboolean VAR_20[VAR_0];
 byte VAR_21[VAR_0];

 FUNC_8( "----- PatchMapDrawSurfs -----\n" );

 VAR_7 = 0;
 for ( VAR_3 = VAR_2->patches ; VAR_3 ; VAR_3 = VAR_3->next ) {
  VAR_19[VAR_7] = VAR_3;
  VAR_7++;
 }

 if ( !VAR_7 ) {
  return;
 }
 VAR_18 = FUNC_6( VAR_7 * VAR_7 );
 FUNC_7( VAR_18, 0, VAR_7 * VAR_7 );


 for ( VAR_11 = 0 ; VAR_11 < VAR_7 ; VAR_11++ ) {
  VAR_18[VAR_11*VAR_7+VAR_11] = 1;

  for ( VAR_12 = VAR_11+1 ; VAR_12 < VAR_7 ; VAR_12++ ) {
   VAR_4 = VAR_19[VAR_11];
   VAR_5 = VAR_19[VAR_12];
   VAR_13 = VAR_5->mesh.width * VAR_5->mesh.height;
   VAR_15 = VAR_5->mesh.verts;

   for ( VAR_9 = 0 ; VAR_9 < VAR_13 ; VAR_9++, VAR_15++ ) {
    VAR_14 = VAR_4->mesh.width * VAR_4->mesh.height;
    VAR_16 = VAR_4->mesh.verts;
    for ( VAR_10 = 0 ; VAR_10 < VAR_14 ; VAR_10++, VAR_16++ ) {
     if ( FUNC_5( VAR_15->xyz[0] - VAR_16->xyz[0] ) < 1.0
      && FUNC_5( VAR_15->xyz[1] - VAR_16->xyz[1] ) < 1.0
      && FUNC_5( VAR_15->xyz[2] - VAR_16->xyz[2] ) < 1.0 ) {
      break;
     }
    }
    if ( VAR_10 != VAR_14 ) {
     break;
    }
   }
   if ( VAR_9 != VAR_13 ) {

    VAR_18[VAR_11*VAR_7+VAR_12] =
    VAR_18[VAR_12*VAR_7+VAR_11] = 1;
   } else {

    VAR_18[VAR_11*VAR_7+VAR_12] =
    VAR_18[VAR_12*VAR_7+VAR_11] = 0;
   }

  }
 }


 FUNC_7( VAR_20, 0, sizeof(VAR_20) );
 VAR_8 = 0;
 for ( VAR_9 = 0 ; VAR_9 < VAR_7 ; VAR_9++ ) {
  if ( !VAR_20[VAR_9] ) {
   VAR_8++;
  }


  FUNC_7( VAR_21, 0, VAR_7 );
  FUNC_3( VAR_9, VAR_7, VAR_18, VAR_21 );


  FUNC_1( VAR_17[0], VAR_17[1] );
  for ( VAR_10 = 0 ; VAR_10 < VAR_7 ; VAR_10++ ) {
   if ( VAR_21[VAR_10] ) {
    VAR_20[VAR_10] = VAR_1;
    VAR_5 = VAR_19[VAR_10];
    VAR_13 = VAR_5->mesh.width * VAR_5->mesh.height;
    VAR_15 = VAR_5->mesh.verts;
    for ( VAR_11 = 0 ; VAR_11 < VAR_13 ; VAR_11++, VAR_15++ ) {
     FUNC_0( VAR_15->xyz, VAR_17[0], VAR_17[1] );
    }
   }
  }


  VAR_5 = VAR_19[VAR_9];
  VAR_5->grouped = VAR_1;
  VAR_6 = FUNC_2( &VAR_5->mesh );
  VAR_6->shaderInfo = VAR_5->shaderInfo;
  FUNC_4( VAR_17[0], VAR_6->lightmapVecs[0] );
  FUNC_4( VAR_17[1], VAR_6->lightmapVecs[1] );
 }

 FUNC_8( "%5i patches\n", VAR_7 );
 FUNC_8( "%5i patch LOD groups\n", VAR_8 );
}
