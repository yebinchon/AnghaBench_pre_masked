
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int port; int * ip; int type; } ;
struct TYPE_7__ {char* hostName; char* mapName; int ping; char* game; scalar_t__ netType; scalar_t__ gameType; scalar_t__ minPing; scalar_t__ maxPing; scalar_t__ maxClients; scalar_t__ clients; TYPE_1__ adr; } ;
typedef TYPE_2__ serverInfo_t ;
struct TYPE_8__ {int port; int * ip; } ;
typedef TYPE_3__ serverAddress_t ;


 int VAR_0 ;

void FUNC_0( serverInfo_t *VAR_1, serverAddress_t *VAR_2 ) {
 VAR_1->adr.type = VAR_0;
 VAR_1->adr.ip[0] = VAR_2->ip[0];
 VAR_1->adr.ip[1] = VAR_2->ip[1];
 VAR_1->adr.ip[2] = VAR_2->ip[2];
 VAR_1->adr.ip[3] = VAR_2->ip[3];
 VAR_1->adr.port = VAR_2->port;
 VAR_1->clients = 0;
 VAR_1->hostName[0] = '\0';
 VAR_1->mapName[0] = '\0';
 VAR_1->maxClients = 0;
 VAR_1->maxPing = 0;
 VAR_1->minPing = 0;
 VAR_1->ping = -1;
 VAR_1->game[0] = '\0';
 VAR_1->gameType = 0;
 VAR_1->netType = 0;
}
