
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int netadr_t ;
struct TYPE_4__ {int challenge; int adr; int pingTime; } ;
struct TYPE_3__ {TYPE_2__* challenges; int time; int authorizeAddress; } ;


 char* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,char*,...) ;
 int VAR_1 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,char*) ;
 TYPE_1__ VAR_2 ;

void FUNC_9( netadr_t VAR_3 ) {
 int VAR_4;
 int VAR_5;
 char *VAR_6;
 char *VAR_7;
 char VAR_8[1024];

 if ( !FUNC_4( VAR_3, VAR_2.authorizeAddress ) ) {
  FUNC_2( "SV_AuthorizeIpPacket: not from authorize server\n" );
  return;
 }

 VAR_4 = FUNC_7( FUNC_0( 1 ) );

 for (VAR_5 = 0 ; VAR_5 < VAR_0 ; VAR_5++) {
  if ( VAR_2.challenges[VAR_5].challenge == VAR_4 ) {
   break;
  }
 }
 if ( VAR_5 == VAR_0 ) {
  FUNC_2( "SV_AuthorizeIpPacket: challenge not found\n" );
  return;
 }


 VAR_2.challenges[VAR_5].pingTime = VAR_2.time;
 VAR_6 = FUNC_0( 2 );
 VAR_7 = FUNC_0( 3 );

 if ( !FUNC_6( VAR_6, "demo" ) ) {
  if ( FUNC_3( "fs_restrict" ) ) {

   FUNC_5( VAR_1, VAR_2.challenges[VAR_5].adr,
    "challengeResponse %i", VAR_2.challenges[VAR_5].challenge );
   return;
  }

  FUNC_5( VAR_1, VAR_2.challenges[VAR_5].adr, "print\nServer is not a demo server\n" );

  FUNC_1( &VAR_2.challenges[VAR_5], 0, sizeof( VAR_2.challenges[VAR_5] ) );
  return;
 }
 if ( !FUNC_6( VAR_6, "accept" ) ) {
  FUNC_5( VAR_1, VAR_2.challenges[VAR_5].adr,
   "challengeResponse %i", VAR_2.challenges[VAR_5].challenge );
  return;
 }
 if ( !FUNC_6( VAR_6, "unknown" ) ) {
  if (!VAR_7) {
   FUNC_5( VAR_1, VAR_2.challenges[VAR_5].adr, "print\nAwaiting CD key authorization\n" );
  } else {
   FUNC_8(VAR_8, "print\n%s\n", VAR_7);
   FUNC_5( VAR_1, VAR_2.challenges[VAR_5].adr, VAR_8 );
  }

  FUNC_1( &VAR_2.challenges[VAR_5], 0, sizeof( VAR_2.challenges[VAR_5] ) );
  return;
 }


 if (!VAR_7) {
  FUNC_5( VAR_1, VAR_2.challenges[VAR_5].adr, "print\nSomeone is using this CD Key\n" );
 } else {
  FUNC_8(VAR_8, "print\n%s\n", VAR_7);
  FUNC_5( VAR_1, VAR_2.challenges[VAR_5].adr, VAR_8 );
 }


 FUNC_1( &VAR_2.challenges[VAR_5], 0, sizeof( VAR_2.challenges[VAR_5] ) );
}
