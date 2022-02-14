
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_5__ {scalar_t__* stats; int* persistant; } ;
struct TYPE_8__ {int attackerTime; int time; TYPE_3__* snap; TYPE_1__ predictedPlayerState; } ;
struct TYPE_6__ {int clientNum; } ;
struct TYPE_7__ {TYPE_2__ ps; } ;


 int VAR_0 ;
 float VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,float,char const*,double) ;
 int FUNC_2 (int,float,float,float,int,int*) ;
 scalar_t__ VAR_3 ;
 double VAR_4 ;
 char* FUNC_3 (char const*,char*) ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_4 (char const*) ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 TYPE_4__ VAR_11 ;

__attribute__((used)) static float FUNC_5( float VAR_12 ) {
 int VAR_13;
 float VAR_14;
 vec3_t VAR_15;
 const char *VAR_16;
 const char *VAR_17;
 int VAR_18;

 if ( VAR_11.predictedPlayerState.stats[VAR_9] <= 0 ) {
  return VAR_12;
 }

 if ( !VAR_11.attackerTime ) {
  return VAR_12;
 }

 VAR_18 = VAR_11.predictedPlayerState.persistant[VAR_6];
 if ( VAR_18 < 0 || VAR_18 >= VAR_5 || VAR_18 == VAR_11.snap->ps.clientNum ) {
  return VAR_12;
 }

 VAR_13 = VAR_11.time - VAR_11.attackerTime;
 if ( VAR_13 > VAR_0 ) {
  VAR_11.attackerTime = 0;
  return VAR_12;
 }

 VAR_14 = VAR_4 * 1.25;

 VAR_15[VAR_7] = 0;
 VAR_15[VAR_10] = 180;
 VAR_15[VAR_8] = 0;
 FUNC_2( 640 - VAR_14, VAR_12, VAR_14, VAR_14, VAR_18, VAR_15 );

 VAR_16 = FUNC_0( VAR_3 + VAR_18 );
 VAR_17 = FUNC_3( VAR_16, "n" );
 VAR_12 += VAR_14;
 FUNC_1( 640 - ( FUNC_4( VAR_17 ) * VAR_2), VAR_12, VAR_17, 0.5 );

 return VAR_12 + VAR_1 + 2;
}
