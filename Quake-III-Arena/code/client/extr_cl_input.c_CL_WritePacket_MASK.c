
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_20__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_10__ ;


struct TYPE_27__ {int serverTime; } ;
typedef TYPE_3__ usercmd_t ;
typedef int nullcmd ;
struct TYPE_28__ {int cursize; } ;
typedef TYPE_4__ msg_t ;
typedef int data ;
typedef int byte ;
struct TYPE_33__ {scalar_t__ integer; } ;
struct TYPE_32__ {int integer; } ;
struct TYPE_31__ {scalar_t__ integer; } ;
struct TYPE_25__ {int outgoingSequence; scalar_t__ unsentFragments; } ;
struct TYPE_30__ {int serverMessageSequence; int serverCommandSequence; int reliableAcknowledge; int reliableSequence; int checksumFeed; TYPE_20__ netchan; int lastPacketSentTime; int * serverCommands; scalar_t__ demowaiting; int * reliableCommands; scalar_t__ demoplaying; } ;
struct TYPE_29__ {scalar_t__ state; int realtime; } ;
struct TYPE_26__ {int p_cmdNumber; int p_serverTime; int p_realtime; } ;
struct TYPE_24__ {int messageNum; int valid; } ;
struct TYPE_23__ {int serverId; int cmdNumber; TYPE_2__* outPackets; TYPE_3__* cmds; TYPE_1__ snap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_20__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_20__*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,int *,int) ;
 int FUNC_9 (TYPE_4__*,int) ;
 int FUNC_10 (TYPE_4__*,int,TYPE_3__*,TYPE_3__*) ;
 int FUNC_11 (TYPE_4__*,int) ;
 int FUNC_12 (TYPE_4__*,int ) ;
 int VAR_5 ;
 TYPE_10__ VAR_6 ;
 TYPE_9__* VAR_7 ;
 TYPE_8__* VAR_8 ;
 TYPE_7__* VAR_9 ;
 TYPE_6__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_5__ VAR_14 ;

void FUNC_13( void ) {
 msg_t VAR_15;
 byte VAR_16[VAR_2];
 int VAR_17, VAR_18;
 usercmd_t *VAR_19, *VAR_20;
 usercmd_t VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24, VAR_25;


 if ( VAR_10.demoplaying || VAR_14.state == VAR_0 ) {
  return;
 }

 FUNC_4( &VAR_21, 0, sizeof(VAR_21) );
 VAR_20 = &VAR_21;

 FUNC_8( &VAR_15, VAR_16, sizeof(VAR_16) );

 FUNC_7( &VAR_15 );


 FUNC_11( &VAR_15, VAR_6.serverId );




 FUNC_11( &VAR_15, VAR_10.serverMessageSequence );


 FUNC_11( &VAR_15, VAR_10.serverCommandSequence );


 for ( VAR_17 = VAR_10.reliableAcknowledge + 1 ; VAR_17 <= VAR_10.reliableSequence ; VAR_17++ ) {
  FUNC_9( &VAR_15, VAR_11 );
  FUNC_11( &VAR_15, VAR_17 );
  FUNC_12( &VAR_15, VAR_10.reliableCommands[ VAR_17 & (VAR_4-1) ] );
 }




 if ( VAR_8->integer < 0 ) {
  FUNC_6( "cl_packetdup", "0" );
 } else if ( VAR_8->integer > 5 ) {
  FUNC_6( "cl_packetdup", "5" );
 }
 VAR_23 = (VAR_10.netchan.outgoingSequence - 1 - VAR_8->integer) & VAR_5;
 VAR_24 = VAR_6.cmdNumber - VAR_6.outPackets[ VAR_23 ].p_cmdNumber;
 if ( VAR_24 > VAR_3 ) {
  VAR_24 = VAR_3;
  FUNC_5("MAX_PACKET_USERCMDS\n");
 }
 if ( VAR_24 >= 1 ) {
  if ( VAR_9->integer ) {
   FUNC_5( "(%i)", VAR_24 );
  }


  if ( VAR_7->integer || !VAR_6.snap.valid || VAR_10.demowaiting
   || VAR_10.serverMessageSequence != VAR_6.snap.messageNum ) {
   FUNC_9 (&VAR_15, VAR_13);
  } else {
   FUNC_9 (&VAR_15, VAR_12);
  }


  FUNC_9( &VAR_15, VAR_24 );


  VAR_25 = VAR_10.checksumFeed;

  VAR_25 ^= VAR_10.serverMessageSequence;

  VAR_25 ^= FUNC_3(VAR_10.serverCommands[ VAR_10.serverCommandSequence & (VAR_4-1) ], 32);


  for ( VAR_17 = 0 ; VAR_17 < VAR_24 ; VAR_17++ ) {
   VAR_18 = (VAR_6.cmdNumber - VAR_24 + VAR_17 + 1) & VAR_1;
   VAR_19 = &VAR_6.cmds[VAR_18];
   FUNC_10 (&VAR_15, VAR_25, VAR_20, VAR_19);
   VAR_20 = VAR_19;
  }
 }




 VAR_22 = VAR_10.netchan.outgoingSequence & VAR_5;
 VAR_6.outPackets[ VAR_22 ].p_realtime = VAR_14.realtime;
 VAR_6.outPackets[ VAR_22 ].p_serverTime = VAR_20->serverTime;
 VAR_6.outPackets[ VAR_22 ].p_cmdNumber = VAR_6.cmdNumber;
 VAR_10.lastPacketSentTime = VAR_14.realtime;

 if ( VAR_9->integer ) {
  FUNC_5( "%i ", VAR_15.cursize );
 }

 FUNC_0 (&VAR_10.netchan, &VAR_15);






 while ( VAR_10.netchan.unsentFragments ) {
  FUNC_2( "WARNING: #462 unsent fragments (not supposed to happen!)\n" );
  FUNC_1( &VAR_10.netchan );
 }
}
