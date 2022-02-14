
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int legsAnim; scalar_t__ legsAnimationTimer; } ;
typedef TYPE_1__ playerInfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3( playerInfo_t *VAR_9 ) {
 int VAR_10;

 VAR_10 = VAR_9->legsAnim & ~VAR_0;

 if ( VAR_9->legsAnimationTimer > 0 ) {
  if ( VAR_10 == VAR_3 ) {
   VAR_8 = VAR_1 * FUNC_2( VAR_5 * ( VAR_6 - VAR_9->legsAnimationTimer ) / VAR_6 );
  }
  return;
 }

 if ( VAR_10 == VAR_3 ) {
  FUNC_0( VAR_9, VAR_4 );
  VAR_9->legsAnimationTimer = VAR_7;
  VAR_8 = 0;
  return;
 }

 if ( VAR_10 == VAR_4 ) {
  FUNC_1( VAR_9, VAR_2 );
  return;
 }
}
