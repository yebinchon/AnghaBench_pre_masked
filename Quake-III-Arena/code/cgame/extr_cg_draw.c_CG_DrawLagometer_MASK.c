
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int integer; } ;
struct TYPE_11__ {scalar_t__ integer; } ;
struct TYPE_10__ {scalar_t__ integer; } ;
struct TYPE_7__ {int whiteShader; int lagometerShader; } ;
struct TYPE_9__ {TYPE_1__ media; scalar_t__ localServer; } ;
struct TYPE_8__ {int frameCount; float* frameSamples; int snapshotCount; float* snapshotSamples; int* snapshotFlags; } ;


 int FUNC_0 (float*,float*,float*,float*) ;
 int FUNC_1 (float,float,char*,double) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int,int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_4 (int ) ;
 int VAR_4 ;
 float VAR_5 ;
 float VAR_6 ;
 int VAR_7 ;
 TYPE_6__ VAR_8 ;
 TYPE_5__ VAR_9 ;
 TYPE_4__ VAR_10 ;
 TYPE_3__ VAR_11 ;
 int ** VAR_12 ;
 TYPE_2__ VAR_13 ;
 int FUNC_5 (float,float,int,float,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7( void ) {
 int VAR_14, VAR_15, VAR_16, VAR_17;
 float VAR_18;
 float VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 int VAR_25;
 float VAR_26;

 if ( !VAR_8.integer || VAR_11.localServer ) {
  FUNC_2();
  return;
 }
 VAR_15 = 640 - 48;
 VAR_16 = 480 - 48;


 FUNC_6( ((void*)0) );
 FUNC_3( VAR_15, VAR_16, 48, 48, VAR_11.media.lagometerShader );

 VAR_19 = VAR_15;
 VAR_20 = VAR_16;
 VAR_21 = 48;
 VAR_22 = 48;
 FUNC_0( &VAR_19, &VAR_20, &VAR_21, &VAR_22 );

 VAR_25 = -1;
 VAR_24 = VAR_22 / 3;
 VAR_23 = VAR_20 + VAR_24;

 VAR_26 = VAR_24 / VAR_6;


 for ( VAR_14 = 0 ; VAR_14 < VAR_21 ; VAR_14++ ) {
  VAR_17 = ( VAR_13.frameCount - 1 - VAR_14 ) & (VAR_4 - 1);
  VAR_18 = VAR_13.frameSamples[VAR_17];
  VAR_18 *= VAR_26;
  if ( VAR_18 > 0 ) {
   if ( VAR_25 != 1 ) {
    VAR_25 = 1;
    FUNC_6( VAR_12[FUNC_4(VAR_3)] );
   }
   if ( VAR_18 > VAR_24 ) {
    VAR_18 = VAR_24;
   }
   FUNC_5 ( VAR_19 + VAR_21 - VAR_14, VAR_23 - VAR_18, 1, VAR_18, 0, 0, 0, 0, VAR_11.media.whiteShader );
  } else if ( VAR_18 < 0 ) {
   if ( VAR_25 != 2 ) {
    VAR_25 = 2;
    FUNC_6( VAR_12[FUNC_4(VAR_0)] );
   }
   VAR_18 = -VAR_18;
   if ( VAR_18 > VAR_24 ) {
    VAR_18 = VAR_24;
   }
   FUNC_5( VAR_19 + VAR_21 - VAR_14, VAR_23, 1, VAR_18, 0, 0, 0, 0, VAR_11.media.whiteShader );
  }
 }


 VAR_24 = VAR_22 / 2;
 VAR_26 = VAR_24 / VAR_5;

 for ( VAR_14 = 0 ; VAR_14 < VAR_21 ; VAR_14++ ) {
  VAR_17 = ( VAR_13.snapshotCount - 1 - VAR_14 ) & (VAR_4 - 1);
  VAR_18 = VAR_13.snapshotSamples[VAR_17];
  if ( VAR_18 > 0 ) {
   if ( VAR_13.snapshotFlags[VAR_17] & VAR_7 ) {
    if ( VAR_25 != 5 ) {
     VAR_25 = 5;
     FUNC_6( VAR_12[FUNC_4(VAR_3)] );
    }
   } else {
    if ( VAR_25 != 3 ) {
     VAR_25 = 3;
     FUNC_6( VAR_12[FUNC_4(VAR_1)] );
    }
   }
   VAR_18 = VAR_18 * VAR_26;
   if ( VAR_18 > VAR_24 ) {
    VAR_18 = VAR_24;
   }
   FUNC_5( VAR_19 + VAR_21 - VAR_14, VAR_20 + VAR_22 - VAR_18, 1, VAR_18, 0, 0, 0, 0, VAR_11.media.whiteShader );
  } else if ( VAR_18 < 0 ) {
   if ( VAR_25 != 4 ) {
    VAR_25 = 4;
    FUNC_6( VAR_12[FUNC_4(VAR_2)] );
   }
   FUNC_5( VAR_19 + VAR_21 - VAR_14, VAR_20 + VAR_22 - VAR_24, 1, VAR_24, 0, 0, 0, 0, VAR_11.media.whiteShader );
  }
 }

 FUNC_6( ((void*)0) );

 if ( VAR_9.integer || VAR_10.integer ) {
  FUNC_1( VAR_19, VAR_20, "snc", 1.0 );
 }

 FUNC_2();
}
