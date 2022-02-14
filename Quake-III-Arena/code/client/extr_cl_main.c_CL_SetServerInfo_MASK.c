
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ping; void* punkbuster; void* maxPing; void* minPing; void* netType; void* gameType; int game; void* maxClients; int mapName; int hostName; void* clients; } ;
typedef TYPE_1__ serverInfo_t ;


 int FUNC_0 (char const*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(serverInfo_t *VAR_1, const char *VAR_2, int VAR_3) {
 if (VAR_1) {
  if (VAR_2) {
   VAR_1->clients = FUNC_2(FUNC_0(VAR_2, "clients"));
   FUNC_1(VAR_1->hostName,FUNC_0(VAR_2, "hostname"), VAR_0);
   FUNC_1(VAR_1->mapName, FUNC_0(VAR_2, "mapname"), VAR_0);
   VAR_1->maxClients = FUNC_2(FUNC_0(VAR_2, "sv_maxclients"));
   FUNC_1(VAR_1->game,FUNC_0(VAR_2, "game"), VAR_0);
   VAR_1->gameType = FUNC_2(FUNC_0(VAR_2, "gametype"));
   VAR_1->netType = FUNC_2(FUNC_0(VAR_2, "nettype"));
   VAR_1->minPing = FUNC_2(FUNC_0(VAR_2, "minping"));
   VAR_1->maxPing = FUNC_2(FUNC_0(VAR_2, "maxping"));
   VAR_1->punkbuster = FUNC_2(FUNC_0(VAR_2, "punkbuster"));
  }
  VAR_1->ping = VAR_3;
 }
}
