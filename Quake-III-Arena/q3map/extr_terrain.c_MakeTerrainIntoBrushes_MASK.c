
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int xyz; } ;
typedef TYPE_1__ terrainVert_t ;
struct TYPE_5__ {int height; int width; TYPE_1__* map; } ;
typedef TYPE_2__ terrainMesh_t ;
typedef int shaderInfo_t ;


 int FUNC_0 (int ,int ,int ,int *) ;
 int * FUNC_1 (char*) ;

void FUNC_2( terrainMesh_t *VAR_0 ) {
 int VAR_1[ 6 ];
 int VAR_2;
 int VAR_3;
 terrainVert_t *VAR_4;
 shaderInfo_t *VAR_5;

 VAR_5 = FUNC_1( "textures/common/terrain" );

 VAR_4 = VAR_0->map;
 for( VAR_2 = 0; VAR_2 < VAR_0->height - 1; VAR_2++ ) {
  for( VAR_3 = 0; VAR_3 < VAR_0->width - 1; VAR_3++ ) {
   if ( ( VAR_3 + VAR_2 ) & 1 ) {

    VAR_1[ 0 ] = VAR_3 + VAR_2 * VAR_0->width;
    VAR_1[ 1 ] = VAR_3 + ( VAR_2 + 1 ) * VAR_0->width;
    VAR_1[ 2 ] = ( VAR_3 + 1 ) + ( VAR_2 + 1 ) * VAR_0->width;
    VAR_1[ 3 ] = ( VAR_3 + 1 ) + ( VAR_2 + 1 ) * VAR_0->width;
    VAR_1[ 4 ] = ( VAR_3 + 1 ) + VAR_2 * VAR_0->width;
    VAR_1[ 5 ] = VAR_3 + VAR_2 * VAR_0->width;
   } else {

    VAR_1[ 0 ] = VAR_3 + VAR_2 * VAR_0->width;
    VAR_1[ 1 ] = VAR_3 + ( VAR_2 + 1 ) * VAR_0->width;
    VAR_1[ 2 ] = ( VAR_3 + 1 ) + VAR_2 * VAR_0->width;
    VAR_1[ 3 ] = ( VAR_3 + 1 ) + VAR_2 * VAR_0->width;
    VAR_1[ 4 ] = VAR_3 + ( VAR_2 + 1 ) * VAR_0->width;
    VAR_1[ 5 ] = ( VAR_3 + 1 ) + ( VAR_2 + 1 ) * VAR_0->width;
   }

   FUNC_0( VAR_4[ VAR_1[ 0 ] ].xyz, VAR_4[ VAR_1[ 1 ] ].xyz, VAR_4[ VAR_1[ 2 ] ].xyz, VAR_5 );
   FUNC_0( VAR_4[ VAR_1[ 3 ] ].xyz, VAR_4[ VAR_1[ 4 ] ].xyz, VAR_4[ VAR_1[ 5 ] ].xyz, VAR_5 );
  }
 }
}
