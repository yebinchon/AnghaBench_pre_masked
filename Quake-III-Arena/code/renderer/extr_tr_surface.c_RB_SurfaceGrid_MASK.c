
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int* dlightBits; int width; float* widthLodError; int height; float* heightLodError; TYPE_2__* verts; int lodRadius; int lodOrigin; } ;
typedef TYPE_1__ srfGridMesh_t ;
typedef scalar_t__ qboolean ;
struct TYPE_8__ {float* xyz; float* st; float* lightmap; float* normal; scalar_t__ color; } ;
typedef TYPE_2__ drawVert_t ;
struct TYPE_11__ {scalar_t__ needsNormal; } ;
struct TYPE_10__ {size_t smpFrame; } ;
struct TYPE_9__ {int dlightBits; int numVertexes; int numIndexes; float** xyz; float** normal; float*** texCoords; int* vertexDlightBits; int* indexes; TYPE_6__* shader; int * vertexColors; int fogNum; } ;


 float FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_6__*,int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_3__ VAR_4 ;

void FUNC_3( srfGridMesh_t *VAR_5 ) {
 int VAR_6, VAR_7;
 float *VAR_8;
 float *VAR_9;
 float *VAR_10;
 unsigned char *VAR_11;
 drawVert_t *VAR_12;
 int VAR_13, VAR_14, VAR_15;
 int VAR_16;
 int VAR_17[VAR_0];
 int VAR_18[VAR_0];
 float VAR_19;
 int VAR_20, VAR_21;
 int VAR_22;
 int VAR_23;
 int *VAR_24;
 qboolean VAR_25;

 VAR_23 = VAR_5->dlightBits[VAR_3.smpFrame];
 VAR_4.dlightBits |= VAR_23;


 VAR_19 = FUNC_0( VAR_5->lodOrigin, VAR_5->lodRadius );



 VAR_17[0] = 0;
 VAR_20 = 1;
 for ( VAR_6 = 1 ; VAR_6 < VAR_5->width-1 ; VAR_6++ ) {
  if ( VAR_5->widthLodError[VAR_6] <= VAR_19 ) {
   VAR_17[VAR_20] = VAR_6;
   VAR_20++;
  }
 }
 VAR_17[VAR_20] = VAR_5->width-1;
 VAR_20++;

 VAR_18[0] = 0;
 VAR_21 = 1;
 for ( VAR_6 = 1 ; VAR_6 < VAR_5->height-1 ; VAR_6++ ) {
  if ( VAR_5->heightLodError[VAR_6] <= VAR_19 ) {
   VAR_18[VAR_21] = VAR_6;
   VAR_21++;
  }
 }
 VAR_18[VAR_21] = VAR_5->height-1;
 VAR_21++;





 VAR_16 = 0;
 VAR_13 = 0;
 while ( VAR_16 < VAR_21 - 1 ) {

  do {
   VAR_15 = ( VAR_2 - VAR_4.numVertexes ) / VAR_20;
   VAR_14 = ( VAR_1 - VAR_4.numIndexes ) / ( VAR_20 * 6 );


   if ( VAR_15 < 2 || VAR_14 < 1 ) {
    FUNC_2();
    FUNC_1(VAR_4.shader, VAR_4.fogNum );
   } else {
    break;
   }
  } while ( 1 );

  VAR_13 = VAR_14;
  if ( VAR_15 < VAR_14 + 1 ) {
   VAR_13 = VAR_15 - 1;
  }
  if ( VAR_16 + VAR_13 > VAR_21 ) {
   VAR_13 = VAR_21 - VAR_16;
  }

  VAR_22 = VAR_4.numVertexes;

  VAR_8 = VAR_4.xyz[VAR_22];
  VAR_10 = VAR_4.normal[VAR_22];
  VAR_9 = VAR_4.texCoords[VAR_22][0];
  VAR_11 = ( unsigned char * ) &VAR_4.vertexColors[VAR_22];
  VAR_24 = &VAR_4.vertexDlightBits[VAR_22];
  VAR_25 = VAR_4.shader->needsNormal;

  for ( VAR_6 = 0 ; VAR_6 < VAR_13 ; VAR_6++ ) {
   for ( VAR_7 = 0 ; VAR_7 < VAR_20 ; VAR_7++ ) {
    VAR_12 = VAR_5->verts + VAR_18[ VAR_16 + VAR_6 ] * VAR_5->width
     + VAR_17[ VAR_7 ];

    VAR_8[0] = VAR_12->xyz[0];
    VAR_8[1] = VAR_12->xyz[1];
    VAR_8[2] = VAR_12->xyz[2];
    VAR_9[0] = VAR_12->st[0];
    VAR_9[1] = VAR_12->st[1];
    VAR_9[2] = VAR_12->lightmap[0];
    VAR_9[3] = VAR_12->lightmap[1];
    if ( VAR_25 ) {
     VAR_10[0] = VAR_12->normal[0];
     VAR_10[1] = VAR_12->normal[1];
     VAR_10[2] = VAR_12->normal[2];
    }
    * ( unsigned int * ) VAR_11 = * ( unsigned int * ) VAR_12->color;
    *VAR_24++ = VAR_23;
    VAR_8 += 4;
    VAR_10 += 4;
    VAR_9 += 4;
    VAR_11 += 4;
   }
  }



  {
   int VAR_26;
   int VAR_27, VAR_28;

   VAR_28 = VAR_13 - 1;
   VAR_27 = VAR_20 - 1;
   VAR_26 = VAR_4.numIndexes;
   for (VAR_6 = 0 ; VAR_6 < VAR_28 ; VAR_6++) {
    for (VAR_7 = 0 ; VAR_7 < VAR_27 ; VAR_7++) {
     int VAR_29, VAR_30, VAR_31, VAR_32;


     VAR_29 = VAR_22 + VAR_6*VAR_20 + VAR_7 + 1;
     VAR_30 = VAR_29 - 1;
     VAR_31 = VAR_30 + VAR_20;
     VAR_32 = VAR_31 + 1;

     VAR_4.indexes[VAR_26] = VAR_30;
     VAR_4.indexes[VAR_26+1] = VAR_31;
     VAR_4.indexes[VAR_26+2] = VAR_29;

     VAR_4.indexes[VAR_26+3] = VAR_29;
     VAR_4.indexes[VAR_26+4] = VAR_31;
     VAR_4.indexes[VAR_26+5] = VAR_32;
     VAR_26 += 6;
    }
   }

   VAR_4.numIndexes = VAR_26;
  }

  VAR_4.numVertexes += VAR_13 * VAR_20;

  VAR_16 += VAR_13 - 1;
 }
}
