
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


struct TYPE_12__ {int colorBits; scalar_t__ deviceSupportsGamma; int isFullscreen; } ;
struct TYPE_11__ {float value; } ;
struct TYPE_10__ {int value; } ;
struct TYPE_9__ {int integer; } ;
struct TYPE_8__ {int (* Cvar_Set ) (char*,char*) ;} ;
struct TYPE_7__ {int overbrightBits; float identityLight; int identityLightByte; } ;


 int FUNC_0 (int*,int*,int*) ;
 TYPE_6__ VAR_0 ;
 int FUNC_1 (int,float) ;
 TYPE_5__* VAR_1 ;
 TYPE_4__* VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_2__ VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 TYPE_1__ VAR_7 ;

void FUNC_5( void ) {
 int VAR_8, VAR_9;
 float VAR_10;
 int VAR_11;
 int VAR_12;


 VAR_7.overbrightBits = VAR_3->integer;
 if ( !VAR_0.deviceSupportsGamma ) {
  VAR_7.overbrightBits = 0;
 }


 if ( !VAR_0.isFullscreen )
 {
  VAR_7.overbrightBits = 0;
 }


 if ( VAR_0.colorBits > 16 ) {
  if ( VAR_7.overbrightBits > 2 ) {
   VAR_7.overbrightBits = 2;
  }
 } else {
  if ( VAR_7.overbrightBits > 1 ) {
   VAR_7.overbrightBits = 1;
  }
 }
 if ( VAR_7.overbrightBits < 0 ) {
  VAR_7.overbrightBits = 0;
 }

 VAR_7.identityLight = 1.0f / ( 1 << VAR_7.overbrightBits );
 VAR_7.identityLightByte = 255 * VAR_7.identityLight;


 if ( VAR_2->value <= 1 ) {
  VAR_4.Cvar_Set( "r_intensity", "1" );
 }

 if ( VAR_1->value < 0.5f ) {
  VAR_4.Cvar_Set( "r_gamma", "0.5" );
 } else if ( VAR_1->value > 3.0f ) {
  VAR_4.Cvar_Set( "r_gamma", "3.0" );
 }

 VAR_10 = VAR_1->value;

 VAR_12 = VAR_7.overbrightBits;

 for ( VAR_8 = 0; VAR_8 < 256; VAR_8++ ) {
  if ( VAR_10 == 1 ) {
   VAR_11 = VAR_8;
  } else {
   VAR_11 = 255 * FUNC_1 ( VAR_8/255.0f, 1.0f / VAR_10 ) + 0.5f;
  }
  VAR_11 <<= VAR_12;
  if (VAR_11 < 0) {
   VAR_11 = 0;
  }
  if (VAR_11 > 255) {
   VAR_11 = 255;
  }
  VAR_5[VAR_8] = VAR_11;
 }

 for (VAR_8=0 ; VAR_8<256 ; VAR_8++) {
  VAR_9 = VAR_8 * VAR_2->value;
  if (VAR_9 > 255) {
   VAR_9 = 255;
  }
  VAR_6[VAR_8] = VAR_9;
 }

 if ( VAR_0.deviceSupportsGamma )
 {
  FUNC_0( VAR_5, VAR_5, VAR_5 );
 }
}
