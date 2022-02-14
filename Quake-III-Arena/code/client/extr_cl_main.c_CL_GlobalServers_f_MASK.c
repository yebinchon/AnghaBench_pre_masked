
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int port; int type; } ;
typedef TYPE_1__ netadr_t ;
struct TYPE_6__ {int masterNum; int nummplayerservers; int numglobalservers; int pingUpdateSource; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,TYPE_1__,char*) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (char*) ;
 TYPE_2__ VAR_6 ;
 int FUNC_8 (char*,char*,...) ;
 int FUNC_9 (char*) ;

void FUNC_10( void ) {
 netadr_t VAR_7;
 int VAR_8;
 int VAR_9;
 char *VAR_10;
 char VAR_11[1024];

 if ( FUNC_1() < 3) {
  FUNC_3( "usage: globalservers <master# 0-1> <protocol> [keywords]\n");
  return;
 }

 VAR_6.masterNum = FUNC_7( FUNC_2(1) );

 FUNC_3( "Requesting servers from the master...\n");




 if( VAR_6.masterNum == 1 ) {
  FUNC_6( VAR_2, &VAR_7 );
  VAR_6.nummplayerservers = -1;
  VAR_6.pingUpdateSource = VAR_1;
 }
 else {
  FUNC_6( VAR_2, &VAR_7 );
  VAR_6.numglobalservers = -1;
  VAR_6.pingUpdateSource = VAR_0;
 }
 VAR_7.type = VAR_3;
 VAR_7.port = FUNC_0(VAR_5);

 FUNC_8( VAR_11, "getservers %s", FUNC_2(2) );


 VAR_10 = VAR_11 + FUNC_9( VAR_11 );
 VAR_9 = FUNC_1();
 for (VAR_8=3; VAR_8<VAR_9; VAR_8++)
  VAR_10 += FUNC_8( VAR_10, " %s", FUNC_2(VAR_8) );


 if ( FUNC_4( "fs_restrict" ) ) {
  VAR_10 += FUNC_8( VAR_10, " demo" );
 }

 FUNC_5( VAR_4, VAR_7, VAR_11 );
}
