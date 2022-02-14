
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {double skinNum; int frame; int oldframe; int reType; int * axis; int oldorigin; int origin; } ;
typedef TYPE_1__ refEntity_t ;
struct TYPE_8__ {double clientNum; int frame; int powerups; int eventParm; int origin2; } ;
typedef TYPE_2__ entityState_t ;
typedef int ent ;
struct TYPE_9__ {int lerpOrigin; TYPE_2__ currentState; } ;
typedef TYPE_3__ centity_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7( centity_t *VAR_2 ) {
 refEntity_t VAR_3;
 entityState_t *VAR_4;

 VAR_4 = &VAR_2->currentState;


 FUNC_5 (&VAR_3, 0, sizeof(VAR_3));
 FUNC_3( VAR_2->lerpOrigin, VAR_3.origin );
 FUNC_3( VAR_4->origin2, VAR_3.oldorigin );
 FUNC_0( VAR_4->eventParm, VAR_3.axis[0] );
 FUNC_2( VAR_3.axis[1], VAR_3.axis[0] );



 FUNC_4( VAR_1, VAR_3.axis[1], VAR_3.axis[1] );

 FUNC_1( VAR_3.axis[0], VAR_3.axis[1], VAR_3.axis[2] );
 VAR_3.reType = VAR_0;
 VAR_3.oldframe = VAR_4->powerups;
 VAR_3.frame = VAR_4->frame;
 VAR_3.skinNum = VAR_4->clientNum/256.0 * 360;


 FUNC_6(&VAR_3);
}
