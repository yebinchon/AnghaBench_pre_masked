
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int serverinfo ;
typedef int qboolean ;
typedef int map ;
struct TYPE_2__ {scalar_t__ integer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 char* FUNC_4 (char const*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*) ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_8 (int *,char*,char*,int ) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,int) ;

void FUNC_11( qboolean VAR_7 ) {
 int VAR_8;
 int VAR_9;
 const char *VAR_10;
 char *VAR_11;
 int VAR_12;
 char VAR_13[VAR_4];
 char VAR_14[VAR_3];

 FUNC_2();
 FUNC_1();

 FUNC_8( &VAR_5, "bot_minplayers", "0", VAR_1 );

 if( VAR_6.integer == VAR_2 ) {
  FUNC_10( VAR_14, sizeof(VAR_14) );
  FUNC_6( VAR_13, FUNC_4( VAR_14, "mapname" ), sizeof(VAR_13) );
  VAR_10 = FUNC_0( VAR_13 );
  if ( !VAR_10 ) {
   return;
  }

  VAR_11 = FUNC_4( VAR_10, "fraglimit" );
  VAR_8 = FUNC_7( VAR_11 );
  if ( VAR_8 ) {
   FUNC_9( "fraglimit", VAR_11 );
  }
  else {
   FUNC_9( "fraglimit", "0" );
  }

  VAR_11 = FUNC_4( VAR_10, "timelimit" );
  VAR_9 = FUNC_7( VAR_11 );
  if ( VAR_9 ) {
   FUNC_9( "timelimit", VAR_11 );
  }
  else {
   FUNC_9( "timelimit", "0" );
  }

  if ( !VAR_8 && !VAR_9 ) {
   FUNC_9( "fraglimit", "10" );
   FUNC_9( "timelimit", "0" );
  }

  VAR_12 = VAR_0;
  VAR_11 = FUNC_4( VAR_10, "special" );
  if( FUNC_5( VAR_11, "training" ) == 0 ) {
   VAR_12 += 10000;
  }

  if( !VAR_7 ) {
   FUNC_3( FUNC_4( VAR_10, "bots" ), VAR_12 );
  }
 }
}
