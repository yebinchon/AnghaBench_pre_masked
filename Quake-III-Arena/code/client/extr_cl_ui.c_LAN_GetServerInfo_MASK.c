
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int punkbuster; int adr; int netType; int gameType; int game; int maxPing; int minPing; int ping; int maxClients; int clients; int mapName; int hostName; } ;
typedef TYPE_1__ serverInfo_t ;
struct TYPE_4__ {TYPE_1__* favoriteServers; TYPE_1__* globalServers; TYPE_1__* mplayerServers; TYPE_1__* localServers; } ;






 int FUNC_0 (char*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 TYPE_2__ VAR_3 ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4( int VAR_4, int VAR_5, char *VAR_6, int VAR_7 ) {
 char VAR_8[VAR_2];
 serverInfo_t *VAR_9 = ((void*)0);
 VAR_8[0] = '\0';
 switch (VAR_4) {
  case 129 :
   if (VAR_5 >= 0 && VAR_5 < VAR_1) {
    VAR_9 = &VAR_3.localServers[VAR_5];
   }
   break;
  case 128 :
   if (VAR_5 >= 0 && VAR_5 < VAR_1) {
    VAR_9 = &VAR_3.mplayerServers[VAR_5];
   }
   break;
  case 130 :
   if (VAR_5 >= 0 && VAR_5 < VAR_0) {
    VAR_9 = &VAR_3.globalServers[VAR_5];
   }
   break;
  case 131 :
   if (VAR_5 >= 0 && VAR_5 < VAR_1) {
    VAR_9 = &VAR_3.favoriteServers[VAR_5];
   }
   break;
 }
 if (VAR_9 && VAR_6) {
  VAR_6[0] = '\0';
  FUNC_0( VAR_8, "hostname", VAR_9->hostName);
  FUNC_0( VAR_8, "mapname", VAR_9->mapName);
  FUNC_0( VAR_8, "clients", FUNC_3("%i",VAR_9->clients));
  FUNC_0( VAR_8, "sv_maxclients", FUNC_3("%i",VAR_9->maxClients));
  FUNC_0( VAR_8, "ping", FUNC_3("%i",VAR_9->ping));
  FUNC_0( VAR_8, "minping", FUNC_3("%i",VAR_9->minPing));
  FUNC_0( VAR_8, "maxping", FUNC_3("%i",VAR_9->maxPing));
  FUNC_0( VAR_8, "game", VAR_9->game);
  FUNC_0( VAR_8, "gametype", FUNC_3("%i",VAR_9->gameType));
  FUNC_0( VAR_8, "nettype", FUNC_3("%i",VAR_9->netType));
  FUNC_0( VAR_8, "addr", FUNC_1(VAR_9->adr));
  FUNC_0( VAR_8, "punkbuster", FUNC_3("%i", VAR_9->punkbuster));
  FUNC_2(VAR_6, VAR_8, VAR_7);
 } else {
  if (VAR_6) {
   VAR_6[0] = '\0';
  }
 }
}
