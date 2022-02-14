
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ serverTime; } ;
typedef TYPE_3__ usercmd_t ;
typedef scalar_t__ qboolean ;
typedef int nullcmd ;
typedef int msg_t ;
struct TYPE_19__ {scalar_t__ serverTime; } ;
struct TYPE_21__ {int deltaMessage; int messageAcknowledge; int reliableAcknowledge; scalar_t__ pureAuthentic; scalar_t__ state; TYPE_2__ lastUsercmd; int name; int gotCP; TYPE_1__* frames; int * reliableCommands; } ;
typedef TYPE_4__ client_t ;
struct TYPE_24__ {int checksumFeed; } ;
struct TYPE_23__ {scalar_t__ integer; } ;
struct TYPE_22__ {int time; } ;
struct TYPE_18__ {int messageAcked; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,TYPE_3__*,TYPE_3__*) ;
 size_t VAR_4 ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_4__*,char*) ;
 int FUNC_9 (TYPE_4__*) ;
 TYPE_7__ VAR_5 ;
 TYPE_6__* VAR_6 ;
 TYPE_5__ VAR_7 ;

__attribute__((used)) static void FUNC_10( client_t *VAR_8, msg_t *VAR_9, qboolean VAR_10 ) {
 int VAR_11, VAR_12;
 int VAR_13;
 usercmd_t VAR_14;
 usercmd_t VAR_15[VAR_2];
 usercmd_t *VAR_16, *VAR_17;

 if ( VAR_10 ) {
  VAR_8->deltaMessage = VAR_8->messageAcknowledge;
 } else {
  VAR_8->deltaMessage = -1;
 }

 VAR_13 = FUNC_4( VAR_9 );

 if ( VAR_13 < 1 ) {
  FUNC_3( "cmdCount < 1\n" );
  return;
 }

 if ( VAR_13 > VAR_2 ) {
  FUNC_3( "cmdCount > MAX_PACKET_USERCMDS\n" );
  return;
 }


 VAR_12 = VAR_5.checksumFeed;

 VAR_12 ^= VAR_8->messageAcknowledge;

 VAR_12 ^= FUNC_1(VAR_8->reliableCommands[ VAR_8->reliableAcknowledge & (VAR_3-1) ], 32);

 FUNC_2( &VAR_14, 0, sizeof(VAR_14) );
 VAR_17 = &VAR_14;
 for ( VAR_11 = 0 ; VAR_11 < VAR_13 ; VAR_11++ ) {
  VAR_16 = &VAR_15[VAR_11];
  FUNC_5( VAR_9, VAR_12, VAR_17, VAR_16 );
  VAR_17 = VAR_16;
 }


 VAR_8->frames[ VAR_8->messageAcknowledge & VAR_4 ].messageAcked = VAR_7.time;





 if (VAR_6->integer != 0 && VAR_8->pureAuthentic == 0 && !VAR_8->gotCP) {
  if (VAR_8->state == VAR_0)
  {

   FUNC_0( "%s: didn't get cp command, resending gamestate\n", VAR_8->name, VAR_8->state );
   FUNC_9( VAR_8 );
  }
  return;
 }



 if ( VAR_8->state == VAR_1 ) {
  FUNC_6( VAR_8, &VAR_15[0] );

 }


 if (VAR_6->integer != 0 && VAR_8->pureAuthentic == 0) {
  FUNC_8( VAR_8, "Cannot validate pure client!");
  return;
 }

 if ( VAR_8->state != VAR_0 ) {
  VAR_8->deltaMessage = -1;
  return;
 }




 for ( VAR_11 = 0 ; VAR_11 < VAR_13 ; VAR_11++ ) {

  if ( VAR_15[VAR_11].serverTime > VAR_15[VAR_13-1].serverTime ) {
   continue;
  }






  if ( VAR_15[VAR_11].serverTime <= VAR_8->lastUsercmd.serverTime ) {
   continue;
  }
  FUNC_7 (VAR_8, &VAR_15[ VAR_11 ]);
 }
}
