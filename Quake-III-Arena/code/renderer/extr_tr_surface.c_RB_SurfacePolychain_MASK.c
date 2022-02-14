
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int numVerts; TYPE_1__* verts; } ;
typedef TYPE_2__ srfPoly_t ;
struct TYPE_7__ {int numVertexes; int* indexes; int numIndexes; int * vertexColors; int *** texCoords; int * xyz; } ;
struct TYPE_5__ {scalar_t__ modulate; int * st; int xyz; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ) ;
 TYPE_3__ VAR_0 ;

void FUNC_2( srfPoly_t *VAR_1 ) {
 int VAR_2;
 int VAR_3;

 FUNC_0( VAR_1->numVerts, 3*(VAR_1->numVerts - 2) );


 VAR_3 = VAR_0.numVertexes;
 for ( VAR_2 = 0; VAR_2 < VAR_1->numVerts; VAR_2++ ) {
  FUNC_1( VAR_1->verts[VAR_2].xyz, VAR_0.xyz[VAR_3] );
  VAR_0.texCoords[VAR_3][0][0] = VAR_1->verts[VAR_2].st[0];
  VAR_0.texCoords[VAR_3][0][1] = VAR_1->verts[VAR_2].st[1];
  *(int *)&VAR_0.vertexColors[VAR_3] = *(int *)VAR_1->verts[ VAR_2 ].modulate;

  VAR_3++;
 }


 for ( VAR_2 = 0; VAR_2 < VAR_1->numVerts-2; VAR_2++ ) {
  VAR_0.indexes[VAR_0.numIndexes + 0] = VAR_0.numVertexes;
  VAR_0.indexes[VAR_0.numIndexes + 1] = VAR_0.numVertexes + VAR_2 + 1;
  VAR_0.indexes[VAR_0.numIndexes + 2] = VAR_0.numVertexes + VAR_2 + 2;
  VAR_0.numIndexes += 3;
 }

 VAR_0.numVertexes = VAR_3;
}
