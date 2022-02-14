
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vec3_t ;
struct TYPE_8__ {scalar_t__ inMemory; int lastTimeUsed; int soundName; } ;
typedef TYPE_1__ sfx_t ;
typedef size_t sfxHandle_t ;
struct TYPE_9__ {int entnum; int allocTime; int entchannel; int master_vol; int leftvol; int rightvol; scalar_t__ doppler; int startSample; TYPE_1__* thesfx; scalar_t__ fixed_origin; int origin; } ;
typedef TYPE_2__ channel_t ;
struct TYPE_10__ {int integer; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (scalar_t__,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_2__* VAR_9 ;
 TYPE_1__* VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 TYPE_3__* VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;

void FUNC_6(vec3_t VAR_16, int VAR_17, int VAR_18, sfxHandle_t VAR_19 ) {
 channel_t *VAR_20;
 sfx_t *VAR_21;
  int VAR_22, VAR_23, VAR_24, VAR_25;
  int VAR_26, VAR_27;

 if ( !VAR_15 || VAR_14 ) {
  return;
 }

 if ( !VAR_16 && ( VAR_17 < 0 || VAR_17 > VAR_3 ) ) {
  FUNC_0( VAR_1, "S_StartSound: bad entitynum %i", VAR_17 );
 }

 if ( VAR_19 < 0 || VAR_19 >= VAR_11 ) {
  FUNC_2( VAR_5, "S_StartSound: handle %i out of range\n", VAR_19 );
  return;
 }

 VAR_21 = &VAR_10[ VAR_19 ];

 if (VAR_21->inMemory == VAR_7) {
  FUNC_4(VAR_21);
 }

 if ( VAR_13->integer == 1 ) {
  FUNC_2( "%i : %s\n", VAR_12, VAR_21->soundName );
 }

 VAR_25 = FUNC_1();




 VAR_27 = 4;
 if (VAR_17 == VAR_6) {
  VAR_27 = 8;
 }

 VAR_20 = VAR_9;
 VAR_26 = 0;
 for ( VAR_22 = 0; VAR_22 < VAR_2 ; VAR_22++, VAR_20++ ) {
  if (VAR_20[VAR_22].entnum == VAR_17 && VAR_20[VAR_22].thesfx == VAR_21) {
   if (VAR_25 - VAR_20[VAR_22].allocTime < 50) {



    return;
   }
   VAR_26++;
  }
 }

 if (VAR_26>VAR_27) {
  return;
 }

 VAR_21->lastTimeUsed = VAR_25;

 VAR_20 = FUNC_3();
 if (!VAR_20) {
  VAR_20 = VAR_9;

  VAR_23 = VAR_21->lastTimeUsed;
  VAR_24 = -1;
  for ( VAR_22 = 0 ; VAR_22 < VAR_2 ; VAR_22++, VAR_20++ ) {
   if (VAR_20->entnum != VAR_6 && VAR_20->entnum == VAR_17 && VAR_20->allocTime<VAR_23 && VAR_20->entchannel != VAR_0) {
    VAR_23 = VAR_20->allocTime;
    VAR_24 = VAR_22;
   }
  }
  if (VAR_24 == -1) {
   VAR_20 = VAR_9;
   for ( VAR_22 = 0 ; VAR_22 < VAR_2 ; VAR_22++, VAR_20++ ) {
    if (VAR_20->entnum != VAR_6 && VAR_20->allocTime<VAR_23 && VAR_20->entchannel != VAR_0) {
     VAR_23 = VAR_20->allocTime;
     VAR_24 = VAR_22;
    }
   }
   if (VAR_24 == -1) {
    if (VAR_20->entnum == VAR_6) {
     for ( VAR_22 = 0 ; VAR_22 < VAR_2 ; VAR_22++, VAR_20++ ) {
      if (VAR_20->allocTime<VAR_23) {
       VAR_23 = VAR_20->allocTime;
       VAR_24 = VAR_22;
      }
     }
    }
    if (VAR_24 == -1) {
     FUNC_2("dropping sound\n");
     return;
    }
   }
  }
  VAR_20 = &VAR_9[VAR_24];
  VAR_20->allocTime = VAR_21->lastTimeUsed;
 }

 if (VAR_16) {
  FUNC_5 (VAR_16, VAR_20->origin);
  VAR_20->fixed_origin = VAR_8;
 } else {
  VAR_20->fixed_origin = VAR_7;
 }

 VAR_20->master_vol = 127;
 VAR_20->entnum = VAR_17;
 VAR_20->thesfx = VAR_21;
 VAR_20->startSample = VAR_4;
 VAR_20->entchannel = VAR_18;
 VAR_20->leftvol = VAR_20->master_vol;
 VAR_20->rightvol = VAR_20->master_vol;
 VAR_20->doppler = VAR_7;
}
