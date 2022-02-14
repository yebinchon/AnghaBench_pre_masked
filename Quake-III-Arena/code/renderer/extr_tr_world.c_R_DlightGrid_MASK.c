
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__** meshBounds; int* dlightBits; } ;
typedef TYPE_3__ srfGridMesh_t ;
struct TYPE_10__ {scalar_t__* origin; scalar_t__ radius; } ;
typedef TYPE_4__ dlight_t ;
struct TYPE_8__ {int c_dlightSurfacesCulled; } ;
struct TYPE_7__ {int num_dlights; TYPE_4__* dlights; } ;
struct TYPE_11__ {size_t smpFrame; TYPE_2__ pc; TYPE_1__ refdef; } ;


 TYPE_5__ VAR_0 ;

__attribute__((used)) static int FUNC_0( srfGridMesh_t *VAR_1, int VAR_2 ) {
 int VAR_3;
 dlight_t *VAR_4;

 for ( VAR_3 = 0 ; VAR_3 < VAR_0.refdef.num_dlights ; VAR_3++ ) {
  if ( ! ( VAR_2 & ( 1 << VAR_3 ) ) ) {
   continue;
  }
  VAR_4 = &VAR_0.refdef.dlights[VAR_3];
  if ( VAR_4->origin[0] - VAR_4->radius > VAR_1->meshBounds[1][0]
   || VAR_4->origin[0] + VAR_4->radius < VAR_1->meshBounds[0][0]
   || VAR_4->origin[1] - VAR_4->radius > VAR_1->meshBounds[1][1]
   || VAR_4->origin[1] + VAR_4->radius < VAR_1->meshBounds[0][1]
   || VAR_4->origin[2] - VAR_4->radius > VAR_1->meshBounds[1][2]
   || VAR_4->origin[2] + VAR_4->radius < VAR_1->meshBounds[0][2] ) {

   VAR_2 &= ~( 1 << VAR_3 );
  }
 }

 if ( !VAR_2 ) {
  VAR_0.pc.c_dlightSurfacesCulled++;
 }

 VAR_1->dlightBits[ VAR_0.smpFrame ] = VAR_2;
 return VAR_2;
}
