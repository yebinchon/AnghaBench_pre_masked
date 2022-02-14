
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef float* vec3_t ;
typedef int tree_t ;
struct TYPE_11__ {float* xyz; int normal; } ;
typedef TYPE_1__ md3XyzNormal_t ;
struct TYPE_12__ {int * indexes; } ;
typedef TYPE_2__ md3Triangle_t ;
struct TYPE_13__ {int ofsShaders; int numVerts; int numTriangles; int ofsTriangles; int ofsSt; int ofsXyzNormals; int ofsEnd; } ;
typedef TYPE_3__ md3Surface_t ;
struct TYPE_14__ {int * st; } ;
typedef TYPE_4__ md3St_t ;
struct TYPE_15__ {int name; } ;
typedef TYPE_5__ md3Shader_t ;
struct TYPE_16__ {int numSurfaces; int ofsSurfaces; } ;
typedef TYPE_6__ md3Header_t ;
struct TYPE_17__ {int numVerts; int numIndexes; int lightmapNum; int fogNum; TYPE_8__* verts; int * indexes; int shaderInfo; int miscModel; } ;
typedef TYPE_7__ mapDrawSurface_t ;
struct TYPE_18__ {int* color; float* xyz; float* normal; scalar_t__* lightmap; int * st; } ;
typedef TYPE_8__ drawVert_t ;
typedef int byte ;


 TYPE_7__* FUNC_0 () ;
 TYPE_6__* FUNC_1 (char const*) ;
 float VAR_0 ;
 float VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 float FUNC_3 (float) ;
 void* FUNC_4 (int) ;
 int VAR_6 ;
 float FUNC_5 (float) ;

void FUNC_6( const char *VAR_7, vec3_t VAR_8, float VAR_9, tree_t *VAR_10 ) {
 int VAR_11, VAR_12;
 md3Header_t *VAR_13;
 md3Surface_t *VAR_14;
 md3Shader_t *VAR_15;
 md3Triangle_t *VAR_16;
 md3St_t *VAR_17;
 md3XyzNormal_t *VAR_18;
 drawVert_t *VAR_19;
 float VAR_20, VAR_21;
 float VAR_22, VAR_23;
 mapDrawSurface_t *VAR_24;
 vec3_t VAR_25;

 VAR_9 = VAR_9 / 180 * VAR_1;
 VAR_22 = FUNC_3( VAR_9 );
 VAR_23 = FUNC_5( VAR_9 );


 VAR_13 = FUNC_1( VAR_7 );
 if ( !VAR_13 ) {
  return;
 }



 VAR_3++;
 VAR_4 += VAR_13->numSurfaces;



 VAR_14 = (md3Surface_t *) ( (byte *)VAR_13 + VAR_13->ofsSurfaces );
 for ( VAR_11 = 0 ; VAR_11 < VAR_13->numSurfaces ; VAR_11++) {

  VAR_24 = FUNC_0();
  VAR_24->miscModel = VAR_6;

        VAR_15 = (md3Shader_t *) ( (byte *)VAR_14 + VAR_14->ofsShaders );

  VAR_24->shaderInfo = FUNC_2( VAR_15->name );

  VAR_24->numVerts = VAR_14->numVerts;
  VAR_24->verts = FUNC_4( VAR_24->numVerts * sizeof( VAR_24->verts[0] ) );

  VAR_24->numIndexes = VAR_14->numTriangles * 3;
  VAR_24->indexes = FUNC_4( VAR_24->numIndexes * sizeof( VAR_24->indexes[0] ) );

  VAR_24->lightmapNum = -1;
  VAR_24->fogNum = -1;


  VAR_2 += VAR_14->numTriangles * 3;
  VAR_16 = (md3Triangle_t *) ( (byte *)VAR_14 + VAR_14->ofsTriangles );
  for ( VAR_12 = 0 ; VAR_12 < VAR_14->numTriangles ; VAR_12++, VAR_16++ ) {
   VAR_24->indexes[VAR_12*3+0] = VAR_16->indexes[0];
   VAR_24->indexes[VAR_12*3+1] = VAR_16->indexes[1];
   VAR_24->indexes[VAR_12*3+2] = VAR_16->indexes[2];
  }


        VAR_17 = (md3St_t *) ( (byte *)VAR_14 + VAR_14->ofsSt );
        VAR_18 = (md3XyzNormal_t *) ( (byte *)VAR_14 + VAR_14->ofsXyzNormals );

  VAR_5 += VAR_14->numVerts;
  for ( VAR_12 = 0 ; VAR_12 < VAR_14->numVerts ; VAR_12++, VAR_17++, VAR_18++ ) {
   VAR_19 = &VAR_24->verts[ VAR_12 ];

   VAR_19->st[0] = VAR_17->st[0];
   VAR_19->st[1] = VAR_17->st[1];

   VAR_19->lightmap[0] = 0;
   VAR_19->lightmap[1] = 0;


   VAR_19->color[0] = 255;
   VAR_19->color[1] = 255;
   VAR_19->color[2] = 255;
   VAR_19->color[3] = 255;

   VAR_19->xyz[0] = VAR_8[0] + VAR_0 * ( VAR_18->xyz[0] * VAR_22 - VAR_18->xyz[1] * VAR_23 );
   VAR_19->xyz[1] = VAR_8[1] + VAR_0 * ( VAR_18->xyz[0] * VAR_23 + VAR_18->xyz[1] * VAR_22 );
   VAR_19->xyz[2] = VAR_8[2] + VAR_0 * ( VAR_18->xyz[2] );


   VAR_20 = ( VAR_18->normal >> 8 ) & 0xff;
   VAR_21 = ( VAR_18->normal & 0xff );
   VAR_20 *= VAR_1/128;
   VAR_21 *= VAR_1/128;

   VAR_25[0] = FUNC_3(VAR_20) * FUNC_5(VAR_21);
   VAR_25[1] = FUNC_5(VAR_20) * FUNC_5(VAR_21);
   VAR_25[2] = FUNC_3(VAR_21);


   VAR_19->normal[0] = VAR_25[0] * VAR_22 - VAR_25[1] * VAR_23;
   VAR_19->normal[1] = VAR_25[0] * VAR_23 + VAR_25[1] * VAR_22;
   VAR_19->normal[2] = VAR_25[2];
  }


  VAR_14 = (md3Surface_t *)( (byte *)VAR_14 + VAR_14->ofsEnd );
 }

}
