
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct js_event {int type; } ;
typedef int name ;
typedef int event ;
struct TYPE_2__ {int integer; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_2 (int,int ,char*) ;
 int VAR_7 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int,struct js_event*,int) ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (char*,char*,int) ;

void FUNC_7( void )
{
  int VAR_8 = 0;

  VAR_7 = -1;

  if( !VAR_6->integer ) {
    FUNC_0( "Joystick is not active.\n" );
    return;
  }

  for( VAR_8 = 0; VAR_8 < 4; VAR_8++ ) {
    char VAR_9[VAR_5];

    FUNC_5( VAR_9, VAR_5, "/dev/js%d", VAR_8 );

    VAR_7 = FUNC_3( VAR_9, VAR_4 | VAR_3 );

    if( VAR_7 != -1 ) {
      struct js_event VAR_10;
      char VAR_11 = 0;
      char VAR_12 = 0;
      char VAR_13[128];
      int VAR_14 = -1;

      FUNC_0( "Joystick %s found\n", VAR_9 );


      do {
 VAR_14 = FUNC_4( VAR_7, &VAR_10, sizeof( VAR_10 ) );

 if( VAR_14 == -1 ) {
   break;
 }

      } while( ( VAR_10.type & VAR_2 ) );


      FUNC_2( VAR_7, VAR_0, &VAR_11 );
      FUNC_2( VAR_7, VAR_1, &VAR_12 );

      if( FUNC_2( VAR_7, FUNC_1( sizeof( VAR_13 ) ), VAR_13 ) < 0 ) {
 FUNC_6( VAR_13, "Unknown", sizeof( VAR_13 ) );
      }

      FUNC_0( "Name:    %s\n", VAR_13 );
      FUNC_0( "Axes:    %d\n", VAR_11 );
      FUNC_0( "Buttons: %d\n", VAR_12 );


      return;
    }

  }


  if( VAR_7 == -1 ) {
    FUNC_0( "No joystick found.\n" );
    return;
  }

}
