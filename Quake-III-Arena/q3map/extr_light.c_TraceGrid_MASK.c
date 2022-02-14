
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
typedef int traceWork_t ;
struct TYPE_5__ {int origin; struct TYPE_5__* next; } ;
typedef TYPE_1__ light_t ;
struct TYPE_6__ {scalar_t__* color; scalar_t__* dir; } ;
typedef TYPE_2__ contribution_t ;


 int FUNC_0 (scalar_t__*,scalar_t__*) ;
 float FUNC_1 (scalar_t__*,scalar_t__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__*,scalar_t__*,int *) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__*,int *,scalar_t__*) ;
 int FUNC_6 (scalar_t__*) ;
 int FUNC_7 (scalar_t__*,scalar_t__*) ;
 float FUNC_8 (scalar_t__*) ;
 int FUNC_9 (scalar_t__*,double,scalar_t__*,scalar_t__*) ;
 int FUNC_10 (scalar_t__*,scalar_t__*) ;
 int FUNC_11 (int ,scalar_t__*,scalar_t__*) ;
 scalar_t__* VAR_1 ;
 int* VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;
 int* VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__* VAR_7 ;

void FUNC_12( int VAR_8 ) {
 int VAR_9, VAR_10, VAR_11;
 vec3_t VAR_12;
 light_t *VAR_13;
 vec3_t VAR_14;
 int VAR_15;
 vec3_t VAR_16;
 vec3_t VAR_17;
 contribution_t VAR_18[VAR_0];
 int VAR_19;
 int VAR_20;
 traceWork_t VAR_21;
 float VAR_22;

 VAR_15 = VAR_8;
 VAR_11 = VAR_15 / ( VAR_2[0] * VAR_2[1] );
 VAR_15 -= VAR_11 * ( VAR_2[0] * VAR_2[1] );

 VAR_10 = VAR_15 / VAR_2[0];
 VAR_15 -= VAR_10 * VAR_2[0];

 VAR_9 = VAR_15;

 VAR_12[0] = VAR_4[0] + VAR_9 * VAR_5[0];
 VAR_12[1] = VAR_4[1] + VAR_10 * VAR_5[1];
 VAR_12[2] = VAR_4[2] + VAR_11 * VAR_5[2];

 if ( FUNC_4( VAR_12 ) ) {
  vec3_t VAR_23;
  int VAR_24;

  FUNC_7( VAR_12, VAR_23 );


  for ( VAR_24 = 9 ; VAR_24 <= 18 ; VAR_24 += 9 ) {
   for ( VAR_20 = 0 ; VAR_20 < 8 ; VAR_20++ ) {
    FUNC_7( VAR_23, VAR_12 );
    if ( VAR_20 & 1 ) {
     VAR_12[0] += VAR_24;
    } else {
     VAR_12[0] -= VAR_24;
    }
    if ( VAR_20 & 2 ) {
     VAR_12[1] += VAR_24;
    } else {
     VAR_12[1] -= VAR_24;
    }
    if ( VAR_20 & 4 ) {
     VAR_12[2] += VAR_24;
    } else {
     VAR_12[2] -= VAR_24;
    }

    if ( !FUNC_4( VAR_12 ) ) {
     break;
    }
   }
   if ( VAR_20 != 8 ) {
    break;
   }
  }
  if ( VAR_24 > 18 ) {

   for ( VAR_20 = 0 ; VAR_20 < 8 ; VAR_20++ ) {
    VAR_3[ VAR_8*8 + VAR_20 ] = 0;
   }
   return;
  }
 }

 FUNC_6( VAR_17 );






 VAR_19 = 0;
 for ( VAR_13 = VAR_6 ; VAR_13 ; VAR_13 = VAR_13->next ) {
  vec3_t VAR_25;
  vec3_t VAR_26;
  float VAR_27;

  if ( !FUNC_2( VAR_13, VAR_12, VAR_25, &VAR_21 ) ) {
   continue;
  }

  FUNC_11( VAR_13->origin, VAR_12, VAR_26 );
  FUNC_10( VAR_26, VAR_26 );

  FUNC_7( VAR_25, VAR_18[VAR_19].color );
  FUNC_7( VAR_26, VAR_18[VAR_19].dir );
  VAR_19++;

  VAR_27 = FUNC_8( VAR_25 );
  FUNC_9( VAR_17, VAR_27, VAR_26, VAR_17 );

  if ( VAR_19 == VAR_0-1 ) {
   break;
  }
 }




 FUNC_5( VAR_12, &VAR_21, VAR_14 );
 VAR_22 = FUNC_8( VAR_14 );
 if ( VAR_22 > 0 ) {
  FUNC_7( VAR_14, VAR_18[VAR_19].color );
  FUNC_7( VAR_7, VAR_18[VAR_19].dir );
  FUNC_9( VAR_17, VAR_22, VAR_7, VAR_17 );
  VAR_19++;
 }




 FUNC_10( VAR_17, VAR_17 );
 FUNC_7( VAR_1, VAR_14 );
 FUNC_6( VAR_16 );

 for ( VAR_20 = 0 ; VAR_20 < VAR_19 ; VAR_20++ ) {
  float VAR_28;

  VAR_28 = FUNC_1( VAR_18[VAR_20].dir, VAR_17 );
  if ( VAR_28 < 0 ) {
   VAR_28 = 0;
  }

  FUNC_9( VAR_16, VAR_28, VAR_18[VAR_20].color, VAR_16 );


  VAR_28 = 0.25 * ( 1.0 - VAR_28 );
  FUNC_9( VAR_14, VAR_28, VAR_18[VAR_20].color, VAR_14 );
 }


 FUNC_9( VAR_14, 0.25, VAR_16, VAR_14 );




 FUNC_0( VAR_14, VAR_3 + VAR_8*8 );
 FUNC_0( VAR_16, VAR_3 + VAR_8*8 + 3 );

 FUNC_10( VAR_17, VAR_17 );
 FUNC_3( VAR_17, VAR_3 + VAR_8*8 + 6);
}
