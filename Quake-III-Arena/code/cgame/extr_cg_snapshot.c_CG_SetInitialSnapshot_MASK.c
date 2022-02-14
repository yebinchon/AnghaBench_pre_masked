
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_11__ {size_t clientNum; } ;
struct TYPE_12__ {int numEntities; TYPE_2__* entities; int serverCommandSequence; TYPE_10__ ps; } ;
typedef TYPE_1__ snapshot_t ;
struct TYPE_13__ {size_t number; } ;
typedef TYPE_2__ entityState_t ;
struct TYPE_14__ {int currentValid; int interpolate; int currentState; } ;
typedef TYPE_3__ centity_t ;
struct TYPE_15__ {TYPE_1__* snap; } ;


 int FUNC_0 (TYPE_10__*,int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 () ;
 TYPE_6__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_6 (int *,TYPE_2__*,int) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_7( snapshot_t *VAR_4 ) {
 int VAR_5;
 centity_t *VAR_6;
 entityState_t *VAR_7;

 VAR_0.snap = VAR_4;

 FUNC_0( &VAR_4->ps, &VAR_1[ VAR_4->ps.clientNum ].currentState, VAR_2 );


 FUNC_1();

 FUNC_3( VAR_4->serverCommandSequence );



 FUNC_5();

 for ( VAR_5 = 0 ; VAR_5 < VAR_0.snap->numEntities ; VAR_5++ ) {
  VAR_7 = &VAR_0.snap->entities[ VAR_5 ];
  VAR_6 = &VAR_1[ VAR_7->number ];

  FUNC_6(&VAR_6->currentState, VAR_7, sizeof(entityState_t));

  VAR_6->interpolate = VAR_2;
  VAR_6->currentValid = VAR_3;

  FUNC_4( VAR_6 );


  FUNC_2( VAR_6 );
 }
}
