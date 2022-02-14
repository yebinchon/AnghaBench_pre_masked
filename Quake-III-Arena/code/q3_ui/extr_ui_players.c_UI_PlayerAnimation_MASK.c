
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int oldFrame; int frame; float backlerp; scalar_t__ yawing; } ;
struct TYPE_8__ {scalar_t__ legsAnimationTimer; int legsAnim; scalar_t__ torsoAnimationTimer; int torsoAnim; TYPE_5__ torso; TYPE_5__ legs; } ;
typedef TYPE_1__ playerInfo_t ;
struct TYPE_9__ {scalar_t__ frametime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_5__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void FUNC_3( playerInfo_t *VAR_4, int *VAR_5, int *VAR_6, float *VAR_7,
      int *VAR_8, int *VAR_9, float *VAR_10 ) {


 VAR_4->legsAnimationTimer -= VAR_3.frametime;
 if ( VAR_4->legsAnimationTimer < 0 ) {
  VAR_4->legsAnimationTimer = 0;
 }

 FUNC_0( VAR_4 );

 if ( VAR_4->legs.yawing && ( VAR_4->legsAnim & ~VAR_0 ) == VAR_1 ) {
  FUNC_1( VAR_4, &VAR_4->legs, VAR_2 );
 } else {
  FUNC_1( VAR_4, &VAR_4->legs, VAR_4->legsAnim );
 }
 *VAR_5 = VAR_4->legs.oldFrame;
 *VAR_6 = VAR_4->legs.frame;
 *VAR_7 = VAR_4->legs.backlerp;


 VAR_4->torsoAnimationTimer -= VAR_3.frametime;
 if ( VAR_4->torsoAnimationTimer < 0 ) {
  VAR_4->torsoAnimationTimer = 0;
 }

 FUNC_2( VAR_4 );

 FUNC_1( VAR_4, &VAR_4->torso, VAR_4->torsoAnim );
 *VAR_8 = VAR_4->torso.oldFrame;
 *VAR_9 = VAR_4->torso.frame;
 *VAR_10 = VAR_4->torso.backlerp;
}
