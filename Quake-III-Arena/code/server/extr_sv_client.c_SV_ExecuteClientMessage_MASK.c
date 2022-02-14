
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int msg_t ;
struct TYPE_10__ {scalar_t__ state; int name; void* gamestateMessageNum; void* messageAcknowledge; int lastClientCommandString; int * downloadName; void* reliableSequence; void* reliableAcknowledge; } ;
typedef TYPE_1__ client_t ;
struct TYPE_12__ {int serverId; int restartedServerId; } ;
struct TYPE_11__ {int clients; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,TYPE_1__*) ;
 void* VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int ,char*) ;
 TYPE_3__ VAR_8 ;
 TYPE_2__ VAR_9 ;

void FUNC_10( client_t *VAR_10, msg_t *VAR_11 ) {
 int VAR_12;
 int VAR_13;

 FUNC_2(VAR_11);

 VAR_13 = FUNC_4( VAR_11 );
 VAR_10->messageAcknowledge = FUNC_4( VAR_11 );

 if (VAR_10->messageAcknowledge < 0) {



  FUNC_6( VAR_10, "DEBUG: illegible client message" );

  return;
 }

 VAR_10->reliableAcknowledge = FUNC_4( VAR_11 );




 if (VAR_10->reliableAcknowledge < VAR_10->reliableSequence - VAR_1) {



  FUNC_6( VAR_10, "DEBUG: illegible client message" );

  VAR_10->reliableAcknowledge = VAR_10->reliableSequence;
  return;
 }
 if ( VAR_13 != VAR_8.serverId && !*VAR_10->downloadName && !FUNC_9(VAR_10->lastClientCommandString, "nextdl") ) {
  if ( VAR_13 >= VAR_8.restartedServerId && VAR_13 < VAR_8.serverId ) {

   FUNC_0("%s : ignoring pre map_restart / outdated client message\n", VAR_10->name);
   return;
  }


  if ( VAR_10->messageAcknowledge > VAR_10->gamestateMessageNum ) {
   FUNC_0( "%s : dropped gamestate, resending\n", VAR_10->name );
   FUNC_7( VAR_10 );
  }
  return;
 }


 do {
  VAR_12 = FUNC_3( VAR_11 );
  if ( VAR_12 == VAR_2 ) {
   break;
  }
  if ( VAR_12 != VAR_3 ) {
   break;
  }
  if ( !FUNC_5( VAR_10, VAR_11 ) ) {
   return;
  }
  if (VAR_10->state == VAR_0) {
   return;
  }
 } while ( 1 );


 if ( VAR_12 == VAR_4 ) {
  FUNC_8( VAR_10, VAR_11, VAR_7 );
 } else if ( VAR_12 == VAR_5 ) {
  FUNC_8( VAR_10, VAR_11, VAR_6 );
 } else if ( VAR_12 != VAR_2 ) {
  FUNC_1( "WARNING: bad command byte for client %i\n", VAR_10 - VAR_9.clients );
 }



}
