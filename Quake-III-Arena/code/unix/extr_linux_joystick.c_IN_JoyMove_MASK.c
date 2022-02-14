
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct js_event {int type; int number; int value; } ;
typedef int event ;
struct TYPE_2__ {float value; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,scalar_t__,int,int ,int *) ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int,struct js_event*,int) ;

void FUNC_3( void )
{



  static int VAR_9[16];

  static unsigned int VAR_10 = 0;

  unsigned int VAR_11 = 0;
  int VAR_12 = 0;

  if( VAR_4 == -1 ) {
    return;
  }




  do {
    int VAR_13 = -1;
    struct js_event VAR_14;

    VAR_13 = FUNC_2( VAR_4, &VAR_14, sizeof( VAR_14 ) );

    if( VAR_13 == -1 ) {

      break;
    }

    if( VAR_14.type & VAR_1 ) {
      FUNC_1( 0, VAR_3, VAR_2 + VAR_14.number, VAR_14.value, 0, ((void*)0) );
    } else if( VAR_14.type & VAR_0 ) {

      if( VAR_14.number >= 16 ) {
 continue;
      }

      VAR_9[VAR_14.number] = VAR_14.value;
    } else {
      FUNC_0( "Unknown joystick event type\n" );
    }

  } while( 1 );



  for( VAR_12 = 0; VAR_12 < 16; VAR_12++ ) {
    float VAR_15 = ( (float) VAR_9[VAR_12] ) / 32767.0f;

    if( VAR_15 < -VAR_6->value ) {
      VAR_11 |= ( 1 << ( VAR_12 * 2 ) );
    } else if( VAR_15 > VAR_6->value ) {
      VAR_11 |= ( 1 << ( ( VAR_12 * 2 ) + 1 ) );
    }

  }


  for( VAR_12 = 0; VAR_12 < 16; VAR_12++ ) {

    if( ( VAR_11 & ( 1 << VAR_12 ) ) && !( VAR_10 & ( 1 << VAR_12 ) ) ) {
      FUNC_1( 0, VAR_3, VAR_5[VAR_12], VAR_8, 0, ((void*)0) );
    }

    if( !( VAR_11 & ( 1 << VAR_12 ) ) && ( VAR_10 & ( 1 << VAR_12 ) ) ) {
      FUNC_1( 0, VAR_3, VAR_5[VAR_12], VAR_7, 0, ((void*)0) );
    }
  }


  VAR_10 = VAR_11;
}
