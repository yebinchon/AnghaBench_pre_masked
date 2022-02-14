
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int width; int height; TYPE_1__* verts; } ;
typedef TYPE_2__ mesh_t ;
struct TYPE_4__ {double* xyz; } ;



void FUNC_0( mesh_t VAR_0 ) {
 int VAR_1, VAR_2, VAR_3;
 float VAR_4, VAR_5;


 for ( VAR_1 = 0 ; VAR_1 < VAR_0.width ; VAR_1++ ) {
  for ( VAR_2 = 1 ; VAR_2 < VAR_0.height ; VAR_2 += 2 ) {
   for ( VAR_3 = 0 ; VAR_3 < 3 ; VAR_3++ ) {
    VAR_4 = ( VAR_0.verts[VAR_2*VAR_0.width+VAR_1].xyz[VAR_3] + VAR_0.verts[(VAR_2+1)*VAR_0.width+VAR_1].xyz[VAR_3] ) * 0.5;
    VAR_5 = ( VAR_0.verts[VAR_2*VAR_0.width+VAR_1].xyz[VAR_3] + VAR_0.verts[(VAR_2-1)*VAR_0.width+VAR_1].xyz[VAR_3] ) * 0.5;
    VAR_0.verts[VAR_2*VAR_0.width+VAR_1].xyz[VAR_3] = ( VAR_4 + VAR_5 ) * 0.5;
   }
  }
 }

 for ( VAR_2 = 0 ; VAR_2 < VAR_0.height ; VAR_2++ ) {
  for ( VAR_1 = 1 ; VAR_1 < VAR_0.width ; VAR_1 += 2 ) {
   for ( VAR_3 = 0 ; VAR_3 < 3 ; VAR_3++ ) {
    VAR_4 = ( VAR_0.verts[VAR_2*VAR_0.width+VAR_1].xyz[VAR_3] + VAR_0.verts[VAR_2*VAR_0.width+VAR_1+1].xyz[VAR_3] ) * 0.5;
    VAR_5 = ( VAR_0.verts[VAR_2*VAR_0.width+VAR_1].xyz[VAR_3] + VAR_0.verts[VAR_2*VAR_0.width+VAR_1-1].xyz[VAR_3] ) * 0.5;
    VAR_0.verts[VAR_2*VAR_0.width+VAR_1].xyz[VAR_3] = ( VAR_4 + VAR_5 ) * 0.5;
   }
  }
 }
}
