
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int width; int height; int * verts; } ;
typedef TYPE_1__ mesh_t ;
typedef int drawVert_t ;


 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (int) ;

mesh_t *FUNC_2( mesh_t *VAR_0 ) {
 int VAR_1, VAR_2;
 mesh_t *VAR_3;

 VAR_3 = FUNC_1( sizeof( *VAR_3 ) );
 VAR_3->width = VAR_0->height;
 VAR_3->height = VAR_0->width;
 VAR_3->verts = FUNC_1( VAR_3->width * VAR_3->height * sizeof( drawVert_t ) );

 for ( VAR_2 = 0 ; VAR_2 < VAR_0->height ; VAR_2++ ) {
  for ( VAR_1 = 0 ; VAR_1 < VAR_0->width ; VAR_1++ ) {
   VAR_3->verts[ VAR_1 * VAR_0->height + VAR_2 ] = VAR_0->verts[ VAR_2 * VAR_0->width + VAR_1 ];
  }
 }

 FUNC_0( VAR_0 );

 return VAR_3;
}
