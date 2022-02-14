
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_12__ {size_t clientNum; int eFlags; } ;
struct TYPE_16__ {int numEntities; int snapFlags; TYPE_11__ ps; TYPE_5__* entities; } ;
typedef TYPE_4__ snapshot_t ;
struct TYPE_17__ {size_t number; int eFlags; } ;
typedef TYPE_5__ entityState_t ;
struct TYPE_13__ {int eFlags; } ;
struct TYPE_18__ {void* interpolate; TYPE_1__ currentState; int currentValid; int nextState; } ;
typedef TYPE_6__ centity_t ;
struct TYPE_19__ {void* nextFrameTeleport; TYPE_3__* snap; TYPE_4__* nextSnap; } ;
struct TYPE_14__ {size_t clientNum; int eFlags; } ;
struct TYPE_15__ {int snapFlags; TYPE_2__ ps; } ;


 int FUNC_0 (TYPE_11__*,int *,void*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_9__ VAR_2 ;
 TYPE_6__* VAR_3 ;
 int FUNC_2 (int *,TYPE_5__*,int) ;
 void* VAR_4 ;
 void* VAR_5 ;

__attribute__((used)) static void FUNC_3( snapshot_t *VAR_6 ) {
 int VAR_7;
 entityState_t *VAR_8;
 centity_t *VAR_9;

 VAR_2.nextSnap = VAR_6;

 FUNC_0( &VAR_6->ps, &VAR_3[ VAR_6->ps.clientNum ].nextState, VAR_4 );
 VAR_3[ VAR_2.snap->ps.clientNum ].interpolate = VAR_5;


 for ( VAR_7 = 0 ; VAR_7 < VAR_6->numEntities ; VAR_7++ ) {
  VAR_8 = &VAR_6->entities[VAR_7];
  VAR_9 = &VAR_3[ VAR_8->number ];

  FUNC_2(&VAR_9->nextState, VAR_8, sizeof(entityState_t));




  if ( !VAR_9->currentValid || ( ( VAR_9->currentState.eFlags ^ VAR_8->eFlags ) & VAR_0 ) ) {
   VAR_9->interpolate = VAR_4;
  } else {
   VAR_9->interpolate = VAR_5;
  }
 }



 if ( VAR_2.snap && ( ( VAR_6->ps.eFlags ^ VAR_2.snap->ps.eFlags ) & VAR_0 ) ) {
  VAR_2.nextFrameTeleport = VAR_5;
 } else {
  VAR_2.nextFrameTeleport = VAR_4;
 }


 if ( VAR_2.nextSnap->ps.clientNum != VAR_2.snap->ps.clientNum ) {
  VAR_2.nextFrameTeleport = VAR_5;
 }


 if ( ( VAR_2.nextSnap->snapFlags ^ VAR_2.snap->snapFlags ) & VAR_1 ) {
  VAR_2.nextFrameTeleport = VAR_5;
 }


 FUNC_1();
}
