
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int to ;
typedef int qboolean ;
struct TYPE_5__ {int type; int port; int visible; } ;
typedef TYPE_1__ netadr_t ;
struct TYPE_6__ {TYPE_1__* localServers; int pingUpdateSource; scalar_t__ numlocalservers; } ;


 int VAR_0 ;
 int FUNC_0 (short) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,char*,TYPE_1__) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 int FUNC_4 (char*) ;

void FUNC_5( void ) {
 char *VAR_8;
 int VAR_9, VAR_10;
 netadr_t VAR_11;

 FUNC_2( "Scanning for servers on the local network...\n");


 VAR_7.numlocalservers = 0;
 VAR_7.pingUpdateSource = VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  qboolean VAR_12 = VAR_7.localServers[VAR_9].visible;
  FUNC_1(&VAR_7.localServers[VAR_9], 0, sizeof(VAR_7.localServers[VAR_9]));
  VAR_7.localServers[VAR_9].visible = VAR_12;
 }
 FUNC_1( &VAR_11, 0, sizeof( VAR_11 ) );




 VAR_8 = "\377\377\377\377getinfo xxx";


 for ( VAR_9 = 0 ; VAR_9 < 2 ; VAR_9++ ) {



  for ( VAR_10 = 0 ; VAR_10 < VAR_5 ; VAR_10++ ) {
   VAR_11.port = FUNC_0( (short)(VAR_6 + VAR_10) );

   VAR_11.type = VAR_2;
   FUNC_3( VAR_4, FUNC_4( VAR_8 ), VAR_8, VAR_11 );

   VAR_11.type = VAR_3;
   FUNC_3( VAR_4, FUNC_4( VAR_8 ), VAR_8, VAR_11 );
  }
 }
}
