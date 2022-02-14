
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int newSnap ;
typedef int msg_t ;
struct TYPE_20__ {scalar_t__ commandTime; } ;
struct TYPE_15__ {int messageNum; int deltaNum; int parseEntitiesNum; int ping; TYPE_8__ ps; void* valid; int areamask; void* snapFlags; int serverTime; int serverCommandNum; } ;
typedef TYPE_3__ clSnapshot_t ;
struct TYPE_19__ {int parseEntitiesNum; void* newSnapshots; TYPE_3__ snap; TYPE_3__* snapshots; TYPE_2__* outPackets; } ;
struct TYPE_18__ {int integer; } ;
struct TYPE_13__ {int outgoingSequence; } ;
struct TYPE_17__ {int serverMessageSequence; TYPE_1__ netchan; void* demowaiting; int serverCommandSequence; } ;
struct TYPE_16__ {int realtime; } ;
struct TYPE_14__ {scalar_t__ p_serverTime; int p_realtime; } ;


 int FUNC_0 (int *,TYPE_3__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,TYPE_8__*,TYPE_8__*) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_7 (int *,char*) ;
 TYPE_7__ VAR_3 ;
 TYPE_6__* VAR_4 ;
 TYPE_5__ VAR_5 ;
 TYPE_4__ VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;

void FUNC_8( msg_t *VAR_9 ) {
 int VAR_10;
 clSnapshot_t *VAR_11;
 clSnapshot_t VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15, VAR_16;







 FUNC_1 (&VAR_12, 0, sizeof(VAR_12));



 VAR_12.serverCommandNum = VAR_5.serverCommandSequence;

 VAR_12.serverTime = FUNC_6( VAR_9 );

 VAR_12.messageNum = VAR_5.serverMessageSequence;

 VAR_13 = FUNC_3( VAR_9 );
 if ( !VAR_13 ) {
  VAR_12.deltaNum = -1;
 } else {
  VAR_12.deltaNum = VAR_12.messageNum - VAR_13;
 }
 VAR_12.snapFlags = FUNC_3( VAR_9 );





 if ( VAR_12.deltaNum <= 0 ) {
  VAR_12.valid = VAR_8;
  VAR_11 = ((void*)0);
  VAR_5.demowaiting = VAR_7;
 } else {
  VAR_11 = &VAR_3.snapshots[VAR_12.deltaNum & VAR_2];
  if ( !VAR_11->valid ) {

   FUNC_2 ("Delta from invalid frame (not supposed to happen!).\n");
  } else if ( VAR_11->messageNum != VAR_12.deltaNum ) {


   FUNC_2 ("Delta frame too old.\n");
  } else if ( VAR_3.parseEntitiesNum - VAR_11->parseEntitiesNum > VAR_0-128 ) {
   FUNC_2 ("Delta parseEntitiesNum too old.\n");
  } else {
   VAR_12.valid = VAR_8;
  }
 }


 VAR_10 = FUNC_3( VAR_9 );
 FUNC_4( VAR_9, &VAR_12.areamask, VAR_10);


 FUNC_7( VAR_9, "playerstate" );
 if ( VAR_11 ) {
  FUNC_5( VAR_9, &VAR_11->ps, &VAR_12.ps );
 } else {
  FUNC_5( VAR_9, ((void*)0), &VAR_12.ps );
 }


 FUNC_7( VAR_9, "packet entities" );
 FUNC_0( VAR_9, VAR_11, &VAR_12 );



 if ( !VAR_12.valid ) {
  return;
 }





 VAR_14 = VAR_3.snap.messageNum + 1;

 if ( VAR_12.messageNum - VAR_14 >= VAR_1 ) {
  VAR_14 = VAR_12.messageNum - ( VAR_1 - 1 );
 }
 for ( ; VAR_14 < VAR_12.messageNum ; VAR_14++ ) {
  VAR_3.snapshots[VAR_14 & VAR_2].valid = VAR_7;
 }


 VAR_3.snap = VAR_12;
 VAR_3.snap.ping = 999;

 for ( VAR_15 = 0 ; VAR_15 < VAR_1 ; VAR_15++ ) {
  VAR_16 = ( VAR_5.netchan.outgoingSequence - 1 - VAR_15 ) & VAR_2;
  if ( VAR_3.snap.ps.commandTime >= VAR_3.outPackets[ VAR_16 ].p_serverTime ) {
   VAR_3.snap.ping = VAR_6.realtime - VAR_3.outPackets[ VAR_16 ].p_realtime;
   break;
  }
 }

 VAR_3.snapshots[VAR_3.snap.messageNum & VAR_2] = VAR_3.snap;

 if (VAR_4->integer == 3) {
  FUNC_2( "   snapshot:%i  delta:%i  ping:%i\n", VAR_3.snap.messageNum,
  VAR_3.snap.deltaNum, VAR_3.snap.ping );
 }

 VAR_3.newSnapshots = VAR_8;
}
