
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int torsoAnim; int torsoAnimationTimer; } ;
typedef TYPE_1__ playerInfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0( playerInfo_t *VAR_6, int VAR_7 ) {
 VAR_6->torsoAnim = ( ( VAR_6->torsoAnim & VAR_0 ) ^ VAR_0 ) | VAR_7;

 if ( VAR_7 == VAR_3 ) {
  VAR_6->torsoAnimationTimer = VAR_5;
 }

 if ( VAR_7 == VAR_1 || VAR_7 == VAR_2 ) {
  VAR_6->torsoAnimationTimer = VAR_4;
 }
}
