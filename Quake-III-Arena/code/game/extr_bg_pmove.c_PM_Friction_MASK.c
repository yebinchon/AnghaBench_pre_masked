
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_8__ {int waterlevel; TYPE_2__* ps; } ;
struct TYPE_5__ {int surfaceFlags; } ;
struct TYPE_7__ {float frametime; TYPE_1__ groundTrace; scalar_t__ walking; } ;
struct TYPE_6__ {float* velocity; int pm_flags; scalar_t__ pm_type; scalar_t__* powerups; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (float*,scalar_t__*) ;
 float FUNC_1 (scalar_t__*) ;
 TYPE_4__* VAR_4 ;
 float VAR_5 ;
 float VAR_6 ;
 float VAR_7 ;
 float VAR_8 ;
 float VAR_9 ;
 TYPE_3__ VAR_10 ;

__attribute__((used)) static void FUNC_2( void ) {
 vec3_t VAR_11;
 float *VAR_12;
 float VAR_13, VAR_14, VAR_15;
 float VAR_16;

 VAR_12 = VAR_4->ps->velocity;

 FUNC_0( VAR_12, VAR_11 );
 if ( VAR_10.walking ) {
  VAR_11[2] = 0;
 }

 VAR_13 = FUNC_1(VAR_11);
 if (VAR_13 < 1) {
  VAR_12[0] = 0;
  VAR_12[1] = 0;

  return;
 }

 VAR_16 = 0;


 if ( VAR_4->waterlevel <= 1 ) {
  if ( VAR_10.walking && !(VAR_10.groundTrace.surfaceFlags & VAR_3) ) {

   if ( ! (VAR_4->ps->pm_flags & VAR_0) ) {
    VAR_15 = VAR_13 < VAR_8 ? VAR_8 : VAR_13;
    VAR_16 += VAR_15*VAR_6*VAR_10.frametime;
   }
  }
 }


 if ( VAR_4->waterlevel ) {
  VAR_16 += VAR_13*VAR_9*VAR_4->waterlevel*VAR_10.frametime;
 }


 if ( VAR_4->ps->powerups[VAR_2]) {
  VAR_16 += VAR_13*VAR_5*VAR_10.frametime;
 }

 if ( VAR_4->ps->pm_type == VAR_1) {
  VAR_16 += VAR_13*VAR_7*VAR_10.frametime;
 }


 VAR_14 = VAR_13 - VAR_16;
 if (VAR_14 < 0) {
  VAR_14 = 0;
 }
 VAR_14 /= VAR_13;

 VAR_12[0] = VAR_12[0] * VAR_14;
 VAR_12[1] = VAR_12[1] * VAR_14;
 VAR_12[2] = VAR_12[2] * VAR_14;
}
