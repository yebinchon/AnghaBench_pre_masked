
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_8__ {TYPE_2__* currentEntity; } ;
struct TYPE_7__ {int numVertexes; int*** texCoords; double** vertexColors; int* indexes; int numIndexes; int * xyz; } ;
struct TYPE_5__ {double* shaderRGBA; } ;
struct TYPE_6__ {TYPE_1__ e; } ;


 int FUNC_0 (int const,float,int const,int ) ;
 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static void FUNC_1( const vec3_t VAR_2, const vec3_t VAR_3, const vec3_t VAR_4, float VAR_5, float VAR_6 )
{
 float VAR_7;
 int VAR_8;
 float VAR_9 = VAR_5 / 256.0f;

 VAR_8 = VAR_1.numVertexes;

 VAR_7 = -VAR_6;


 FUNC_0( VAR_2, VAR_6, VAR_4, VAR_1.xyz[VAR_1.numVertexes] );
 VAR_1.texCoords[VAR_1.numVertexes][0][0] = 0;
 VAR_1.texCoords[VAR_1.numVertexes][0][1] = 0;
 VAR_1.vertexColors[VAR_1.numVertexes][0] = VAR_0.currentEntity->e.shaderRGBA[0] * 0.25;
 VAR_1.vertexColors[VAR_1.numVertexes][1] = VAR_0.currentEntity->e.shaderRGBA[1] * 0.25;
 VAR_1.vertexColors[VAR_1.numVertexes][2] = VAR_0.currentEntity->e.shaderRGBA[2] * 0.25;
 VAR_1.numVertexes++;

 FUNC_0( VAR_2, VAR_7, VAR_4, VAR_1.xyz[VAR_1.numVertexes] );
 VAR_1.texCoords[VAR_1.numVertexes][0][0] = 0;
 VAR_1.texCoords[VAR_1.numVertexes][0][1] = 1;
 VAR_1.vertexColors[VAR_1.numVertexes][0] = VAR_0.currentEntity->e.shaderRGBA[0];
 VAR_1.vertexColors[VAR_1.numVertexes][1] = VAR_0.currentEntity->e.shaderRGBA[1];
 VAR_1.vertexColors[VAR_1.numVertexes][2] = VAR_0.currentEntity->e.shaderRGBA[2];
 VAR_1.numVertexes++;

 FUNC_0( VAR_3, VAR_6, VAR_4, VAR_1.xyz[VAR_1.numVertexes] );

 VAR_1.texCoords[VAR_1.numVertexes][0][0] = VAR_9;
 VAR_1.texCoords[VAR_1.numVertexes][0][1] = 0;
 VAR_1.vertexColors[VAR_1.numVertexes][0] = VAR_0.currentEntity->e.shaderRGBA[0];
 VAR_1.vertexColors[VAR_1.numVertexes][1] = VAR_0.currentEntity->e.shaderRGBA[1];
 VAR_1.vertexColors[VAR_1.numVertexes][2] = VAR_0.currentEntity->e.shaderRGBA[2];
 VAR_1.numVertexes++;

 FUNC_0( VAR_3, VAR_7, VAR_4, VAR_1.xyz[VAR_1.numVertexes] );
 VAR_1.texCoords[VAR_1.numVertexes][0][0] = VAR_9;
 VAR_1.texCoords[VAR_1.numVertexes][0][1] = 1;
 VAR_1.vertexColors[VAR_1.numVertexes][0] = VAR_0.currentEntity->e.shaderRGBA[0];
 VAR_1.vertexColors[VAR_1.numVertexes][1] = VAR_0.currentEntity->e.shaderRGBA[1];
 VAR_1.vertexColors[VAR_1.numVertexes][2] = VAR_0.currentEntity->e.shaderRGBA[2];
 VAR_1.numVertexes++;

 VAR_1.indexes[VAR_1.numIndexes++] = VAR_8;
 VAR_1.indexes[VAR_1.numIndexes++] = VAR_8 + 1;
 VAR_1.indexes[VAR_1.numIndexes++] = VAR_8 + 2;

 VAR_1.indexes[VAR_1.numIndexes++] = VAR_8 + 2;
 VAR_1.indexes[VAR_1.numIndexes++] = VAR_8 + 1;
 VAR_1.indexes[VAR_1.numIndexes++] = VAR_8 + 3;
}
