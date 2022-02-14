
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_19__ ;
typedef struct TYPE_30__ TYPE_18__ ;
typedef struct TYPE_29__ TYPE_17__ ;
typedef struct TYPE_28__ TYPE_16__ ;
typedef struct TYPE_27__ TYPE_15__ ;
typedef struct TYPE_26__ TYPE_14__ ;
typedef struct TYPE_25__ TYPE_13__ ;
typedef struct TYPE_24__ TYPE_11__ ;


struct TYPE_37__ {int handsModel; } ;
typedef TYPE_6__ weaponInfo_t ;
typedef int vec3_t ;
struct TYPE_38__ {int renderfx; int hModel; scalar_t__ backlerp; void* oldframe; void* frame; int axis; int origin; } ;
typedef TYPE_7__ refEntity_t ;
struct TYPE_39__ {scalar_t__* persistant; scalar_t__ pm_type; size_t clientNum; size_t weapon; } ;
typedef TYPE_8__ playerState_t ;
typedef int hand ;
typedef int clientInfo_t ;
struct TYPE_35__ {scalar_t__ backlerp; int oldFrame; int frame; } ;
struct TYPE_36__ {TYPE_4__ torso; } ;
struct TYPE_34__ {size_t clientNum; } ;
struct TYPE_40__ {TYPE_5__ pe; TYPE_3__ currentState; } ;
typedef TYPE_9__ centity_t ;
struct TYPE_33__ {int * viewaxis; int vieworg; } ;
struct TYPE_32__ {int eFlags; } ;
struct TYPE_31__ {TYPE_9__ predictedPlayerEntity; TYPE_2__ refdef; scalar_t__ testGun; TYPE_1__ predictedPlayerState; scalar_t__ renderingThirdPerson; } ;
struct TYPE_30__ {int integer; } ;
struct TYPE_29__ {int integer; } ;
struct TYPE_28__ {void* integer; } ;
struct TYPE_27__ {float value; } ;
struct TYPE_26__ {float value; } ;
struct TYPE_25__ {float value; } ;
struct TYPE_24__ {int * clientinfo; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_7__*,TYPE_8__*,TYPE_9__*,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ) ;
 void* FUNC_4 (int *,int ) ;
 int FUNC_5 (size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,float,int ,int ) ;
 TYPE_19__ VAR_7 ;
 TYPE_18__ VAR_8 ;
 int * VAR_9 ;
 TYPE_17__ VAR_10 ;
 TYPE_16__ VAR_11 ;
 TYPE_15__ VAR_12 ;
 TYPE_14__ VAR_13 ;
 TYPE_13__ VAR_14 ;
 TYPE_6__* VAR_15 ;
 TYPE_11__ VAR_16 ;
 int FUNC_8 (TYPE_7__*,int ,int) ;

void FUNC_9( playerState_t *VAR_17 ) {
 refEntity_t VAR_18;
 centity_t *VAR_19;
 clientInfo_t *VAR_20;
 float VAR_21;
 vec3_t VAR_22;
 weaponInfo_t *VAR_23;

 if ( VAR_17->persistant[VAR_1] == VAR_6 ) {
  return;
 }

 if ( VAR_17->pm_type == VAR_2 ) {
  return;
 }



 if ( VAR_7.renderingThirdPerson ) {
  return;
 }



 if ( !VAR_8.integer ) {
  vec3_t VAR_24;

  if ( VAR_7.predictedPlayerState.eFlags & VAR_0 ) {

   FUNC_6( VAR_7.refdef.vieworg, VAR_24 );
   FUNC_7( VAR_24, -8, VAR_7.refdef.viewaxis[2], VAR_24 );
   FUNC_3( &VAR_9[VAR_17->clientNum], VAR_24 );
  }
  return;
 }


 if ( VAR_7.testGun ) {
  return;
 }


 if ( VAR_10.integer > 90 ) {
  VAR_21 = -0.2 * ( VAR_10.integer - 90 );
 } else {
  VAR_21 = 0;
 }

 VAR_19 = &VAR_7.predictedPlayerEntity;
 FUNC_5( VAR_17->weapon );
 VAR_23 = &VAR_15[ VAR_17->weapon ];

 FUNC_8 (&VAR_18, 0, sizeof(VAR_18));


 FUNC_2( VAR_18.origin, VAR_22 );

 FUNC_7( VAR_18.origin, VAR_12.value, VAR_7.refdef.viewaxis[0], VAR_18.origin );
 FUNC_7( VAR_18.origin, VAR_13.value, VAR_7.refdef.viewaxis[1], VAR_18.origin );
 FUNC_7( VAR_18.origin, (VAR_14.value+VAR_21), VAR_7.refdef.viewaxis[2], VAR_18.origin );

 FUNC_0( VAR_22, VAR_18.axis );


 if ( VAR_11.integer ) {

  VAR_18.frame = VAR_18.oldframe = VAR_11.integer;
  VAR_18.backlerp = 0;
 } else {

  VAR_20 = &VAR_16.clientinfo[ VAR_19->currentState.clientNum ];
  VAR_18.frame = FUNC_4( VAR_20, VAR_19->pe.torso.frame );
  VAR_18.oldframe = FUNC_4( VAR_20, VAR_19->pe.torso.oldFrame );
  VAR_18.backlerp = VAR_19->pe.torso.backlerp;
 }

 VAR_18.hModel = VAR_23->handsModel;
 VAR_18.renderfx = VAR_3 | VAR_4 | VAR_5;


 FUNC_1( &VAR_18, VAR_17, &VAR_7.predictedPlayerEntity, VAR_17->persistant[VAR_1] );
}
