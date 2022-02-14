
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {float* normal; } ;
struct TYPE_9__ {int numPoints; int numIndices; int* dlightBits; int ofsIndices; float** points; TYPE_2__ plane; } ;
typedef TYPE_3__ srfSurfaceFace_t ;
struct TYPE_11__ {size_t smpFrame; } ;
struct TYPE_10__ {int dlightBits; int numVertexes; unsigned int* indexes; int numIndexes; float*** texCoords; int* vertexDlightBits; int * vertexColors; int * xyz; int * normal; TYPE_1__* shader; } ;
struct TYPE_7__ {scalar_t__ needsNormal; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (float*,int ) ;
 TYPE_5__ VAR_1 ;
 TYPE_4__ VAR_2 ;

void FUNC_2( srfSurfaceFace_t *VAR_3 ) {
 int VAR_4;
 unsigned *VAR_5, *VAR_6;
 float *VAR_7;
 float *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 FUNC_0( VAR_3->numPoints, VAR_3->numIndices );

 VAR_12 = VAR_3->dlightBits[VAR_1.smpFrame];
 VAR_2.dlightBits |= VAR_12;

 VAR_5 = ( unsigned * ) ( ( ( char * ) VAR_3 ) + VAR_3->ofsIndices );

 VAR_10 = VAR_2.numVertexes;
 VAR_6 = VAR_2.indexes + VAR_2.numIndexes;
 for ( VAR_4 = VAR_3->numIndices-1 ; VAR_4 >= 0 ; VAR_4-- ) {
  VAR_6[VAR_4] = VAR_5[VAR_4] + VAR_10;
 }

 VAR_2.numIndexes += VAR_3->numIndices;

 VAR_7 = VAR_3->points[0];

 VAR_9 = VAR_2.numVertexes;

 VAR_11 = VAR_3->numPoints;

 if ( VAR_2.shader->needsNormal ) {
  VAR_8 = VAR_3->plane.normal;
  for ( VAR_4 = 0, VAR_9 = VAR_2.numVertexes; VAR_4 < VAR_11; VAR_4++, VAR_9++ ) {
   FUNC_1( VAR_8, VAR_2.normal[VAR_9] );
  }
 }

 for ( VAR_4 = 0, VAR_7 = VAR_3->points[0], VAR_9 = VAR_2.numVertexes; VAR_4 < VAR_11; VAR_4++, VAR_7 += VAR_0, VAR_9++ ) {
  FUNC_1( VAR_7, VAR_2.xyz[VAR_9]);
  VAR_2.texCoords[VAR_9][0][0] = VAR_7[3];
  VAR_2.texCoords[VAR_9][0][1] = VAR_7[4];
  VAR_2.texCoords[VAR_9][1][0] = VAR_7[5];
  VAR_2.texCoords[VAR_9][1][1] = VAR_7[6];
  * ( unsigned int * ) &VAR_2.vertexColors[VAR_9] = * ( unsigned int * ) &VAR_7[7];
  VAR_2.vertexDlightBits[VAR_9] = VAR_12;
 }


 VAR_2.numVertexes += VAR_3->numPoints;
}
