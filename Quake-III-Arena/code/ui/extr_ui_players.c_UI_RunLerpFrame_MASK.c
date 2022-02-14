
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int playerInfo_t ;
struct TYPE_5__ {int animationNumber; scalar_t__ frameTime; scalar_t__ oldFrameTime; scalar_t__ animationTime; double backlerp; scalar_t__ frame; TYPE_2__* animation; scalar_t__ oldFrame; } ;
typedef TYPE_1__ lerpFrame_t ;
struct TYPE_6__ {int frameLerp; int numFrames; int loopFrames; scalar_t__ firstFrame; } ;
typedef TYPE_2__ animation_t ;


 int FUNC_0 (int *,TYPE_1__*,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1( playerInfo_t *VAR_1, lerpFrame_t *VAR_2, int VAR_3 ) {
 int VAR_4;
 animation_t *VAR_5;


 if ( VAR_3 != VAR_2->animationNumber || !VAR_2->animation ) {
  FUNC_0( VAR_1, VAR_2, VAR_3 );
 }



 if ( VAR_0 >= VAR_2->frameTime ) {
  VAR_2->oldFrame = VAR_2->frame;
  VAR_2->oldFrameTime = VAR_2->frameTime;


  VAR_5 = VAR_2->animation;
  if ( VAR_0 < VAR_2->animationTime ) {
   VAR_2->frameTime = VAR_2->animationTime;
  } else {
   VAR_2->frameTime = VAR_2->oldFrameTime + VAR_5->frameLerp;
  }
  VAR_4 = ( VAR_2->frameTime - VAR_2->animationTime ) / VAR_5->frameLerp;
  if ( VAR_4 >= VAR_5->numFrames ) {
   VAR_4 -= VAR_5->numFrames;
   if ( VAR_5->loopFrames ) {
    VAR_4 %= VAR_5->loopFrames;
    VAR_4 += VAR_5->numFrames - VAR_5->loopFrames;
   } else {
    VAR_4 = VAR_5->numFrames - 1;


    VAR_2->frameTime = VAR_0;
   }
  }
  VAR_2->frame = VAR_5->firstFrame + VAR_4;
  if ( VAR_0 > VAR_2->frameTime ) {
   VAR_2->frameTime = VAR_0;
  }
 }

 if ( VAR_2->frameTime > VAR_0 + 200 ) {
  VAR_2->frameTime = VAR_0;
 }

 if ( VAR_2->oldFrameTime > VAR_0 ) {
  VAR_2->oldFrameTime = VAR_0;
 }

 if ( VAR_2->frameTime == VAR_2->oldFrameTime ) {
  VAR_2->backlerp = 0;
 } else {
  VAR_2->backlerp = 1.0 - (float)( VAR_0 - VAR_2->oldFrameTime ) / ( VAR_2->frameTime - VAR_2->oldFrameTime );
 }
}
