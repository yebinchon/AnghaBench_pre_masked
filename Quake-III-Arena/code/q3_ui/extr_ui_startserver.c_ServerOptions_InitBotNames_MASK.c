
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int bots ;
struct TYPE_4__ {scalar_t__ gametype; char** playerNameBuffers; TYPE_1__* playerType; int mapnamebuffer; } ;
struct TYPE_3__ {int curvalue; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char const*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (char*) ;
 TYPE_2__ VAR_3 ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5( void ) {
 int VAR_4;
 int VAR_5;
 const char *VAR_6;
 const char *VAR_7;
 char *VAR_8;
 char *VAR_9;
 char VAR_10[VAR_1];

 if( VAR_3.gametype >= VAR_0 ) {
  FUNC_1( VAR_3.playerNameBuffers[1], "grunt", 16 );
  FUNC_1( VAR_3.playerNameBuffers[2], "major", 16 );
  if( VAR_3.gametype == VAR_0 ) {
   FUNC_1( VAR_3.playerNameBuffers[3], "visor", 16 );
  }
  else {
   VAR_3.playerType[3].curvalue = 2;
  }
  VAR_3.playerType[4].curvalue = 2;
  VAR_3.playerType[5].curvalue = 2;

  FUNC_1( VAR_3.playerNameBuffers[6], "sarge", 16 );
  FUNC_1( VAR_3.playerNameBuffers[7], "grunt", 16 );
  FUNC_1( VAR_3.playerNameBuffers[8], "major", 16 );
  if( VAR_3.gametype == VAR_0 ) {
   FUNC_1( VAR_3.playerNameBuffers[9], "visor", 16 );
  }
  else {
   VAR_3.playerType[9].curvalue = 2;
  }
  VAR_3.playerType[10].curvalue = 2;
  VAR_3.playerType[11].curvalue = 2;

  return;
 }

 VAR_4 = 1;


 VAR_6 = FUNC_2( VAR_3.mapnamebuffer );


 FUNC_1( VAR_10, FUNC_0( VAR_6, "bots" ), sizeof(VAR_10) );
 VAR_8 = &VAR_10[0];
 while( *VAR_8 && VAR_4 < VAR_2 ) {

  while( *VAR_8 && *VAR_8 == ' ' ) {
   VAR_8++;
  }
  if( !VAR_8 ) {
   break;
  }


  VAR_9 = VAR_8;


  while( *VAR_8 && *VAR_8 != ' ' ) {
   VAR_8++;
  }
  if( *VAR_8 ) {
   *VAR_8++ = 0;
  }

  VAR_7 = FUNC_3( VAR_9 );
  VAR_9 = FUNC_0( VAR_7, "name" );

  FUNC_1( VAR_3.playerNameBuffers[VAR_4], VAR_9, sizeof(VAR_3.playerNameBuffers[VAR_4]) );
  VAR_4++;
 }


 for( VAR_5 = VAR_4; VAR_5 < VAR_2; VAR_5++ ) {
  FUNC_4( VAR_3.playerNameBuffers[VAR_5], "--------" );
 }


 for( ;VAR_4 < 8; VAR_4++ ) {
  VAR_3.playerType[VAR_4].curvalue = 0;
 }


 for( ;VAR_4 < VAR_2; VAR_4++ ) {
  if( VAR_3.playerType[VAR_4].curvalue == 1 ) {
   VAR_3.playerType[VAR_4].curvalue = 2;
  }
 }
}
