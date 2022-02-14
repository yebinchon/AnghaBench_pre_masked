
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int animationNumber; scalar_t__ frameTime; scalar_t__ animationTime; TYPE_3__* animation; } ;
typedef TYPE_1__ lerpFrame_t ;
struct TYPE_8__ {TYPE_3__* animations; } ;
typedef TYPE_2__ clientInfo_t ;
struct TYPE_9__ {scalar_t__ initialLerp; } ;
typedef TYPE_3__ animation_t ;
struct TYPE_10__ {scalar_t__ integer; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;

__attribute__((used)) static void FUNC_2( clientInfo_t *VAR_3, lerpFrame_t *VAR_4, int VAR_5 ) {
 animation_t *VAR_6;

 VAR_4->animationNumber = VAR_5;
 VAR_5 &= ~VAR_0;

 if ( VAR_5 < 0 || VAR_5 >= VAR_1 ) {
  FUNC_0( "Bad animation number: %i", VAR_5 );
 }

 VAR_6 = &VAR_3->animations[ VAR_5 ];

 VAR_4->animation = VAR_6;
 VAR_4->animationTime = VAR_4->frameTime + VAR_6->initialLerp;

 if ( VAR_2.integer ) {
  FUNC_1( "Anim: %i\n", VAR_5 );
 }
}
