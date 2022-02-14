
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int integer; } ;
struct TYPE_8__ {int rdflags; int num_dlights; } ;
struct TYPE_6__ {int * visBounds; } ;
struct TYPE_9__ {int currentEntityNum; int shiftedEntityNum; TYPE_3__ refdef; TYPE_2__* world; TYPE_1__ viewParms; } ;
struct TYPE_7__ {int nodes; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int,int) ;
 TYPE_5__* VAR_3 ;
 TYPE_4__ VAR_4 ;

void FUNC_3 (void) {
 if ( !VAR_3->integer ) {
  return;
 }

 if ( VAR_4.refdef.rdflags & VAR_2 ) {
  return;
 }

 VAR_4.currentEntityNum = VAR_0;
 VAR_4.shiftedEntityNum = VAR_4.currentEntityNum << VAR_1;


 FUNC_1 ();


 FUNC_0( VAR_4.viewParms.visBounds[0], VAR_4.viewParms.visBounds[1] );


 if ( VAR_4.refdef.num_dlights > 32 ) {
  VAR_4.refdef.num_dlights = 32 ;
 }
 FUNC_2( VAR_4.world->nodes, 15, ( 1 << VAR_4.refdef.num_dlights ) - 1 );
}
