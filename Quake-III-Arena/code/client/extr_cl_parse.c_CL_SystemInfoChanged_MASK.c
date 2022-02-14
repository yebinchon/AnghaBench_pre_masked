
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {char* stringData; int* stringOffsets; } ;
struct TYPE_6__ {scalar_t__ serverId; TYPE_1__ gameState; } ;
struct TYPE_5__ {scalar_t__ demoplaying; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 () ;
 scalar_t__* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*,char const*) ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (char const**,char*,char*) ;
 char const* FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char const*) ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_10( void ) {
 char *VAR_8;
 const char *VAR_9, *VAR_10;
 char VAR_11[VAR_0];
 char VAR_12[VAR_1];
 qboolean VAR_13;

 VAR_8 = VAR_3.gameState.stringData + VAR_3.gameState.stringOffsets[ VAR_2 ];




 VAR_3.serverId = FUNC_9( FUNC_7( VAR_8, "sv_serverid" ) );


 if ( VAR_5.demoplaying ) {
  return;
 }

 VAR_9 = FUNC_7( VAR_8, "sv_cheats" );
 if ( FUNC_9(VAR_9) == 0 ) {
  FUNC_1();
 }


 VAR_9 = FUNC_7( VAR_8, "sv_paks" );
 VAR_10 = FUNC_7( VAR_8, "sv_pakNames" );
 FUNC_4( VAR_9, VAR_10 );

 VAR_9 = FUNC_7( VAR_8, "sv_referencedPaks" );
 VAR_10 = FUNC_7( VAR_8, "sv_referencedPakNames" );
 FUNC_5( VAR_9, VAR_10 );

 VAR_13 = VAR_6;

 VAR_9 = VAR_8;
 while ( VAR_9 ) {
  FUNC_6( &VAR_9, VAR_11, VAR_12 );
  if ( !VAR_11[0] ) {
   break;
  }

  if ( !FUNC_8( VAR_11, "fs_game" ) ) {
   VAR_13 = VAR_7;
  }

  FUNC_0( VAR_11, VAR_12 );
 }

 if ( !VAR_13 && *FUNC_2("fs_game") ) {
  FUNC_0( "fs_game", "" );
 }
 VAR_4 = FUNC_3( "sv_pure" );
}
