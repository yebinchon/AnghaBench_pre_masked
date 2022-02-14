
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef float* vec4_t ;
struct TYPE_7__ {scalar_t__* stats; int* powerups; } ;
typedef TYPE_2__ playerState_t ;
struct TYPE_8__ {int icon; } ;
typedef TYPE_3__ gitem_t ;
struct TYPE_9__ {int time; int powerupActive; float powerupTime; TYPE_1__* snap; } ;
struct TYPE_6__ {TYPE_2__ ps; } ;


 TYPE_3__* FUNC_0 (int) ;
 int FUNC_1 (int,float,int,int) ;
 int FUNC_2 (int,float,float,float,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 double VAR_5 ;
 float VAR_6 ;
 size_t VAR_7 ;
 TYPE_4__ VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (float*) ;

__attribute__((used)) static float FUNC_5( float VAR_9 ) {
 int VAR_10[VAR_2];
 int VAR_11[VAR_2];
 int VAR_12, VAR_13, VAR_14;
 int VAR_15;
 playerState_t *VAR_16;
 int VAR_17;
 gitem_t *VAR_18;
 int VAR_19;
 int VAR_20;
 float VAR_21;
 float VAR_22;
 static float VAR_23[2][4] = {
    { 0.2f, 1.0f, 0.2f, 1.0f } ,
    { 1.0f, 0.2f, 0.2f, 1.0f }
  };

 VAR_16 = &VAR_8.snap->ps;

 if ( VAR_16->stats[VAR_7] <= 0 ) {
  return VAR_9;
 }


 VAR_15 = 0;
 for ( VAR_12 = 0 ; VAR_12 < VAR_2 ; VAR_12++ ) {
  if ( !VAR_16->powerups[ VAR_12 ] ) {
   continue;
  }
  VAR_17 = VAR_16->powerups[ VAR_12 ] - VAR_8.time;


  if ( VAR_17 < 0 || VAR_17 > 999000) {
   continue;
  }


  for ( VAR_13 = 0 ; VAR_13 < VAR_15 ; VAR_13++ ) {
   if ( VAR_11[VAR_13] >= VAR_17 ) {
    for ( VAR_14 = VAR_15 - 1 ; VAR_14 >= VAR_13 ; VAR_14-- ) {
     VAR_10[VAR_14+1] = VAR_10[VAR_14];
     VAR_11[VAR_14+1] = VAR_11[VAR_14];
    }
    break;
   }
  }
  VAR_10[VAR_13] = VAR_12;
  VAR_11[VAR_13] = VAR_17;
  VAR_15++;
 }


 VAR_19 = 640 - VAR_1 - VAR_0 * 2;
 for ( VAR_12 = 0 ; VAR_12 < VAR_15 ; VAR_12++ ) {
  VAR_18 = FUNC_0( VAR_10[VAR_12] );

    if (VAR_18) {

    VAR_20 = 1;

    VAR_9 -= VAR_1;

    FUNC_4( VAR_23[VAR_20] );
    FUNC_1( VAR_19, VAR_9, 2, VAR_11[ VAR_12 ] / 1000 );

    VAR_17 = VAR_16->powerups[ VAR_10[VAR_12] ];
    if ( VAR_17 - VAR_8.time >= VAR_3 * VAR_4 ) {
     FUNC_4( ((void*)0) );
    } else {
     vec4_t VAR_24;

     VAR_22 = (float)( VAR_17 - VAR_8.time ) / VAR_4;
     VAR_22 -= (int)VAR_22;
     VAR_24[0] = VAR_24[1] = VAR_24[2] = VAR_24[3] = VAR_22;
     FUNC_4( VAR_24 );
    }

    if ( VAR_8.powerupActive == VAR_10[VAR_12] &&
     VAR_8.time - VAR_8.powerupTime < VAR_6 ) {
     VAR_22 = 1.0 - ( ( (float)VAR_8.time - VAR_8.powerupTime ) / VAR_6 );
     VAR_21 = VAR_1 * ( 1.0 + ( VAR_5 - 1.0 ) * VAR_22 );
    } else {
     VAR_21 = VAR_1;
    }

    FUNC_2( 640 - VAR_21, VAR_9 + VAR_1 / 2 - VAR_21 / 2,
     VAR_21, VAR_21, FUNC_3( VAR_18->icon ) );
    }
 }
 FUNC_4( ((void*)0) );

 return VAR_9;
}
