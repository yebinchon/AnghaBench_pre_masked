
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vinfo ;
struct TYPE_9__ {int deviceSupportsGamma; } ;
struct TYPE_8__ {int hDC; } ;
struct TYPE_7__ {scalar_t__ integer; } ;
struct TYPE_6__ {int dwOSVersionInfoSize; int dwMajorVersion; scalar_t__ dwPlatformId; } ;
typedef TYPE_1__ OSVERSIONINFO ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,unsigned short**) ;
 scalar_t__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_4 (int ,unsigned short**) ;
 TYPE_2__* VAR_3 ;

void FUNC_5( unsigned char VAR_4[256], unsigned char VAR_5[256], unsigned char VAR_6[256] ) {
 unsigned short VAR_7[3][256];
 int VAR_8, VAR_9;
 int VAR_10;
 OSVERSIONINFO VAR_11;

 if ( !VAR_1.deviceSupportsGamma || VAR_3->integer || !VAR_2.hDC ) {
  return;
 }



 for ( VAR_8 = 0; VAR_8 < 256; VAR_8++ ) {
  VAR_7[0][VAR_8] = ( ( ( unsigned short ) VAR_4[VAR_8] ) << 8 ) | VAR_4[VAR_8];
  VAR_7[1][VAR_8] = ( ( ( unsigned short ) VAR_5[VAR_8] ) << 8 ) | VAR_5[VAR_8];
  VAR_7[2][VAR_8] = ( ( ( unsigned short ) VAR_6[VAR_8] ) << 8 ) | VAR_6[VAR_8];
 }


 VAR_11.dwOSVersionInfoSize = sizeof(VAR_11);
 FUNC_2( &VAR_11 );
 if ( VAR_11.dwMajorVersion == 5 && VAR_11.dwPlatformId == VAR_0 ) {
  FUNC_0( "performing W2K gamma clamp.\n" );
  for ( VAR_9 = 0 ; VAR_9 < 3 ; VAR_9++ ) {
   for ( VAR_8 = 0 ; VAR_8 < 128 ; VAR_8++ ) {
    if ( VAR_7[VAR_9][VAR_8] > ( (128+VAR_8) << 8 ) ) {
     VAR_7[VAR_9][VAR_8] = (128+VAR_8) << 8;
    }
   }
   if ( VAR_7[VAR_9][127] > 254<<8 ) {
    VAR_7[VAR_9][127] = 254<<8;
   }
  }
 } else {
  FUNC_0( "skipping W2K gamma clamp.\n" );
 }


 for ( VAR_9 = 0 ; VAR_9 < 3 ; VAR_9++ ) {
  for ( VAR_8 = 1 ; VAR_8 < 256 ; VAR_8++ ) {
   if ( VAR_7[VAR_9][VAR_8] < VAR_7[VAR_9][VAR_8-1] ) {
    VAR_7[VAR_9][VAR_8] = VAR_7[VAR_9][VAR_8-1];
   }
  }
 }


 if ( &FUNC_4 )
 {
  FUNC_4( VAR_2.hDC, VAR_7 );
 }
 else
 {
  VAR_10 = FUNC_3( VAR_2.hDC, VAR_7 );
  if ( !VAR_10 ) {
   FUNC_1( "SetDeviceGammaRamp failed.\n" );
  }
 }
}
