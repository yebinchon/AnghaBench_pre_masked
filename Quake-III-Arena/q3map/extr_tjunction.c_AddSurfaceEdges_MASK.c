
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int numVerts; TYPE_1__* verts; } ;
typedef TYPE_2__ mapDrawSurface_t ;
struct TYPE_4__ {int xyz; int * lightmap; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;

void FUNC_1( mapDrawSurface_t *VAR_1 ) {
 int VAR_2;

 for ( VAR_2 = 0 ; VAR_2 < VAR_1->numVerts ; VAR_2++ ) {


  VAR_1->verts[VAR_2].lightmap[0] =
   FUNC_0( VAR_1->verts[VAR_2].xyz, VAR_1->verts[(VAR_2+1) % VAR_1->numVerts].xyz, VAR_0 );
 }
}
