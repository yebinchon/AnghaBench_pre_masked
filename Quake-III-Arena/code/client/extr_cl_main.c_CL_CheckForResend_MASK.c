
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int info ;
struct TYPE_4__ {scalar_t__ connectTime; int challenge; int serverAddress; int connectPacketCount; scalar_t__ demoplaying; } ;
struct TYPE_3__ {int state; scalar_t__ realtime; } ;




 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (char*,char*,int ) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,char*,int) ;
 int FUNC_6 (int ,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (char*,int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int ) ;
 TYPE_2__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int) ;

void FUNC_12( void ) {
 int VAR_9, VAR_10;
 char VAR_11[VAR_2];
 char VAR_12[VAR_2];


 if ( VAR_6.demoplaying ) {
  return;
 }


 if ( VAR_7.state != 128 && VAR_7.state != 129 ) {
  return;
 }

 if ( VAR_7.realtime - VAR_6.connectTime < VAR_5 ) {
  return;
 }

 VAR_6.connectTime = VAR_7.realtime;
 VAR_6.connectPacketCount++;


 switch ( VAR_7.state ) {
 case 128:

  if ( !FUNC_8( VAR_6.serverAddress ) ) {
   FUNC_0();
  }
  FUNC_6(VAR_3, VAR_6.serverAddress, "getchallenge");
  break;

 case 129:

  VAR_9 = FUNC_3 ("net_qport");

  FUNC_7( VAR_11, FUNC_2( VAR_0 ), sizeof( VAR_11 ) );
  FUNC_4( VAR_11, "protocol", FUNC_11("%i", VAR_4 ) );
  FUNC_4( VAR_11, "qport", FUNC_11("%i", VAR_9 ) );
  FUNC_4( VAR_11, "challenge", FUNC_11("%i", VAR_6.challenge ) );

  FUNC_9(VAR_12, "connect ");


    VAR_12[8] = '"';

  for(VAR_10=0;VAR_10<FUNC_10(VAR_11);VAR_10++) {
   VAR_12[9+VAR_10] = VAR_11[VAR_10];
  }
    VAR_12[9+VAR_10] = '"';
  VAR_12[10+VAR_10] = 0;


  FUNC_5( VAR_3, VAR_6.serverAddress, &VAR_12[0], VAR_10+10 );


  VAR_8 &= ~VAR_0;
  break;

 default:
  FUNC_1( VAR_1, "CL_CheckForResend: bad cls.state" );
 }
}
