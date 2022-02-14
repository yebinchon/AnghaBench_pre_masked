
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ driverType; void* deviceSupportsGamma; } ;
struct TYPE_5__ {int integer; } ;
struct TYPE_4__ {int (* Printf ) (int ,char*) ;} ;
typedef int HDC ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 void* FUNC_2 (int ,int**) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;
 TYPE_3__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* FUNC_5 (int ,int**) ;
 scalar_t__ VAR_5 ;
 TYPE_2__* VAR_6 ;
 TYPE_1__ VAR_7 ;
 int** VAR_8 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*) ;

void FUNC_8( void )
{
 HDC VAR_9;

 VAR_2.deviceSupportsGamma = VAR_3;

 if ( VAR_5 )
 {
  VAR_2.deviceSupportsGamma = VAR_4;

  VAR_9 = FUNC_0( FUNC_1() );
  VAR_2.deviceSupportsGamma = FUNC_5( VAR_9, VAR_8 );
  FUNC_4( FUNC_1(), VAR_9 );

  return;
 }


 if ( VAR_2.driverType == VAR_0 )
 {
  return;
 }

 if ( !VAR_6->integer )
 {
  VAR_9 = FUNC_0( FUNC_1() );
  VAR_2.deviceSupportsGamma = FUNC_2( VAR_9, VAR_8 );
  FUNC_4( FUNC_1(), VAR_9 );

  if ( VAR_2.deviceSupportsGamma )
  {



   if ( ( FUNC_3( VAR_8[0][255] ) <= FUNC_3( VAR_8[0][0] ) ) ||
     ( FUNC_3( VAR_8[1][255] ) <= FUNC_3( VAR_8[1][0] ) ) ||
     ( FUNC_3( VAR_8[2][255] ) <= FUNC_3( VAR_8[2][0] ) ) )
   {
    VAR_2.deviceSupportsGamma = VAR_3;
    VAR_7.Printf( VAR_1, "WARNING: device has broken gamma support, generated gamma.dat\n" );
   }





   if ( ( FUNC_3( VAR_8[0][181] ) == 255 ) )
   {
    int VAR_10;

    VAR_7.Printf( VAR_1, "WARNING: suspicious gamma tables, using linear ramp for restoration\n" );

    for ( VAR_10 = 0; VAR_10 < 255; VAR_10++ )
    {
     VAR_8[0][VAR_10] = VAR_10 << 8;
     VAR_8[1][VAR_10] = VAR_10 << 8;
     VAR_8[2][VAR_10] = VAR_10 << 8;
    }
   }
  }
 }
}
