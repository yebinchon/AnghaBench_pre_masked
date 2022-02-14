
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ backlerp; int * axis; int origin; int frame; int oldframe; } ;
typedef TYPE_1__ refEntity_t ;
struct TYPE_7__ {int axis; int * origin; } ;
typedef TYPE_2__ orientation_t ;
typedef int clipHandle_t ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ,scalar_t__,char*) ;

__attribute__((used)) static void FUNC_4( refEntity_t *VAR_0, const refEntity_t *VAR_1,
       clipHandle_t VAR_2, char *VAR_3 ) {
 int VAR_4;
 orientation_t VAR_5;


 FUNC_3( &VAR_5, VAR_2, VAR_1->oldframe, VAR_1->frame,
  1.0 - VAR_1->backlerp, VAR_3 );


 FUNC_1( VAR_1->origin, VAR_0->origin );
 for ( VAR_4 = 0 ; VAR_4 < 3 ; VAR_4++ ) {
  FUNC_2( VAR_0->origin, VAR_5.origin[VAR_4], VAR_1->axis[VAR_4], VAR_0->origin );
 }


 FUNC_0( VAR_5.axis, ((refEntity_t*)VAR_1)->axis, VAR_0->axis );
 VAR_0->backlerp = VAR_1->backlerp;
}
