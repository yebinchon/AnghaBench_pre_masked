
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int numIndexes; int numVerts; TYPE_1__* verts; int indexes; } ;
typedef TYPE_2__ terrainSurf_t ;
typedef int shaderInfo_t ;
struct TYPE_13__ {int lightmapNum; int fogNum; int numIndexes; int numVerts; TYPE_4__* verts; void* indexes; int * shaderInfo; int miscModel; } ;
typedef TYPE_3__ mapDrawSurface_t ;
struct TYPE_14__ {int* color; int normal; int * st; int xyz; } ;
typedef TYPE_4__ drawVert_t ;
struct TYPE_15__ {int numVerts; TYPE_4__* verts; } ;
struct TYPE_11__ {int* color; int * st; int xyz; } ;


 TYPE_3__* FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_4__*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (void*,int ,int) ;
 int FUNC_8 (TYPE_4__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* VAR_3 ;

void FUNC_9( terrainSurf_t *VAR_4, shaderInfo_t *VAR_5 ) {
 int VAR_6, VAR_7, VAR_8;
 drawVert_t *VAR_9;
 drawVert_t *VAR_10;
 mapDrawSurface_t *VAR_11;

 VAR_11 = FUNC_0();

 VAR_11->miscModel = VAR_2;
 VAR_11->shaderInfo = VAR_5;
 VAR_11->lightmapNum = -1;
 VAR_11->fogNum = -1;
 VAR_11->numIndexes = VAR_4->numIndexes;
 VAR_11->numVerts = VAR_4->numVerts;


 VAR_11->indexes = FUNC_6( VAR_4->numIndexes * sizeof( *VAR_11->indexes ) );
 FUNC_7( VAR_11->indexes, VAR_4->indexes, VAR_4->numIndexes * sizeof( *VAR_11->indexes ) );


 VAR_11->verts = FUNC_6( VAR_4->numVerts * sizeof( *VAR_11->verts ) );
 FUNC_8( VAR_11->verts, 0, VAR_4->numVerts * sizeof( *VAR_11->verts ) );


 VAR_9 = VAR_11->verts;
 for( VAR_6 = 0; VAR_6 < VAR_11->numVerts; VAR_6++, VAR_9++ ) {
  FUNC_4( VAR_4->verts[ VAR_6 ].xyz, VAR_9->xyz );


  VAR_9->st[ 0 ] = VAR_4->verts[ VAR_6 ].st[ 0 ];
  VAR_9->st[ 1 ] = VAR_4->verts[ VAR_6 ].st[ 1 ];


  VAR_9->color[0] = 255;
  VAR_9->color[1] = 255;
  VAR_9->color[2] = 255;
  VAR_9->color[3] = VAR_4->verts[ VAR_6 ].color[ 3 ];


  FUNC_3( VAR_9->normal );
  for( VAR_7 = 0; VAR_7 < VAR_0; VAR_7++ ) {
   VAR_10 = VAR_3[ VAR_7 ].verts;
   for( VAR_8 = 0; VAR_8 < VAR_3[ VAR_7 ].numVerts; VAR_8++, VAR_10++ ) {
    if ( FUNC_1( VAR_9, VAR_10, VAR_1 ) ) {
     FUNC_2( VAR_9->normal, VAR_10->normal, VAR_9->normal );
    }
   }
  }

  FUNC_5( VAR_9->normal, VAR_9->normal );
 }
}
