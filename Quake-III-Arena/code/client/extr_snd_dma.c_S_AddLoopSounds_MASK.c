
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int mergeFrame; int oldDopplerScale; int dopplerScale; scalar_t__ doppler; TYPE_1__* sfx; int origin; scalar_t__ kill; int active; } ;
typedef TYPE_2__ loopSound_t ;
struct TYPE_8__ {int master_vol; int leftvol; int rightvol; int oldDopplerScale; int dopplerScale; scalar_t__ doppler; TYPE_1__* thesfx; } ;
typedef TYPE_3__ channel_t ;
struct TYPE_6__ {int lastTimeUsed; } ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int*,int*) ;
 TYPE_2__* VAR_2 ;
 TYPE_3__* VAR_3 ;
 size_t VAR_4 ;

void FUNC_2 (void) {
 int VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 channel_t *VAR_12;
 loopSound_t *VAR_13, *VAR_14;
 static int VAR_15;


 VAR_4 = 0;

 VAR_7 = FUNC_0();

 VAR_15++;
 for ( VAR_5 = 0 ; VAR_5 < VAR_1 ; VAR_5++) {
  VAR_13 = &VAR_2[VAR_5];
  if ( !VAR_13->active || VAR_13->mergeFrame == VAR_15 ) {
   continue;
  }

  if (VAR_13->kill) {
   FUNC_1( VAR_13->origin, 127, &VAR_8, &VAR_9);
  } else {
   FUNC_1( VAR_13->origin, 90, &VAR_8, &VAR_9);
  }

  VAR_13->sfx->lastTimeUsed = VAR_7;

  for (VAR_6=(VAR_5+1); VAR_6< VAR_1 ; VAR_6++) {
   VAR_14 = &VAR_2[VAR_6];
   if ( !VAR_14->active || VAR_14->doppler || VAR_14->sfx != VAR_13->sfx) {
    continue;
   }
   VAR_14->mergeFrame = VAR_15;

   if (VAR_14->kill) {
    FUNC_1( VAR_14->origin, 127, &VAR_10, &VAR_11);
   } else {
    FUNC_1( VAR_14->origin, 90, &VAR_10, &VAR_11);
   }

   VAR_14->sfx->lastTimeUsed = VAR_7;
   VAR_8 += VAR_10;
   VAR_9 += VAR_11;
  }
  if (VAR_8 == 0 && VAR_9 == 0) {
   continue;
  }


  VAR_12 = &VAR_3[VAR_4];

  if (VAR_8 > 255) {
   VAR_8 = 255;
  }
  if (VAR_9 > 255) {
   VAR_9 = 255;
  }

  VAR_12->master_vol = 127;
  VAR_12->leftvol = VAR_8;
  VAR_12->rightvol = VAR_9;
  VAR_12->thesfx = VAR_13->sfx;
  VAR_12->doppler = VAR_13->doppler;
  VAR_12->dopplerScale = VAR_13->dopplerScale;
  VAR_12->oldDopplerScale = VAR_13->oldDopplerScale;
  VAR_4++;
  if (VAR_4 == VAR_0) {
   return;
  }
 }
}
