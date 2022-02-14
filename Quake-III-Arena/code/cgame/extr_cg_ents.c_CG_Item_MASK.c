
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;


struct TYPE_22__ {int* weaponMidpoint; int weaponModel; scalar_t__ barrelModel; } ;
typedef TYPE_2__ weaponInfo_t ;
typedef int* vec3_t ;
struct TYPE_23__ {int* origin; int radius; int* shaderRGBA; int** axis; int* oldorigin; int* lightingOrigin; void* nonNormalizedAxes; scalar_t__ hModel; int renderfx; int shadowPlane; int customShader; int reType; } ;
typedef TYPE_3__ refEntity_t ;
struct TYPE_24__ {scalar_t__ giType; size_t giTag; } ;
typedef TYPE_4__ gitem_t ;
struct TYPE_25__ {size_t modelindex; int eFlags; double number; } ;
typedef TYPE_5__ entityState_t ;
typedef int ent ;
struct TYPE_26__ {int* lerpOrigin; int* lerpAngles; int miscTime; TYPE_5__ currentState; } ;
typedef TYPE_6__ centity_t ;
typedef int barrel ;
struct TYPE_21__ {int weaponHoverSound; } ;
struct TYPE_27__ {TYPE_1__ media; } ;
struct TYPE_20__ {int time; int* autoAnglesFast; int** autoAxisFast; int* autoAngles; int** autoAxis; } ;
struct TYPE_19__ {scalar_t__* models; int icon; } ;
struct TYPE_18__ {scalar_t__ integer; } ;


 int FUNC_0 (int*,int**) ;
 int FUNC_1 (int**,int**) ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*,int ,char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*,int*) ;
 int FUNC_6 (int*,float,int*) ;
 TYPE_4__* VAR_11 ;
 size_t VAR_12 ;
 TYPE_13__ VAR_13 ;
 TYPE_12__* VAR_14 ;
 TYPE_11__ VAR_15 ;
 TYPE_2__* VAR_16 ;
 TYPE_9__ VAR_17 ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_3__*,int ,int) ;
 void* VAR_18 ;
 void* VAR_19 ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (double,int*,int ,int ) ;
 int VAR_20 ;

