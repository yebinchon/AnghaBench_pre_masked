
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ pm_type; int bobCycle; int* velocity; int viewangles; int origin; } ;
typedef TYPE_1__ playerState_t ;
struct TYPE_9__ {int rdflags; int viewaxis; int vieworg; } ;
struct TYPE_14__ {int bobcycle; scalar_t__ time; scalar_t__ nextOrbitTime; int predictedErrorTime; TYPE_2__ refdef; scalar_t__ hyperspace; int refdefViewAngles; scalar_t__ renderingThirdPerson; int predictedError; int xyspeed; int bobfracsin; TYPE_1__ predictedPlayerState; } ;
struct TYPE_13__ {scalar_t__ value; scalar_t__ integer; } ;
struct TYPE_12__ {scalar_t__ integer; } ;
struct TYPE_11__ {int value; } ;
struct TYPE_10__ {int value; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,float,int ,int ) ;
 TYPE_7__ VAR_4 ;
 TYPE_6__ VAR_5 ;
 TYPE_5__ VAR_6 ;
 TYPE_4__ VAR_7 ;
 TYPE_3__ VAR_8 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11( void ) {
 playerState_t *VAR_9;

 FUNC_8( &VAR_4.refdef, 0, sizeof( VAR_4.refdef ) );






 FUNC_2();

 VAR_9 = &VAR_4.predictedPlayerState;
 if ( VAR_9->pm_type == VAR_1 ) {
  FUNC_5( VAR_9->origin, VAR_4.refdef.vieworg );
  FUNC_5( VAR_9->viewangles, VAR_4.refdefViewAngles );
  FUNC_0( VAR_4.refdefViewAngles, VAR_4.refdef.viewaxis );
  return FUNC_1();
 }

 VAR_4.bobcycle = ( VAR_9->bobCycle & 128 ) >> 7;
 VAR_4.bobfracsin = FUNC_7( FUNC_9( ( VAR_9->bobCycle & 127 ) / 127.0 * VAR_0 ) );
 VAR_4.xyspeed = FUNC_10( VAR_9->velocity[0] * VAR_9->velocity[0] +
  VAR_9->velocity[1] * VAR_9->velocity[1] );


 FUNC_5( VAR_9->origin, VAR_4.refdef.vieworg );
 FUNC_5( VAR_9->viewangles, VAR_4.refdefViewAngles );

 if (VAR_5.integer) {
  if (VAR_4.time > VAR_4.nextOrbitTime) {
   VAR_4.nextOrbitTime = VAR_4.time + VAR_6.integer;
   VAR_8.value += VAR_5.value;
  }
 }

 if ( VAR_7.value > 0 ) {
  int VAR_10;
  float VAR_11;

  VAR_10 = VAR_4.time - VAR_4.predictedErrorTime;
  VAR_11 = ( VAR_7.value - VAR_10 ) / VAR_7.value;
  if ( VAR_11 > 0 && VAR_11 < 1 ) {
   FUNC_6( VAR_4.refdef.vieworg, VAR_11, VAR_4.predictedError, VAR_4.refdef.vieworg );
  } else {
   VAR_4.predictedErrorTime = 0;
  }
 }

 if ( VAR_4.renderingThirdPerson ) {

  FUNC_4();
 } else {

  FUNC_3();
 }


 FUNC_0( VAR_4.refdefViewAngles, VAR_4.refdef.viewaxis );

 if ( VAR_4.hyperspace ) {
  VAR_4.refdef.rdflags |= VAR_3 | VAR_2;
 }


 return FUNC_1();
}
