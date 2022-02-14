
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int* origin; int** axis; int hModel; } ;
struct TYPE_7__ {int* vieworg; int** viewaxis; } ;
struct TYPE_12__ {TYPE_2__ testModelEntity; TYPE_1__ refdef; scalar_t__ testGun; int testModelName; } ;
struct TYPE_11__ {int value; } ;
struct TYPE_10__ {int value; } ;
struct TYPE_9__ {int value; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int*,int*) ;
 TYPE_6__ VAR_0 ;
 TYPE_5__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4 (void) {
 int VAR_4;


 VAR_0.testModelEntity.hModel = FUNC_3( VAR_0.testModelName );
 if (! VAR_0.testModelEntity.hModel ) {
  FUNC_0 ("Can't register model\n");
  return;
 }


 if ( VAR_0.testGun ) {
  FUNC_1( VAR_0.refdef.vieworg, VAR_0.testModelEntity.origin );
  FUNC_1( VAR_0.refdef.viewaxis[0], VAR_0.testModelEntity.axis[0] );
  FUNC_1( VAR_0.refdef.viewaxis[1], VAR_0.testModelEntity.axis[1] );
  FUNC_1( VAR_0.refdef.viewaxis[2], VAR_0.testModelEntity.axis[2] );


  for (VAR_4=0 ; VAR_4<3 ; VAR_4++) {
   VAR_0.testModelEntity.origin[VAR_4] += VAR_0.refdef.viewaxis[0][VAR_4] * VAR_1.value;
   VAR_0.testModelEntity.origin[VAR_4] += VAR_0.refdef.viewaxis[1][VAR_4] * VAR_2.value;
   VAR_0.testModelEntity.origin[VAR_4] += VAR_0.refdef.viewaxis[2][VAR_4] * VAR_3.value;
  }
 }

 FUNC_2( &VAR_0.testModelEntity );
}
