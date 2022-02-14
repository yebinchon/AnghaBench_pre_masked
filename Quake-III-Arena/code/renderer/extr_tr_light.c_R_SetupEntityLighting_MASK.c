
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_14__ {int rdflags; int num_dlights; TYPE_5__* dlights; } ;
typedef TYPE_3__ trRefdef_t ;
struct TYPE_13__ {int renderfx; int * axis; int origin; int lightingOrigin; } ;
struct TYPE_15__ {int* ambientLight; int* directedLight; int* lightDir; TYPE_2__ e; int ambientLightInt; scalar_t__ lightingCalculated; } ;
typedef TYPE_4__ trRefEntity_t ;
struct TYPE_16__ {float radius; int* color; int origin; } ;
typedef TYPE_5__ dlight_t ;
typedef int byte ;
struct TYPE_18__ {scalar_t__ integer; } ;
struct TYPE_17__ {int identityLight; scalar_t__ identityLightByte; int sunDirection; TYPE_1__* world; } ;
struct TYPE_12__ {scalar_t__ lightGridData; } ;


 float VAR_0 ;
 float VAR_1 ;
 void* FUNC_0 (int*,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,int*) ;
 float FUNC_4 (int*) ;
 int FUNC_5 (int*,float,int*,int*) ;
 float FUNC_6 (int*) ;
 int FUNC_7 (int*,float,int*) ;
 int FUNC_8 (int ,int*,int*) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 TYPE_7__* VAR_5 ;
 TYPE_6__ VAR_6 ;

void FUNC_10( const trRefdef_t *VAR_7, trRefEntity_t *VAR_8 ) {
 int VAR_9;
 dlight_t *VAR_10;
 float VAR_11;
 vec3_t VAR_12;
 float VAR_13;
 vec3_t VAR_14;
 vec3_t VAR_15;


 if ( VAR_8->lightingCalculated ) {
  return;
 }
 VAR_8->lightingCalculated = VAR_4;




 if ( VAR_8->e.renderfx & VAR_3 ) {



  FUNC_3( VAR_8->e.lightingOrigin, VAR_15 );
 } else {
  FUNC_3( VAR_8->e.origin, VAR_15 );
 }


 if ( !(VAR_7->rdflags & VAR_2 )
  && VAR_6.world->lightGridData ) {
  FUNC_2( VAR_8 );
 } else {
  VAR_8->ambientLight[0] = VAR_8->ambientLight[1] =
   VAR_8->ambientLight[2] = VAR_6.identityLight * 150;
  VAR_8->directedLight[0] = VAR_8->directedLight[1] =
   VAR_8->directedLight[2] = VAR_6.identityLight * 150;
  FUNC_3( VAR_6.sunDirection, VAR_8->lightDir );
 }


 if ( 1 ) {

  VAR_8->ambientLight[0] += VAR_6.identityLight * 32;
  VAR_8->ambientLight[1] += VAR_6.identityLight * 32;
  VAR_8->ambientLight[2] += VAR_6.identityLight * 32;
 }




 VAR_13 = FUNC_4( VAR_8->directedLight );
 FUNC_7( VAR_8->lightDir, VAR_13, VAR_14 );

 for ( VAR_9 = 0 ; VAR_9 < VAR_7->num_dlights ; VAR_9++ ) {
  VAR_10 = &VAR_7->dlights[VAR_9];
  FUNC_8( VAR_10->origin, VAR_15, VAR_12 );
  VAR_13 = FUNC_6( VAR_12 );

  VAR_11 = VAR_0 * ( VAR_10->radius * VAR_10->radius );
  if ( VAR_13 < VAR_1 ) {
   VAR_13 = VAR_1;
  }
  VAR_13 = VAR_11 / ( VAR_13 * VAR_13 );

  FUNC_5( VAR_8->directedLight, VAR_13, VAR_10->color, VAR_8->directedLight );
  FUNC_5( VAR_14, VAR_13, VAR_12, VAR_14 );
 }


 for ( VAR_9 = 0 ; VAR_9 < 3 ; VAR_9++ ) {
  if ( VAR_8->ambientLight[VAR_9] > VAR_6.identityLightByte ) {
   VAR_8->ambientLight[VAR_9] = VAR_6.identityLightByte;
  }
 }

 if ( VAR_5->integer ) {
  FUNC_1( VAR_8 );
 }


 ((byte *)&VAR_8->ambientLightInt)[0] = FUNC_9( VAR_8->ambientLight[0] );
 ((byte *)&VAR_8->ambientLightInt)[1] = FUNC_9( VAR_8->ambientLight[1] );
 ((byte *)&VAR_8->ambientLightInt)[2] = FUNC_9( VAR_8->ambientLight[2] );
 ((byte *)&VAR_8->ambientLightInt)[3] = 0xff;


 FUNC_6( VAR_14 );
 VAR_8->lightDir[0] = FUNC_0( VAR_14, VAR_8->e.axis[0] );
 VAR_8->lightDir[1] = FUNC_0( VAR_14, VAR_8->e.axis[1] );
 VAR_8->lightDir[2] = FUNC_0( VAR_14, VAR_8->e.axis[2] );
}
