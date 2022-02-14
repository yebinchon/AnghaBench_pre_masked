
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_6__ {scalar_t__* buffer; } ;
struct TYPE_5__ {scalar_t__ state; int keyCatchers; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,int,...) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_1__ VAR_9 ;

void FUNC_4( int VAR_10 ) {

 char VAR_11[VAR_5];


 if (VAR_10 == VAR_3) {
  VAR_9.keyCatchers &= ~VAR_1;
  FUNC_2( &VAR_6 );
  return;
 }

 if ( VAR_10 == VAR_2 || VAR_10 == VAR_4 )
 {
  if ( VAR_6.buffer[0] && VAR_9.state == VAR_0 ) {
   if (VAR_7 != -1 )

    FUNC_1( VAR_11, sizeof( VAR_11 ), "tell %i \"%s\"\n", VAR_7, VAR_6.buffer );

   else if (VAR_8)

    FUNC_1( VAR_11, sizeof( VAR_11 ), "say_team \"%s\"\n", VAR_6.buffer );
   else
    FUNC_1( VAR_11, sizeof( VAR_11 ), "say \"%s\"\n", VAR_6.buffer );



   FUNC_0( VAR_11 );
  }
  VAR_9.keyCatchers &= ~VAR_1;
  FUNC_2( &VAR_6 );
  return;
 }

 FUNC_3( &VAR_6, VAR_10 );
}
