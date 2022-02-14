
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int width; int height; TYPE_2__* verts; } ;
typedef TYPE_1__ mesh_t ;
struct TYPE_7__ {double* xyz; double* normal; } ;
typedef TYPE_2__ drawVert_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (double*,double*) ;
 void* FUNC_2 (int) ;

mesh_t *FUNC_3( mesh_t *VAR_0 ) {
 int VAR_1, VAR_2;
 mesh_t *VAR_3;
 drawVert_t *VAR_4, *VAR_5, *VAR_6;

 VAR_3 = FUNC_2( sizeof( *VAR_3 ) );

 VAR_3->width = VAR_0->width * 2;
 VAR_3->height = VAR_0->height;
 VAR_3->verts = FUNC_2( VAR_3->width * VAR_3->height * sizeof(*VAR_3->verts) );
 for ( VAR_2 = 0 ; VAR_2 < VAR_0->height ; VAR_2++ ) {
  VAR_3->verts[ VAR_2 * VAR_3->width + 0 ] = VAR_0->verts[ VAR_2 * VAR_0->width + 0 ];
  VAR_3->verts[ VAR_2 * VAR_3->width + VAR_3->width - 1 ] = VAR_0->verts[ VAR_2 * VAR_0->width + VAR_0->width - 1 ];
  for ( VAR_1 = 1 ; VAR_1 < VAR_3->width - 1 ; VAR_1+= 2 ) {
   VAR_4 = VAR_0->verts + VAR_2 * VAR_0->width + (VAR_1 >> 1);
   VAR_5 = VAR_4 + 1;
   VAR_6 = VAR_3->verts + VAR_2 * VAR_3->width + VAR_1;

   VAR_6->xyz[0] = 0.75 * VAR_4->xyz[0] + 0.25 * VAR_5->xyz[0];
   VAR_6->xyz[1] = 0.75 * VAR_4->xyz[1] + 0.25 * VAR_5->xyz[1];
   VAR_6->xyz[2] = 0.75 * VAR_4->xyz[2] + 0.25 * VAR_5->xyz[2];

   VAR_6->normal[0] = 0.75 * VAR_4->normal[0] + 0.25 * VAR_5->normal[0];
   VAR_6->normal[1] = 0.75 * VAR_4->normal[1] + 0.25 * VAR_5->normal[1];
   VAR_6->normal[2] = 0.75 * VAR_4->normal[2] + 0.25 * VAR_5->normal[2];

   FUNC_1( VAR_6->normal, VAR_6->normal );

   VAR_6++;

   VAR_6->xyz[0] = 0.25 * VAR_4->xyz[0] + 0.75 * VAR_5->xyz[0];
   VAR_6->xyz[1] = 0.25 * VAR_4->xyz[1] + 0.75 * VAR_5->xyz[1];
   VAR_6->xyz[2] = 0.25 * VAR_4->xyz[2] + 0.75 * VAR_5->xyz[2];

   VAR_6->normal[0] = 0.25 * VAR_4->normal[0] + 0.75 * VAR_5->normal[0];
   VAR_6->normal[1] = 0.25 * VAR_4->normal[1] + 0.75 * VAR_5->normal[1];
   VAR_6->normal[2] = 0.25 * VAR_4->normal[2] + 0.75 * VAR_5->normal[2];

   FUNC_1( VAR_6->normal, VAR_6->normal );

  }
 }

 FUNC_0( VAR_0 );

 return VAR_3;
}
