
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int gameState; } ;
struct TYPE_7__ {int lastPacketSentTime; int serverAddress; int connectTime; int * serverMessage; } ;
struct TYPE_6__ {scalar_t__ state; int servername; scalar_t__ keyCatchers; int * updateInfoString; } ;
struct TYPE_5__ {int integer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_8 () ;
 TYPE_4__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;

void FUNC_9( void ) {
 if ( !VAR_6->integer ) {
  return;
 }

 FUNC_3();
 VAR_5.keyCatchers = 0;


 if ( VAR_5.state >= VAR_1 && !FUNC_6( VAR_5.servername, "localhost" ) ) {
  VAR_5.state = VAR_1;
  FUNC_2( VAR_5.updateInfoString, 0, sizeof( VAR_5.updateInfoString ) );
  FUNC_2( VAR_4.serverMessage, 0, sizeof( VAR_4.serverMessage ) );
  FUNC_2( &VAR_3.gameState, 0, sizeof( VAR_3.gameState ) );
  VAR_4.lastPacketSentTime = -9999;
  FUNC_8();
 } else {

  FUNC_4( "nextmap", "" );
  FUNC_1( VAR_7 );
  FUNC_7( VAR_5.servername, "localhost", sizeof(VAR_5.servername) );
  VAR_5.state = VAR_0;
  VAR_5.keyCatchers = 0;
  FUNC_8();
  VAR_4.connectTime = -VAR_2;
  FUNC_5( VAR_5.servername, &VAR_4.serverAddress);


  FUNC_0();
 }
}
