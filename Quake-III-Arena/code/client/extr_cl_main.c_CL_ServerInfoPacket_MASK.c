
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ port; int type; } ;
typedef TYPE_2__ netadr_t ;
typedef int msg_t ;
typedef int info ;
struct TYPE_13__ {char* info; scalar_t__ time; scalar_t__ start; TYPE_2__ adr; } ;
struct TYPE_12__ {scalar_t__ pingUpdateSource; int numlocalservers; TYPE_1__* localServers; scalar_t__ realtime; } ;
struct TYPE_10__ {char* hostName; char* mapName; int ping; char* game; int netType; scalar_t__ punkbuster; scalar_t__ gameType; scalar_t__ minPing; scalar_t__ maxPing; scalar_t__ maxClients; scalar_t__ clients; TYPE_2__ adr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__,char*,scalar_t__) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int ,char*) ;
 int FUNC_3 (char*,char*,int ) ;
 int FUNC_4 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_5 (int *) ;




 int FUNC_6 (TYPE_2__) ;
 scalar_t__ FUNC_7 (TYPE_2__,TYPE_2__) ;
 int VAR_4 ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (int ) ;
 TYPE_4__* VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*,int) ;

void FUNC_13( netadr_t VAR_7, msg_t *VAR_8 ) {
 int VAR_9, VAR_10;
 char VAR_11[VAR_1];
 char* VAR_12;
 char *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_5( VAR_8 );


 VAR_14 = FUNC_9( FUNC_4( VAR_13, "protocol" ) );
 if ( VAR_14 != VAR_4 ) {
  FUNC_1( "Different protocol info packet: %s\n", VAR_13 );
  return;
 }


 for (VAR_9=0; VAR_9<VAR_3; VAR_9++)
 {
  if ( VAR_5[VAR_9].adr.port && !VAR_5[VAR_9].time && FUNC_7( VAR_7, VAR_5[VAR_9].adr ) )
  {

   VAR_5[VAR_9].time = VAR_6.realtime - VAR_5[VAR_9].start + 1;
   FUNC_1( "ping time %dms from %s\n", VAR_5[VAR_9].time, FUNC_6( VAR_7 ) );


   FUNC_8( VAR_5[VAR_9].info, VAR_13, sizeof( VAR_5[VAR_9].info ) );



   switch (VAR_7.type)
   {
    case 131:
    case 129:
     VAR_12 = "udp";
     VAR_10 = 1;
     break;

    case 128:
    case 130:
     VAR_12 = "ipx";
     VAR_10 = 2;
     break;

    default:
     VAR_12 = "???";
     VAR_10 = 0;
     break;
   }
   FUNC_3( VAR_5[VAR_9].info, "nettype", FUNC_12("%d", VAR_10) );
   FUNC_0(VAR_7, VAR_13, VAR_5[VAR_9].time);

   return;
  }
 }


 if (VAR_6.pingUpdateSource != VAR_0) {
  return;
 }

 for ( VAR_9 = 0 ; VAR_9 < VAR_2 ; VAR_9++ ) {

  if ( VAR_6.localServers[VAR_9].adr.port == 0 ) {
   break;
  }


  if ( FUNC_7( VAR_7, VAR_6.localServers[VAR_9].adr ) ) {
   return;
  }
 }

 if ( VAR_9 == VAR_2 ) {
  FUNC_1( "MAX_OTHER_SERVERS hit, dropping infoResponse\n" );
  return;
 }


 VAR_6.numlocalservers = VAR_9+1;
 VAR_6.localServers[VAR_9].adr = VAR_7;
 VAR_6.localServers[VAR_9].clients = 0;
 VAR_6.localServers[VAR_9].hostName[0] = '\0';
 VAR_6.localServers[VAR_9].mapName[0] = '\0';
 VAR_6.localServers[VAR_9].maxClients = 0;
 VAR_6.localServers[VAR_9].maxPing = 0;
 VAR_6.localServers[VAR_9].minPing = 0;
 VAR_6.localServers[VAR_9].ping = -1;
 VAR_6.localServers[VAR_9].game[0] = '\0';
 VAR_6.localServers[VAR_9].gameType = 0;
 VAR_6.localServers[VAR_9].netType = VAR_7.type;
 VAR_6.localServers[VAR_9].punkbuster = 0;

 FUNC_8( VAR_11, FUNC_5( VAR_8 ), VAR_1 );
 if (FUNC_10(VAR_11)) {
  if (VAR_11[FUNC_10(VAR_11)-1] != '\n') {
   FUNC_11(VAR_11, "\n", sizeof(info) - strlen(info) - 1);
  }
  FUNC_2( "%s: %s", FUNC_6( VAR_7 ), VAR_11 );
 }
}
