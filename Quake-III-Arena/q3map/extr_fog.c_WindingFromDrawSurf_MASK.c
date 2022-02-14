
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int numpoints; int * p; } ;
typedef TYPE_2__ winding_t ;
struct TYPE_9__ {int numVerts; TYPE_1__* verts; } ;
typedef TYPE_3__ mapDrawSurface_t ;
struct TYPE_7__ {int xyz; } ;


 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

winding_t *FUNC_2( mapDrawSurface_t *VAR_0 ) {
 winding_t *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0( VAR_0->numVerts );
 VAR_1->numpoints = VAR_0->numVerts;
 for ( VAR_2 = 0 ; VAR_2 < VAR_0->numVerts ; VAR_2++ ) {
  FUNC_1( VAR_0->verts[VAR_2].xyz, VAR_1->p[VAR_2] );
 }
 return VAR_1;
}
