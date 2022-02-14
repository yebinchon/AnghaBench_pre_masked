
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int torsoAnim; scalar_t__ weapon; scalar_t__ currentWeapon; scalar_t__ torsoAnimationTimer; } ;
typedef TYPE_1__ playerInfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 void* VAR_7 ;

__attribute__((used)) static void FUNC_3( playerInfo_t *VAR_8 ) {
 int VAR_9;

 VAR_9 = VAR_8->torsoAnim & ~VAR_0;

 if ( VAR_8->weapon != VAR_8->currentWeapon ) {
  if ( VAR_9 != VAR_3 ) {
   VAR_8->torsoAnimationTimer = VAR_7;
   FUNC_0( VAR_8, VAR_3 );
  }
 }

 if ( VAR_8->torsoAnimationTimer > 0 ) {
  return;
 }

 if( VAR_9 == VAR_4 ) {
  FUNC_2( VAR_8, VAR_6 );
  return;
 }

 if( VAR_9 == VAR_1 || VAR_9 == VAR_2 ) {
  FUNC_2( VAR_8, VAR_6 );
  return;
 }

 if ( VAR_9 == VAR_3 ) {
  FUNC_1( VAR_8, VAR_8->weapon );
  VAR_8->torsoAnimationTimer = VAR_7;
  FUNC_0( VAR_8, VAR_5 );
  return;
 }

 if ( VAR_9 == VAR_5 ) {
  FUNC_2( VAR_8, VAR_6 );
  return;
 }
}
