
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int clientNum; int messageString; int updateInfoString; int servername; int connState; int connectPacketCount; } ;
typedef TYPE_3__ uiClientState_t ;
struct TYPE_8__ {int clientNum; } ;
struct TYPE_9__ {TYPE_1__ ps; } ;
struct TYPE_13__ {TYPE_2__ snap; } ;
struct TYPE_12__ {int serverMessage; int connectPacketCount; } ;
struct TYPE_11__ {int updateInfoString; int servername; int state; } ;


 int FUNC_0 (int ,int ,int) ;
 TYPE_6__ VAR_0 ;
 TYPE_5__ VAR_1 ;
 TYPE_4__ VAR_2 ;

__attribute__((used)) static void FUNC_1( uiClientState_t *VAR_3 ) {
 VAR_3->connectPacketCount = VAR_1.connectPacketCount;
 VAR_3->connState = VAR_2.state;
 FUNC_0( VAR_3->servername, VAR_2.servername, sizeof( VAR_3->servername ) );
 FUNC_0( VAR_3->updateInfoString, VAR_2.updateInfoString, sizeof( VAR_3->updateInfoString ) );
 FUNC_0( VAR_3->messageString, VAR_1.serverMessage, sizeof( VAR_3->messageString ) );
 VAR_3->clientNum = VAR_0.snap.ps.clientNum;
}
