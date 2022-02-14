
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int terrainVert_t ;
typedef int terrainMesh_t ;


 int * FUNC_0 (int *,int,int) ;

void FUNC_1( terrainMesh_t *VAR_0, int VAR_1, int VAR_2, terrainVert_t **VAR_3 ) {
 if ( ( VAR_1 + VAR_2 ) & 1 ) {

  VAR_3[ 0 ] = FUNC_0( VAR_0, VAR_1, VAR_2 );
  VAR_3[ 1 ] = FUNC_0( VAR_0, VAR_1, VAR_2 + 1 );
  VAR_3[ 2 ] = FUNC_0( VAR_0, VAR_1 + 1, VAR_2 + 1 );


  VAR_3[ 3 ] = VAR_3[ 2 ];
  VAR_3[ 4 ] = FUNC_0( VAR_0, VAR_1 + 1, VAR_2 );
  VAR_3[ 5 ] = VAR_3[ 0 ];
 } else {

  VAR_3[ 0 ] = FUNC_0( VAR_0, VAR_1, VAR_2 );
  VAR_3[ 1 ] = FUNC_0( VAR_0, VAR_1, VAR_2 + 1 );
  VAR_3[ 2 ] = FUNC_0( VAR_0, VAR_1 + 1, VAR_2 );


  VAR_3[ 3 ] = VAR_3[ 2 ];
  VAR_3[ 4 ] = VAR_3[ 1 ];
  VAR_3[ 5 ] = FUNC_0( VAR_0, VAR_1 + 1, VAR_2 + 1 );
 }
}
