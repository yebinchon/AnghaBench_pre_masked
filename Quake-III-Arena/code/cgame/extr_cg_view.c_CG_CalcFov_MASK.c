
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


struct TYPE_8__ {float width; float fov_x; float fov_y; int vieworg; int height; } ;
struct TYPE_7__ {scalar_t__ pm_type; } ;
struct TYPE_12__ {double time; float zoomTime; int zoomSensitivity; TYPE_2__ refdef; scalar_t__ zoomed; TYPE_1__ predictedPlayerState; } ;
struct TYPE_11__ {float value; } ;
struct TYPE_10__ {float value; } ;
struct TYPE_9__ {int dmflags; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 float VAR_4 ;
 scalar_t__ VAR_5 ;
 float VAR_6 ;
 double VAR_7 ;
 scalar_t__ VAR_8 ;
 float FUNC_1 (int ,float) ;
 TYPE_6__ VAR_9 ;
 TYPE_5__ VAR_10 ;
 TYPE_4__ VAR_11 ;
 TYPE_3__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 float FUNC_2 (float) ;
 float FUNC_3 (float) ;

__attribute__((used)) static int FUNC_4( void ) {
 float VAR_15;
 float VAR_16;
 float VAR_17;
 int VAR_18;
 float VAR_19, VAR_20;
 float VAR_21;
 float VAR_22;
 int VAR_23;

 if ( VAR_9.predictedPlayerState.pm_type == VAR_5 ) {

  VAR_19 = 90;
 } else {

  if ( VAR_12.dmflags & VAR_3 ) {

   VAR_19 = 90;
  } else {
   VAR_19 = VAR_10.value;
   if ( VAR_19 < 1 ) {
    VAR_19 = 1;
   } else if ( VAR_19 > 160 ) {
    VAR_19 = 160;
   }
  }


  VAR_21 = VAR_11.value;
  if ( VAR_21 < 1 ) {
   VAR_21 = 1;
  } else if ( VAR_21 > 160 ) {
   VAR_21 = 160;
  }

  if ( VAR_9.zoomed ) {
   VAR_22 = ( VAR_9.time - VAR_9.zoomTime ) / (float)VAR_8;
   if ( VAR_22 > 1.0 ) {
    VAR_19 = VAR_21;
   } else {
    VAR_19 = VAR_19 + VAR_22 * ( VAR_21 - VAR_19 );
   }
  } else {
   VAR_22 = ( VAR_9.time - VAR_9.zoomTime ) / (float)VAR_8;
   if ( VAR_22 > 1.0 ) {
    VAR_19 = VAR_19;
   } else {
    VAR_19 = VAR_21 + VAR_22 * ( VAR_19 - VAR_21 );
   }
  }
 }

 VAR_15 = VAR_9.refdef.width / FUNC_3( VAR_19 / 360 * VAR_4 );
 VAR_20 = FUNC_1( VAR_9.refdef.height, VAR_15 );
 VAR_20 = VAR_20 * 360 / VAR_4;


 VAR_18 = FUNC_0( VAR_9.refdef.vieworg, -1 );
 if ( VAR_18 & ( VAR_2 | VAR_1 | VAR_0 ) ){
  VAR_16 = VAR_9.time / 1000.0 * VAR_7 * VAR_4 * 2;
  VAR_17 = VAR_6 * FUNC_2( VAR_16 );
  VAR_19 += VAR_17;
  VAR_20 -= VAR_17;
  VAR_23 = VAR_14;
 }
 else {
  VAR_23 = VAR_13;
 }



 VAR_9.refdef.fov_x = VAR_19;
 VAR_9.refdef.fov_y = VAR_20;

 if ( !VAR_9.zoomed ) {
  VAR_9.zoomSensitivity = 1;
 } else {
  VAR_9.zoomSensitivity = VAR_9.refdef.fov_y / 75.0;
 }

 return VAR_23;
}
