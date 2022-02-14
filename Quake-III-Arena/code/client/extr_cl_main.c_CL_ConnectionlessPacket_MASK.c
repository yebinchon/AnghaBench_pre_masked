
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int netadr_t ;
typedef int msg_t ;
struct TYPE_4__ {int connectTime; int lastPacketSentTime; int serverMessage; int netchan; int serverAddress; int challenge; scalar_t__ connectPacketCount; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 char* FUNC_12 (int *) ;
 char* FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ,char*,char*) ;
 int VAR_3 ;
 int FUNC_17 (int ,int *,int ,int ) ;
 int FUNC_18 (char*,char*) ;
 int FUNC_19 (char*,char*,int) ;
 int FUNC_20 (int ,char*,int) ;
 int FUNC_21 (char*) ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;

void FUNC_22( netadr_t VAR_6, msg_t *VAR_7 ) {
 char *VAR_8;
 char *VAR_9;

 FUNC_10( VAR_7 );
 FUNC_11( VAR_7 );

 VAR_8 = FUNC_13( VAR_7 );

 FUNC_6( VAR_8 );

 VAR_9 = FUNC_5(0);

 FUNC_7 ("CL packet %s: %s\n", FUNC_14(VAR_6), VAR_9);


 if ( !FUNC_18(VAR_9, "challengeResponse") ) {
  if ( VAR_5.state != VAR_2 ) {
   FUNC_8( "Unwanted challenge response received.  Ignored.\n" );
  } else {

   VAR_4.challenge = FUNC_21(FUNC_5(1));
   VAR_5.state = VAR_0;
   VAR_4.connectPacketCount = 0;
   VAR_4.connectTime = -99999;



   VAR_4.serverAddress = VAR_6;
   FUNC_7 ("challengeResponse: %d\n", VAR_4.challenge);
  }
  return;
 }


 if ( !FUNC_18(VAR_9, "connectResponse") ) {
  if ( VAR_5.state >= VAR_1 ) {
   FUNC_8 ("Dup connect received.  Ignored.\n");
   return;
  }
  if ( VAR_5.state != VAR_0 ) {
   FUNC_8 ("connectResponse packet while not connecting.  Ignored.\n");
   return;
  }
  if ( !FUNC_15( VAR_6, VAR_4.serverAddress ) ) {
   FUNC_8( "connectResponse from a different address.  Ignored.\n" );
   FUNC_8( "%s should have been %s\n", FUNC_14( VAR_6 ),
    FUNC_14( VAR_4.serverAddress ) );
   return;
  }
  FUNC_17 (VAR_3, &VAR_4.netchan, VAR_6, FUNC_9( "net_qport" ) );
  VAR_5.state = VAR_1;
  VAR_4.lastPacketSentTime = -9999;
  return;
 }


 if ( !FUNC_18(VAR_9, "infoResponse") ) {
  FUNC_2( VAR_6, VAR_7 );
  return;
 }


 if ( !FUNC_18(VAR_9, "statusResponse") ) {
  FUNC_3( VAR_6, VAR_7 );
  return;
 }



 if (!FUNC_18(VAR_9, "disconnect")) {
  FUNC_0( VAR_6 );
  return;
 }


 if ( !FUNC_18(VAR_9, "echo") ) {
  FUNC_16( VAR_3, VAR_6, "%s", FUNC_5(1) );
  return;
 }


 if ( !FUNC_18(VAR_9, "keyAuthorize") ) {

  return;
 }


 if ( !FUNC_18(VAR_9, "motd") ) {
  FUNC_1( VAR_6 );
  return;
 }


 if ( !FUNC_18(VAR_9, "print") ) {
  VAR_8 = FUNC_12( VAR_7 );
  FUNC_20( VAR_4.serverMessage, VAR_8, sizeof( VAR_4.serverMessage ) );
  FUNC_8( "%s", VAR_8 );
  return;
 }


 if ( !FUNC_19(VAR_9, "getserversResponse", 18) ) {
  FUNC_4( VAR_6, VAR_7 );
  return;
 }

 FUNC_7 ("Unknown connectionless packet command.\n");
}
