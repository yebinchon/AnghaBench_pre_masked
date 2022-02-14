
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* animations; } ;
typedef TYPE_1__ playerInfo_t ;
struct TYPE_7__ {int animationNumber; scalar_t__ frameTime; scalar_t__ animationTime; TYPE_3__* animation; } ;
typedef TYPE_2__ lerpFrame_t ;
struct TYPE_8__ {scalar_t__ initialLerp; } ;
typedef TYPE_3__ animation_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2( playerInfo_t *VAR_2, lerpFrame_t *VAR_3, int VAR_4 ) {
 animation_t *VAR_5;

 VAR_3->animationNumber = VAR_4;
 VAR_4 &= ~VAR_0;

 if ( VAR_4 < 0 || VAR_4 >= VAR_1 ) {
  FUNC_0( FUNC_1("Bad animation number: %i", VAR_4) );
 }

 VAR_5 = &VAR_2->animations[ VAR_4 ];

 VAR_3->animation = VAR_5;
 VAR_3->animationTime = VAR_3->frameTime + VAR_5->initialLerp;
}
