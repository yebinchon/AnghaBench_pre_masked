
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {short* angles; } ;
typedef TYPE_1__ usercmd_t ;
struct TYPE_6__ {scalar_t__ pm_type; scalar_t__* stats; short* delta_angles; int * viewangles; } ;
typedef TYPE_2__ playerState_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (short) ;
 size_t VAR_4 ;

void FUNC_1( playerState_t *VAR_5, const usercmd_t *VAR_6 ) {
 short VAR_7;
 int VAR_8;

 if ( VAR_5->pm_type == VAR_1 || VAR_5->pm_type == VAR_3) {
  return;
 }

 if ( VAR_5->pm_type != VAR_2 && VAR_5->stats[VAR_4] <= 0 ) {
  return;
 }


 for (VAR_8=0 ; VAR_8<3 ; VAR_8++) {
  VAR_7 = VAR_6->angles[VAR_8] + VAR_5->delta_angles[VAR_8];
  if ( VAR_8 == VAR_0 ) {

   if ( VAR_7 > 16000 ) {
    VAR_5->delta_angles[VAR_8] = 16000 - VAR_6->angles[VAR_8];
    VAR_7 = 16000;
   } else if ( VAR_7 < -16000 ) {
    VAR_5->delta_angles[VAR_8] = -16000 - VAR_6->angles[VAR_8];
    VAR_7 = -16000;
   }
  }
  VAR_5->viewangles[VAR_8] = FUNC_0(VAR_7);
 }

}
