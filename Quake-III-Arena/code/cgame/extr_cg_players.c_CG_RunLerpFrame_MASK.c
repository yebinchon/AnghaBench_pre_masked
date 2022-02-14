
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {double oldFrame; double frame; double backlerp; int animationNumber; scalar_t__ frameTime; scalar_t__ oldFrameTime; scalar_t__ animationTime; TYPE_2__* animation; } ;
typedef TYPE_1__ lerpFrame_t ;
typedef int clientInfo_t ;
struct TYPE_9__ {int frameLerp; int numFrames; int loopFrames; int firstFrame; scalar_t__ flipflop; scalar_t__ reversed; } ;
typedef TYPE_2__ animation_t ;
struct TYPE_12__ {scalar_t__ time; } ;
struct TYPE_11__ {scalar_t__ integer; } ;
struct TYPE_10__ {scalar_t__ integer; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,TYPE_1__*,int) ;
 TYPE_5__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void FUNC_2( clientInfo_t *VAR_3, lerpFrame_t *VAR_4, int VAR_5, float VAR_6 ) {
 int VAR_7, VAR_8;
 animation_t *VAR_9;


 if ( VAR_1.integer == 0 ) {
  VAR_4->oldFrame = VAR_4->frame = VAR_4->backlerp = 0;
  return;
 }


 if ( VAR_5 != VAR_4->animationNumber || !VAR_4->animation ) {
  FUNC_1( VAR_3, VAR_4, VAR_5 );
 }



 if ( VAR_0.time >= VAR_4->frameTime ) {
  VAR_4->oldFrame = VAR_4->frame;
  VAR_4->oldFrameTime = VAR_4->frameTime;


  VAR_9 = VAR_4->animation;
  if ( !VAR_9->frameLerp ) {
   return;
  }
  if ( VAR_0.time < VAR_4->animationTime ) {
   VAR_4->frameTime = VAR_4->animationTime;
  } else {
   VAR_4->frameTime = VAR_4->oldFrameTime + VAR_9->frameLerp;
  }
  VAR_7 = ( VAR_4->frameTime - VAR_4->animationTime ) / VAR_9->frameLerp;
  VAR_7 *= VAR_6;

  VAR_8 = VAR_9->numFrames;
  if (VAR_9->flipflop) {
   VAR_8 *= 2;
  }
  if ( VAR_7 >= VAR_8 ) {
   VAR_7 -= VAR_8;
   if ( VAR_9->loopFrames ) {
    VAR_7 %= VAR_9->loopFrames;
    VAR_7 += VAR_9->numFrames - VAR_9->loopFrames;
   } else {
    VAR_7 = VAR_8 - 1;


    VAR_4->frameTime = VAR_0.time;
   }
  }
  if ( VAR_9->reversed ) {
   VAR_4->frame = VAR_9->firstFrame + VAR_9->numFrames - 1 - VAR_7;
  }
  else if (VAR_9->flipflop && VAR_7>=VAR_9->numFrames) {
   VAR_4->frame = VAR_9->firstFrame + VAR_9->numFrames - 1 - (VAR_7%VAR_9->numFrames);
  }
  else {
   VAR_4->frame = VAR_9->firstFrame + VAR_7;
  }
  if ( VAR_0.time > VAR_4->frameTime ) {
   VAR_4->frameTime = VAR_0.time;
   if ( VAR_2.integer ) {
    FUNC_0( "Clamp lf->frameTime\n");
   }
  }
 }

 if ( VAR_4->frameTime > VAR_0.time + 200 ) {
  VAR_4->frameTime = VAR_0.time;
 }

 if ( VAR_4->oldFrameTime > VAR_0.time ) {
  VAR_4->oldFrameTime = VAR_0.time;
 }

 if ( VAR_4->frameTime == VAR_4->oldFrameTime ) {
  VAR_4->backlerp = 0;
 } else {
  VAR_4->backlerp = 1.0 - (float)( VAR_0.time - VAR_4->oldFrameTime ) / ( VAR_4->frameTime - VAR_4->oldFrameTime );
 }
}