__attribute__((used)) static void FUNC_11( centity_t *VAR_21 ) {
 refEntity_t VAR_22;
 entityState_t *VAR_23;
 gitem_t *VAR_24;
 int VAR_25;
 float VAR_26;
 float VAR_27;
 weaponInfo_t *VAR_28;

 VAR_23 = &VAR_21->currentState;
 if ( VAR_23->modelindex >= VAR_12 ) {
  FUNC_2( "Bad item index %i on entity", VAR_23->modelindex );
 }


 if ( !VAR_23->modelindex || ( VAR_23->eFlags & VAR_0 ) ) {
  return;
 }

 VAR_24 = &VAR_11[ VAR_23->modelindex ];
 if ( VAR_15.integer && VAR_24->giType != VAR_7 ) {
  FUNC_8( &VAR_22, 0, sizeof( VAR_22 ) );
  VAR_22.reType = VAR_10;
  FUNC_5( VAR_21->lerpOrigin, VAR_22.origin );
  VAR_22.radius = 14;
  VAR_22.customShader = VAR_14[VAR_23->modelindex].icon;
  VAR_22.shaderRGBA[0] = 255;
  VAR_22.shaderRGBA[1] = 255;
  VAR_22.shaderRGBA[2] = 255;
  VAR_22.shaderRGBA[3] = 255;
  FUNC_9(&VAR_22);
  return;
 }


 VAR_27 = 0.005 + VAR_21->currentState.number * 0.00001;
 VAR_21->lerpOrigin[2] += 4 + FUNC_7( ( VAR_13.time + 1000 ) * VAR_27 ) * 4;

 FUNC_8 (&VAR_22, 0, sizeof(VAR_22));


 if ( VAR_24->giType == VAR_4 ) {
  FUNC_5( VAR_13.autoAnglesFast, VAR_21->lerpAngles );
  FUNC_1( VAR_13.autoAxisFast, VAR_22.axis );
 } else {
  FUNC_5( VAR_13.autoAngles, VAR_21->lerpAngles );
  FUNC_1( VAR_13.autoAxis, VAR_22.axis );
 }

 VAR_28 = ((void*)0);



 if ( VAR_24->giType == VAR_8 ) {
  VAR_28 = &VAR_16[VAR_24->giTag];
  VAR_21->lerpOrigin[0] -=
   VAR_28->weaponMidpoint[0] * VAR_22.axis[0][0] +
   VAR_28->weaponMidpoint[1] * VAR_22.axis[1][0] +
   VAR_28->weaponMidpoint[2] * VAR_22.axis[2][0];
  VAR_21->lerpOrigin[1] -=
   VAR_28->weaponMidpoint[0] * VAR_22.axis[0][1] +
   VAR_28->weaponMidpoint[1] * VAR_22.axis[1][1] +
   VAR_28->weaponMidpoint[2] * VAR_22.axis[2][1];
  VAR_21->lerpOrigin[2] -=
   VAR_28->weaponMidpoint[0] * VAR_22.axis[0][2] +
   VAR_28->weaponMidpoint[1] * VAR_22.axis[1][2] +
   VAR_28->weaponMidpoint[2] * VAR_22.axis[2][2];

  VAR_21->lerpOrigin[2] += 8;
 }

 VAR_22.hModel = VAR_14[VAR_23->modelindex].models[0];

 FUNC_5( VAR_21->lerpOrigin, VAR_22.origin);
 FUNC_5( VAR_21->lerpOrigin, VAR_22.oldorigin);

 VAR_22.nonNormalizedAxes = VAR_18;


 VAR_25 = VAR_13.time - VAR_21->miscTime;
 if ( VAR_25 >= 0 && VAR_25 < VAR_2 ) {
  VAR_26 = (float)VAR_25 / VAR_2;
  FUNC_6( VAR_22.axis[0], VAR_26, VAR_22.axis[0] );
  FUNC_6( VAR_22.axis[1], VAR_26, VAR_22.axis[1] );
  FUNC_6( VAR_22.axis[2], VAR_26, VAR_22.axis[2] );
  VAR_22.nonNormalizedAxes = VAR_19;
 } else {
  VAR_26 = 1.0;
 }



 if ( ( VAR_24->giType == VAR_8 ) ||
   ( VAR_24->giType == VAR_3 ) ) {
  VAR_22.renderfx |= VAR_9;
 }


 if ( VAR_24->giType == VAR_8 ) {
  FUNC_6( VAR_22.axis[0], 1.5, VAR_22.axis[0] );
  FUNC_6( VAR_22.axis[1], 1.5, VAR_22.axis[1] );
  FUNC_6( VAR_22.axis[2], 1.5, VAR_22.axis[2] );
  VAR_22.nonNormalizedAxes = VAR_19;



 }
 FUNC_9(&VAR_22);
 if ( !VAR_15.integer )
 {
  vec3_t VAR_29;

  FUNC_4( VAR_29 );

  if ( VAR_24->giType == VAR_4 || VAR_24->giType == VAR_6 )
  {
   if ( ( VAR_22.hModel = VAR_14[VAR_23->modelindex].models[1] ) != 0 )
   {
    if ( VAR_24->giType == VAR_6 )
    {
     VAR_22.origin[2] += 12;
     VAR_29[1] = ( VAR_13.time & 1023 ) * 360 / -1024.0f;
    }
    FUNC_0( VAR_29, VAR_22.axis );


    if ( VAR_26 != 1.0 ) {
     FUNC_6( VAR_22.axis[0], VAR_26, VAR_22.axis[0] );
     FUNC_6( VAR_22.axis[1], VAR_26, VAR_22.axis[1] );
     FUNC_6( VAR_22.axis[2], VAR_26, VAR_22.axis[2] );
     VAR_22.nonNormalizedAxes = VAR_19;
    }
    FUNC_9( &VAR_22 );
   }
  }
 }
}
