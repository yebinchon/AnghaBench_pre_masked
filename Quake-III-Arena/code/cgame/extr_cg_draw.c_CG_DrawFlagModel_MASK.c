
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


typedef double* vec3_t ;
typedef int qhandle_t ;
typedef int qboolean ;
typedef int gitem_t ;
struct TYPE_12__ {double time; } ;
struct TYPE_11__ {scalar_t__ integer; } ;
struct TYPE_10__ {scalar_t__ integer; } ;
struct TYPE_9__ {int icon; } ;
struct TYPE_7__ {int neutralFlagModel; int blueFlagModel; int redFlagModel; } ;
struct TYPE_8__ {TYPE_1__ media; } ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (float,float,float,float,int ,int ,double*,double*) ;
 int FUNC_2 (float,float,float,float,int ) ;
 size_t FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (double*) ;
 size_t VAR_6 ;
 TYPE_6__ VAR_7 ;
 TYPE_5__ VAR_8 ;
 TYPE_4__ VAR_9 ;
 TYPE_3__* VAR_10 ;
 TYPE_2__ VAR_11 ;
 int FUNC_5 (double) ;
 int FUNC_6 (int ,double*,double*) ;

void FUNC_7( float VAR_12, float VAR_13, float VAR_14, float VAR_15, int VAR_16, qboolean VAR_17 ) {
 qhandle_t VAR_18;
 float VAR_19;
 vec3_t VAR_20, VAR_21;
 vec3_t VAR_22, VAR_23;
 qhandle_t VAR_24;

 if ( !VAR_17 && VAR_8.integer ) {

  FUNC_4( VAR_21 );

  VAR_18 = VAR_11.media.redFlagModel;


  FUNC_6( VAR_18, VAR_22, VAR_23 );

  VAR_20[2] = -0.5 * ( VAR_22[2] + VAR_23[2] );
  VAR_20[1] = 0.5 * ( VAR_22[1] + VAR_23[1] );



  VAR_19 = 0.5 * ( VAR_23[2] - VAR_22[2] );
  VAR_20[0] = VAR_19 / 0.268;

  VAR_21[VAR_6] = 60 * FUNC_5( VAR_7.time / 2000.0 );;

  if( VAR_16 == VAR_5 ) {
   VAR_24 = VAR_11.media.redFlagModel;
  } else if( VAR_16 == VAR_3 ) {
   VAR_24 = VAR_11.media.blueFlagModel;
  } else if( VAR_16 == VAR_4 ) {
   VAR_24 = VAR_11.media.neutralFlagModel;
  } else {
   return;
  }
  FUNC_1( VAR_12, VAR_13, VAR_14, VAR_15, VAR_24, 0, VAR_20, VAR_21 );
 } else if ( VAR_9.integer ) {
  gitem_t *VAR_25;

  if( VAR_16 == VAR_5 ) {
   VAR_25 = FUNC_0( VAR_2 );
  } else if( VAR_16 == VAR_3 ) {
   VAR_25 = FUNC_0( VAR_0 );
  } else if( VAR_16 == VAR_4 ) {
   VAR_25 = FUNC_0( VAR_1 );
  } else {
   return;
  }
  if (VAR_25) {
    FUNC_2( VAR_12, VAR_13, VAR_14, VAR_15, VAR_10[ FUNC_3(VAR_25) ].icon );
  }
 }
}
