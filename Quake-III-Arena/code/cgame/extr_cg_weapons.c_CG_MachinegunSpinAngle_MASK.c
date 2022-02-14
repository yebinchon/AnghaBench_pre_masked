
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int eFlags; scalar_t__ weapon; int number; } ;
struct TYPE_6__ {int barrelTime; int barrelSpinning; int barrelAngle; } ;
struct TYPE_8__ {TYPE_2__ currentState; TYPE_1__ pe; } ;
typedef TYPE_3__ centity_t ;
struct TYPE_9__ {int time; } ;


 int FUNC_0 (float) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;

__attribute__((used)) static float FUNC_3( centity_t *VAR_7 ) {
 int VAR_8;
 float VAR_9;
 float VAR_10;

 VAR_8 = VAR_5.time - VAR_7->pe.barrelTime;
 if ( VAR_7->pe.barrelSpinning ) {
  VAR_9 = VAR_7->pe.barrelAngle + VAR_8 * VAR_3;
 } else {
  if ( VAR_8 > VAR_1 ) {
   VAR_8 = VAR_1;
  }

  VAR_10 = 0.5 * ( VAR_3 + (float)( VAR_1 - VAR_8 ) / VAR_1 );
  VAR_9 = VAR_7->pe.barrelAngle + VAR_8 * VAR_10;
 }

 if ( VAR_7->pe.barrelSpinning == !(VAR_7->currentState.eFlags & VAR_2) ) {
  VAR_7->pe.barrelTime = VAR_5.time;
  VAR_7->pe.barrelAngle = FUNC_0( VAR_9 );
  VAR_7->pe.barrelSpinning = !!(VAR_7->currentState.eFlags & VAR_2);





 }

 return VAR_9;
}
