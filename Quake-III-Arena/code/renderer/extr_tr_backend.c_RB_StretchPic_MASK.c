
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int t2; int s1; scalar_t__ h; scalar_t__ y; scalar_t__ x; int s2; scalar_t__ w; int t1; int * shader; } ;
typedef TYPE_1__ stretchPicCommand_t ;
typedef int shader_t ;
struct TYPE_6__ {scalar_t__ color2D; int entity2D; int * currentEntity; int projection2D; } ;
struct TYPE_5__ {int numIndexes; int numVertexes; int* indexes; int *** texCoords; scalar_t__** xyz; scalar_t__* vertexColors; int * shader; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;

const void *FUNC_4 ( const void *VAR_2 ) {
 const stretchPicCommand_t *VAR_3;
 shader_t *VAR_4;
 int VAR_5, VAR_6;

 VAR_3 = (const stretchPicCommand_t *)VAR_2;

 if ( !VAR_0.projection2D ) {
  FUNC_3();
 }

 VAR_4 = VAR_3->shader;
 if ( VAR_4 != VAR_1.shader ) {
  if ( VAR_1.numIndexes ) {
   FUNC_2();
  }
  VAR_0.currentEntity = &VAR_0.entity2D;
  FUNC_0( VAR_4, 0 );
 }

 FUNC_1( 4, 6 );
 VAR_5 = VAR_1.numVertexes;
 VAR_6 = VAR_1.numIndexes;

 VAR_1.numVertexes += 4;
 VAR_1.numIndexes += 6;

 VAR_1.indexes[ VAR_6 ] = VAR_5 + 3;
 VAR_1.indexes[ VAR_6 + 1 ] = VAR_5 + 0;
 VAR_1.indexes[ VAR_6 + 2 ] = VAR_5 + 2;
 VAR_1.indexes[ VAR_6 + 3 ] = VAR_5 + 2;
 VAR_1.indexes[ VAR_6 + 4 ] = VAR_5 + 0;
 VAR_1.indexes[ VAR_6 + 5 ] = VAR_5 + 1;

 *(int *)VAR_1.vertexColors[ VAR_5 ] =
  *(int *)VAR_1.vertexColors[ VAR_5 + 1 ] =
  *(int *)VAR_1.vertexColors[ VAR_5 + 2 ] =
  *(int *)VAR_1.vertexColors[ VAR_5 + 3 ] = *(int *)VAR_0.color2D;

 VAR_1.xyz[ VAR_5 ][0] = VAR_3->x;
 VAR_1.xyz[ VAR_5 ][1] = VAR_3->y;
 VAR_1.xyz[ VAR_5 ][2] = 0;

 VAR_1.texCoords[ VAR_5 ][0][0] = VAR_3->s1;
 VAR_1.texCoords[ VAR_5 ][0][1] = VAR_3->t1;

 VAR_1.xyz[ VAR_5 + 1 ][0] = VAR_3->x + VAR_3->w;
 VAR_1.xyz[ VAR_5 + 1 ][1] = VAR_3->y;
 VAR_1.xyz[ VAR_5 + 1 ][2] = 0;

 VAR_1.texCoords[ VAR_5 + 1 ][0][0] = VAR_3->s2;
 VAR_1.texCoords[ VAR_5 + 1 ][0][1] = VAR_3->t1;

 VAR_1.xyz[ VAR_5 + 2 ][0] = VAR_3->x + VAR_3->w;
 VAR_1.xyz[ VAR_5 + 2 ][1] = VAR_3->y + VAR_3->h;
 VAR_1.xyz[ VAR_5 + 2 ][2] = 0;

 VAR_1.texCoords[ VAR_5 + 2 ][0][0] = VAR_3->s2;
 VAR_1.texCoords[ VAR_5 + 2 ][0][1] = VAR_3->t2;

 VAR_1.xyz[ VAR_5 + 3 ][0] = VAR_3->x;
 VAR_1.xyz[ VAR_5 + 3 ][1] = VAR_3->y + VAR_3->h;
 VAR_1.xyz[ VAR_5 + 3 ][2] = 0;

 VAR_1.texCoords[ VAR_5 + 3 ][0][0] = VAR_3->s1;
 VAR_1.texCoords[ VAR_5 + 3 ][0][1] = VAR_3->t2;

 return (const void *)(VAR_3 + 1);
}
