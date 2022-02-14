
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_13__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef size_t weapon_t ;
struct TYPE_29__ {scalar_t__* flashDlightColor; scalar_t__ weaponModel; scalar_t__ flashModel; scalar_t__ barrelModel; scalar_t__ readySound; scalar_t__ firingSound; } ;
typedef TYPE_4__ weaponInfo_t ;
typedef int* vec3_t ;
struct TYPE_30__ {int* shaderRGBA; int origin; int axis; scalar_t__ hModel; int renderfx; int shadowPlane; int lightingOrigin; } ;
typedef TYPE_5__ refEntity_t ;
typedef int playerState_t ;
typedef int gun ;
typedef int flash ;
struct TYPE_31__ {int* color1; } ;
typedef TYPE_6__ clientInfo_t ;
struct TYPE_28__ {size_t weapon; int eFlags; scalar_t__ number; size_t clientNum; int powerups; } ;
struct TYPE_27__ {int railgunFlash; int lightningFiring; } ;
struct TYPE_32__ {scalar_t__ muzzleFlashTime; TYPE_3__ currentState; TYPE_2__ pe; int lerpOrigin; } ;
typedef TYPE_7__ centity_t ;
typedef int barrel ;
struct TYPE_26__ {size_t weapon; scalar_t__ weaponstate; scalar_t__ clientNum; scalar_t__ weaponTime; } ;
struct TYPE_25__ {scalar_t__ time; TYPE_1__ predictedPlayerState; scalar_t__ renderingThirdPerson; } ;
struct TYPE_24__ {TYPE_6__* clientinfo; } ;


 int FUNC_0 (int*,int ) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_7__*,int ) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_5__*,scalar_t__,char*) ;
 int FUNC_5 (TYPE_5__*,TYPE_5__*,scalar_t__,char*) ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (TYPE_7__*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 TYPE_13__ VAR_10 ;
 TYPE_7__* VAR_11 ;
 TYPE_4__* VAR_12 ;
 TYPE_10__ VAR_13 ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_5__*,int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (scalar_t__,int ,int ,scalar_t__) ;
 int VAR_16 ;

void FUNC_15( refEntity_t *VAR_17, playerState_t *VAR_18, centity_t *VAR_19, int VAR_20 ) {
 refEntity_t VAR_21;
 refEntity_t VAR_22;
 refEntity_t VAR_23;
 vec3_t VAR_24;
 weapon_t VAR_25;
 weaponInfo_t *VAR_26;
 centity_t *VAR_27;


 VAR_25 = VAR_19->currentState.weapon;

 FUNC_6( VAR_25 );
 VAR_26 = &VAR_12[VAR_25];


 FUNC_10( &VAR_21, 0, sizeof( VAR_21 ) );
 FUNC_8( VAR_17->lightingOrigin, VAR_21.lightingOrigin );
 VAR_21.shadowPlane = VAR_17->shadowPlane;
 VAR_21.renderfx = VAR_17->renderfx;


 if ( VAR_18 ) {
  if ( VAR_10.predictedPlayerState.weapon == VAR_8
   && VAR_10.predictedPlayerState.weaponstate == VAR_4 ) {
   float VAR_28;

   VAR_28 = (float)VAR_10.predictedPlayerState.weaponTime / 1500;
   VAR_21.shaderRGBA[1] = 0;
   VAR_21.shaderRGBA[0] =
   VAR_21.shaderRGBA[2] = 255 * ( 1.0 - VAR_28 );
  } else {
   VAR_21.shaderRGBA[0] = 255;
   VAR_21.shaderRGBA[1] = 255;
   VAR_21.shaderRGBA[2] = 255;
   VAR_21.shaderRGBA[3] = 255;
  }
 }

 VAR_21.hModel = VAR_26->weaponModel;
 if (!VAR_21.hModel) {
  return;
 }

 if ( !VAR_18 ) {

  VAR_19->pe.lightningFiring = VAR_14;
  if ( ( VAR_19->currentState.eFlags & VAR_0 ) && VAR_26->firingSound ) {

   FUNC_14( VAR_19->currentState.number, VAR_19->lerpOrigin, VAR_16, VAR_26->firingSound );
   VAR_19->pe.lightningFiring = VAR_15;
  } else if ( VAR_26->readySound ) {
   FUNC_14( VAR_19->currentState.number, VAR_19->lerpOrigin, VAR_16, VAR_26->readySound );
  }
 }

 FUNC_4( &VAR_21, VAR_17, VAR_17->hModel, "tag_weapon");

 FUNC_1( &VAR_21, VAR_19->currentState.powerups );


 if ( VAR_26->barrelModel ) {
  FUNC_10( &VAR_22, 0, sizeof( VAR_22 ) );
  FUNC_8( VAR_17->lightingOrigin, VAR_22.lightingOrigin );
  VAR_22.shadowPlane = VAR_17->shadowPlane;
  VAR_22.renderfx = VAR_17->renderfx;

  VAR_22.hModel = VAR_26->barrelModel;
  VAR_24[VAR_9] = 0;
  VAR_24[VAR_2] = 0;
  VAR_24[VAR_3] = FUNC_3( VAR_19 );
  FUNC_0( VAR_24, VAR_22.axis );

  FUNC_5( &VAR_22, &VAR_21, VAR_26->weaponModel, "tag_barrel" );

  FUNC_1( &VAR_22, VAR_19->currentState.powerups );
 }


 VAR_27 = &VAR_11[VAR_19->currentState.clientNum];




 if( ( VAR_27 - VAR_11 ) != VAR_19->currentState.clientNum ) {
  VAR_27 = VAR_19;
 }


 if ( ( VAR_25 == VAR_7 || VAR_25 == VAR_5 || VAR_25 == VAR_6 )
  && ( VAR_27->currentState.eFlags & VAR_0 ) )
 {

 } else {

  if ( VAR_10.time - VAR_19->muzzleFlashTime > VAR_1 && !VAR_19->pe.railgunFlash ) {
   return;
  }
 }

 FUNC_10( &VAR_23, 0, sizeof( VAR_23 ) );
 FUNC_8( VAR_17->lightingOrigin, VAR_23.lightingOrigin );
 VAR_23.shadowPlane = VAR_17->shadowPlane;
 VAR_23.renderfx = VAR_17->renderfx;

 VAR_23.hModel = VAR_26->flashModel;
 if (!VAR_23.hModel) {
  return;
 }
 VAR_24[VAR_9] = 0;
 VAR_24[VAR_2] = 0;
 VAR_24[VAR_3] = FUNC_9() * 10;
 FUNC_0( VAR_24, VAR_23.axis );


 if ( VAR_25 == VAR_8 ) {
  clientInfo_t *VAR_29;

  VAR_29 = &VAR_13.clientinfo[ VAR_19->currentState.clientNum ];
  VAR_23.shaderRGBA[0] = 255 * VAR_29->color1[0];
  VAR_23.shaderRGBA[1] = 255 * VAR_29->color1[1];
  VAR_23.shaderRGBA[2] = 255 * VAR_29->color1[2];
 }

 FUNC_5( &VAR_23, &VAR_21, VAR_26->weaponModel, "tag_flash");
 FUNC_13( &VAR_23 );

 if ( VAR_18 || VAR_10.renderingThirdPerson ||
  VAR_19->currentState.number != VAR_10.predictedPlayerState.clientNum ) {

  FUNC_2( VAR_27, VAR_23.origin );


  FUNC_7( VAR_19, VAR_23.origin );

  if ( VAR_26->flashDlightColor[0] || VAR_26->flashDlightColor[1] || VAR_26->flashDlightColor[2] ) {
   FUNC_12( VAR_23.origin, 300 + (FUNC_11()&31), VAR_26->flashDlightColor[0],
    VAR_26->flashDlightColor[1], VAR_26->flashDlightColor[2] );
  }
 }
}
