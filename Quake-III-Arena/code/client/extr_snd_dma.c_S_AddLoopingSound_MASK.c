
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_7__ {scalar_t__ inMemory; int soundName; int soundLength; } ;
typedef TYPE_1__ sfx_t ;
typedef size_t sfxHandle_t ;
struct TYPE_10__ {scalar_t__ framecount; } ;
struct TYPE_9__ {double oldDopplerScale; double dopplerScale; scalar_t__ framenum; void* doppler; int origin; int velocity; TYPE_1__* sfx; void* kill; void* active; } ;
struct TYPE_8__ {scalar_t__ integer; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,size_t) ;
 float FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int const,int ) ;
 double FUNC_6 (int const) ;
 TYPE_5__ VAR_2 ;
 size_t VAR_3 ;
 TYPE_4__* VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 TYPE_3__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;

void FUNC_7( int VAR_12, const vec3_t VAR_13, const vec3_t VAR_14, sfxHandle_t VAR_15 ) {
 sfx_t *VAR_16;

 if ( !VAR_11 || VAR_10 ) {
  return;
 }

 if ( VAR_15 < 0 || VAR_15 >= VAR_9 ) {
  FUNC_1( VAR_1, "S_AddLoopingSound: handle %i out of range\n", VAR_15 );
  return;
 }

 VAR_16 = &VAR_8[ VAR_15 ];

 if (VAR_16->inMemory == VAR_5) {
  FUNC_3(VAR_16);
 }

 if ( !VAR_16->soundLength ) {
  FUNC_0( VAR_0, "%s has length 0", VAR_16->soundName );
 }

 FUNC_5( VAR_13, VAR_4[VAR_12].origin );
 FUNC_5( VAR_14, VAR_4[VAR_12].velocity );
 VAR_4[VAR_12].active = VAR_6;
 VAR_4[VAR_12].kill = VAR_6;
 VAR_4[VAR_12].doppler = VAR_5;
 VAR_4[VAR_12].oldDopplerScale = 1.0;
 VAR_4[VAR_12].dopplerScale = 1.0;
 VAR_4[VAR_12].sfx = VAR_16;

 if (VAR_7->integer && FUNC_6(VAR_14)>0.0) {
  vec3_t VAR_17;
  float VAR_18, VAR_19;

  VAR_4[VAR_12].doppler = VAR_6;
  VAR_18 = FUNC_2(VAR_4[VAR_3].origin, VAR_4[VAR_12].origin);
  FUNC_4(VAR_4[VAR_12].origin, VAR_4[VAR_12].velocity, VAR_17);
  VAR_19 = FUNC_2(VAR_4[VAR_3].origin, VAR_17);
  if ((VAR_4[VAR_12].framenum+1) != VAR_2.framecount) {
   VAR_4[VAR_12].oldDopplerScale = 1.0;
  } else {
   VAR_4[VAR_12].oldDopplerScale = VAR_4[VAR_12].dopplerScale;
  }
  VAR_4[VAR_12].dopplerScale = VAR_19/(VAR_18*100);
  if (VAR_4[VAR_12].dopplerScale<=1.0) {
   VAR_4[VAR_12].doppler = VAR_5;
  }
 }

 VAR_4[VAR_12].framenum = VAR_2.framecount;
}
