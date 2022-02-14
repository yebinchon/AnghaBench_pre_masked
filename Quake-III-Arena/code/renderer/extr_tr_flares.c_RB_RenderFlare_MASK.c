
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_11__ {int drawIntensity; int eyeZ; scalar_t__ windowY; scalar_t__ windowX; int fogNum; int color; } ;
typedef TYPE_3__ flare_t ;
struct TYPE_10__ {float viewportWidth; } ;
struct TYPE_9__ {int c_flareRenders; } ;
struct TYPE_15__ {TYPE_2__ viewParms; TYPE_1__ pc; } ;
struct TYPE_14__ {float value; } ;
struct TYPE_13__ {size_t numVertexes; int*** texCoords; int** vertexColors; int* indexes; int numIndexes; scalar_t__** xyz; } ;
struct TYPE_12__ {int identityLight; int flareShader; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int,int*) ;
 TYPE_7__ VAR_0 ;
 TYPE_6__* VAR_1 ;
 TYPE_5__ VAR_2 ;
 TYPE_4__ VAR_3 ;

void FUNC_3( flare_t *VAR_4 ) {
 float VAR_5;
 vec3_t VAR_6;
 int VAR_7[3];

 VAR_0.pc.c_flareRenders++;

 FUNC_2( VAR_4->color, VAR_4->drawIntensity*VAR_3.identityLight, VAR_6 );
 VAR_7[0] = VAR_6[0] * 255;
 VAR_7[1] = VAR_6[1] * 255;
 VAR_7[2] = VAR_6[2] * 255;

 VAR_5 = VAR_0.viewParms.viewportWidth * ( VAR_1->value/640.0f + 8 / -VAR_4->eyeZ );

 FUNC_0( VAR_3.flareShader, VAR_4->fogNum );


 VAR_2.xyz[VAR_2.numVertexes][0] = VAR_4->windowX - VAR_5;
 VAR_2.xyz[VAR_2.numVertexes][1] = VAR_4->windowY - VAR_5;
 VAR_2.texCoords[VAR_2.numVertexes][0][0] = 0;
 VAR_2.texCoords[VAR_2.numVertexes][0][1] = 0;
 VAR_2.vertexColors[VAR_2.numVertexes][0] = VAR_7[0];
 VAR_2.vertexColors[VAR_2.numVertexes][1] = VAR_7[1];
 VAR_2.vertexColors[VAR_2.numVertexes][2] = VAR_7[2];
 VAR_2.vertexColors[VAR_2.numVertexes][3] = 255;
 VAR_2.numVertexes++;

 VAR_2.xyz[VAR_2.numVertexes][0] = VAR_4->windowX - VAR_5;
 VAR_2.xyz[VAR_2.numVertexes][1] = VAR_4->windowY + VAR_5;
 VAR_2.texCoords[VAR_2.numVertexes][0][0] = 0;
 VAR_2.texCoords[VAR_2.numVertexes][0][1] = 1;
 VAR_2.vertexColors[VAR_2.numVertexes][0] = VAR_7[0];
 VAR_2.vertexColors[VAR_2.numVertexes][1] = VAR_7[1];
 VAR_2.vertexColors[VAR_2.numVertexes][2] = VAR_7[2];
 VAR_2.vertexColors[VAR_2.numVertexes][3] = 255;
 VAR_2.numVertexes++;

 VAR_2.xyz[VAR_2.numVertexes][0] = VAR_4->windowX + VAR_5;
 VAR_2.xyz[VAR_2.numVertexes][1] = VAR_4->windowY + VAR_5;
 VAR_2.texCoords[VAR_2.numVertexes][0][0] = 1;
 VAR_2.texCoords[VAR_2.numVertexes][0][1] = 1;
 VAR_2.vertexColors[VAR_2.numVertexes][0] = VAR_7[0];
 VAR_2.vertexColors[VAR_2.numVertexes][1] = VAR_7[1];
 VAR_2.vertexColors[VAR_2.numVertexes][2] = VAR_7[2];
 VAR_2.vertexColors[VAR_2.numVertexes][3] = 255;
 VAR_2.numVertexes++;

 VAR_2.xyz[VAR_2.numVertexes][0] = VAR_4->windowX + VAR_5;
 VAR_2.xyz[VAR_2.numVertexes][1] = VAR_4->windowY - VAR_5;
 VAR_2.texCoords[VAR_2.numVertexes][0][0] = 1;
 VAR_2.texCoords[VAR_2.numVertexes][0][1] = 0;
 VAR_2.vertexColors[VAR_2.numVertexes][0] = VAR_7[0];
 VAR_2.vertexColors[VAR_2.numVertexes][1] = VAR_7[1];
 VAR_2.vertexColors[VAR_2.numVertexes][2] = VAR_7[2];
 VAR_2.vertexColors[VAR_2.numVertexes][3] = 255;
 VAR_2.numVertexes++;

 VAR_2.indexes[VAR_2.numIndexes++] = 0;
 VAR_2.indexes[VAR_2.numIndexes++] = 1;
 VAR_2.indexes[VAR_2.numIndexes++] = 2;
 VAR_2.indexes[VAR_2.numIndexes++] = 0;
 VAR_2.indexes[VAR_2.numIndexes++] = 2;
 VAR_2.indexes[VAR_2.numIndexes++] = 3;

 FUNC_1();
}
