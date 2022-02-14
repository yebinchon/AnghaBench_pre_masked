
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_5__ {scalar_t__ inMemory; int soundName; int soundLength; } ;
typedef TYPE_1__ sfx_t ;
typedef size_t sfxHandle_t ;
struct TYPE_6__ {scalar_t__ doppler; scalar_t__ kill; int active; TYPE_1__* sfx; int velocity; int origin; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int const,int ) ;
 TYPE_3__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

void FUNC_4( int VAR_9, const vec3_t VAR_10, const vec3_t VAR_11, sfxHandle_t VAR_12 ) {
 sfx_t *VAR_13;

 if ( !VAR_8 || VAR_7 ) {
  return;
 }

 if ( VAR_12 < 0 || VAR_12 >= VAR_6 ) {
  FUNC_1( VAR_1, "S_AddRealLoopingSound: handle %i out of range\n", VAR_12 );
  return;
 }

 VAR_13 = &VAR_5[ VAR_12 ];

 if (VAR_13->inMemory == VAR_3) {
  FUNC_2(VAR_13);
 }

 if ( !VAR_13->soundLength ) {
  FUNC_0( VAR_0, "%s has length 0", VAR_13->soundName );
 }
 FUNC_3( VAR_10, VAR_2[VAR_9].origin );
 FUNC_3( VAR_11, VAR_2[VAR_9].velocity );
 VAR_2[VAR_9].sfx = VAR_13;
 VAR_2[VAR_9].active = VAR_4;
 VAR_2[VAR_9].kill = VAR_3;
 VAR_2[VAR_9].doppler = VAR_3;
}
