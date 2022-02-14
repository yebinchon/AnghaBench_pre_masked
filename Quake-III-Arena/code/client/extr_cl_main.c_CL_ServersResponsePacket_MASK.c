
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int serverInfo_t ;
struct TYPE_6__ {int port; int * ip; } ;
typedef TYPE_1__ serverAddress_t ;
typedef int netadr_t ;
struct TYPE_7__ {char* data; int cursize; } ;
typedef TYPE_2__ msg_t ;
typedef char byte ;
struct TYPE_8__ {int numglobalservers; int numGlobalServerAddresses; int nummplayerservers; scalar_t__ masterNum; TYPE_1__* globalServerAddresses; int * mplayerServers; int * globalServers; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (char*,int,int ,int ,int ,int ,int) ;
 int FUNC_3 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;

void FUNC_4( netadr_t VAR_4, msg_t *VAR_5 ) {
 int VAR_6, VAR_7, VAR_8, VAR_9;
 serverAddress_t VAR_10[VAR_2];
 int VAR_11;
 byte* VAR_12;
 byte* VAR_13;

 FUNC_3("CL_ServersResponsePacket\n");

 if (VAR_3.numglobalservers == -1) {

  VAR_3.numglobalservers = 0;
  VAR_3.numGlobalServerAddresses = 0;
 }

 if (VAR_3.nummplayerservers == -1) {
  VAR_3.nummplayerservers = 0;
 }


 VAR_11 = 0;
 VAR_12 = VAR_5->data;
 VAR_13 = VAR_12 + VAR_5->cursize;
 while (VAR_12+1 < VAR_13) {

  do {
   if (*VAR_12++ == '\\')
    break;
  }
  while (VAR_12 < VAR_13);

  if ( VAR_12 >= VAR_13 - 6 ) {
   break;
  }


  VAR_10[VAR_11].ip[0] = *VAR_12++;
  VAR_10[VAR_11].ip[1] = *VAR_12++;
  VAR_10[VAR_11].ip[2] = *VAR_12++;
  VAR_10[VAR_11].ip[3] = *VAR_12++;


  VAR_10[VAR_11].port = (*VAR_12++)<<8;
  VAR_10[VAR_11].port += *VAR_12++;
  VAR_10[VAR_11].port = FUNC_0( VAR_10[VAR_11].port );


  if (*VAR_12 != '\\') {
   break;
  }

  FUNC_2( "server: %d ip: %d.%d.%d.%d:%d\n",VAR_11,
    VAR_10[VAR_11].ip[0],
    VAR_10[VAR_11].ip[1],
    VAR_10[VAR_11].ip[2],
    VAR_10[VAR_11].ip[3],
    VAR_10[VAR_11].port );

  VAR_11++;
  if (VAR_11 >= VAR_2) {
   break;
  }


  if (VAR_12[1] == 'E' && VAR_12[2] == 'O' && VAR_12[3] == 'T') {
   break;
  }
 }

 if (VAR_3.masterNum == 0) {
  VAR_7 = VAR_3.numglobalservers;
  VAR_8 = VAR_0;
 } else {
  VAR_7 = VAR_3.nummplayerservers;
  VAR_8 = VAR_1;
 }

 for (VAR_6 = 0; VAR_6 < VAR_11 && VAR_7 < VAR_8; VAR_6++) {

  serverInfo_t *VAR_14 = (VAR_3.masterNum == 0) ? &VAR_3.globalServers[VAR_7] : &VAR_3.mplayerServers[VAR_7];

  FUNC_1( VAR_14, &VAR_10[VAR_6] );

  VAR_7++;
 }


 if (VAR_3.masterNum == 0) {
  if ( VAR_3.numGlobalServerAddresses < VAR_0 ) {

   for (; VAR_6 < VAR_11 && VAR_7 >= VAR_8; VAR_6++) {
    serverAddress_t *VAR_15;

    VAR_15 = &VAR_3.globalServerAddresses[VAR_3.numGlobalServerAddresses++];
    VAR_15->ip[0] = VAR_10[VAR_6].ip[0];
    VAR_15->ip[1] = VAR_10[VAR_6].ip[1];
    VAR_15->ip[2] = VAR_10[VAR_6].ip[2];
    VAR_15->ip[3] = VAR_10[VAR_6].ip[3];
    VAR_15->port = VAR_10[VAR_6].port;
   }
  }
 }

 if (VAR_3.masterNum == 0) {
  VAR_3.numglobalservers = VAR_7;
  VAR_9 = VAR_7 + VAR_3.numGlobalServerAddresses;
 } else {
  VAR_3.nummplayerservers = VAR_7;
  VAR_9 = VAR_7;
 }

 FUNC_3("%d servers parsed (total %d)\n", VAR_11, VAR_9);
}
