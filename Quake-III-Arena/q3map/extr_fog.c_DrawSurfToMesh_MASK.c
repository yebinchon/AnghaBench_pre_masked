
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int width; int height; void* verts; } ;
typedef TYPE_1__ mesh_t ;
struct TYPE_6__ {int patchWidth; int patchHeight; int verts; } ;
typedef TYPE_2__ mapDrawSurface_t ;


 void* FUNC_0 (int) ;
 int FUNC_1 (void*,int ,int) ;

mesh_t *FUNC_2( mapDrawSurface_t *VAR_0 ) {
 mesh_t *VAR_1;

 VAR_1 = FUNC_0( sizeof( *VAR_1 ) );
 VAR_1->width = VAR_0->patchWidth;
 VAR_1->height = VAR_0->patchHeight;
 VAR_1->verts = FUNC_0( sizeof(VAR_1->verts[0]) * VAR_1->width * VAR_1->height );
 FUNC_1( VAR_1->verts, VAR_0->verts, sizeof(VAR_1->verts[0]) * VAR_1->width * VAR_1->height );

 return VAR_1;
}
