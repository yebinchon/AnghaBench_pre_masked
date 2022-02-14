
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;


struct TYPE_28__ {int svFlags; } ;
struct TYPE_23__ {scalar_t__ modelindex; int clientNum; } ;
struct TYPE_29__ {char* classname; TYPE_8__ r; TYPE_7__* client; int inuse; TYPE_3__ s; } ;
typedef TYPE_9__ gentity_t ;
struct TYPE_26__ {scalar_t__ sessionTeam; } ;
struct TYPE_25__ {void** persistant; int origin; } ;
struct TYPE_24__ {scalar_t__ connected; } ;
struct TYPE_27__ {TYPE_6__ sess; TYPE_5__ ps; TYPE_4__ pers; } ;
struct TYPE_21__ {scalar_t__ sessionTeam; scalar_t__ spectatorState; int spectatorClient; int wins; } ;
struct TYPE_22__ {TYPE_1__ sess; } ;
struct TYPE_20__ {scalar_t__ integer; } ;
struct TYPE_19__ {int maxclients; int* sortedClients; TYPE_2__* clients; int warmupTime; int intermissiontime; } ;


 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (size_t) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int) ;
 TYPE_9__* FUNC_5 (int ,int ) ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (TYPE_9__*) ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (TYPE_9__*) ;
 int FUNC_8 (TYPE_9__*) ;
 int FUNC_9 (TYPE_9__*) ;
 TYPE_9__* VAR_11 ;
 TYPE_12__ VAR_12 ;
 TYPE_11__ VAR_13 ;
 int VAR_14 ;
 int FUNC_10 (int,char*) ;
 int FUNC_11 (TYPE_9__*) ;

void FUNC_12( int VAR_15 ) {
 gentity_t *VAR_16;
 gentity_t *VAR_17;
 int VAR_18;



 FUNC_4( VAR_15 );

 VAR_16 = VAR_11 + VAR_15;
 if ( !VAR_16->client ) {
  return;
 }


 for ( VAR_18 = 0 ; VAR_18 < VAR_13.maxclients ; VAR_18++ ) {
  if ( VAR_13.clients[VAR_18].sess.sessionTeam == VAR_10
   && VAR_13.clients[VAR_18].sess.spectatorState == VAR_7
   && VAR_13.clients[VAR_18].sess.spectatorClient == VAR_15 ) {
   FUNC_6( &VAR_11[VAR_18] );
  }
 }


 if ( VAR_16->client->pers.connected == VAR_0
  && VAR_16->client->sess.sessionTeam != VAR_10 ) {
  VAR_17 = FUNC_5( VAR_16->client->ps.origin, VAR_3 );
  VAR_17->s.clientNum = VAR_16->s.clientNum;



  FUNC_8( VAR_16 );







 }

 FUNC_3( "ClientDisconnect: %i\n", VAR_15 );


 if ( (VAR_12.integer == VAR_5 )
  && !VAR_13.intermissiontime
  && !VAR_13.warmupTime && VAR_13.sortedClients[1] == VAR_15 ) {
  VAR_13.clients[ VAR_13.sortedClients[0] ].sess.wins++;
  FUNC_2( VAR_13.sortedClients[0] );
 }

 FUNC_11 (VAR_16);
 VAR_16->s.modelindex = 0;
 VAR_16->inuse = VAR_14;
 VAR_16->classname = "disconnected";
 VAR_16->client->pers.connected = VAR_1;
 VAR_16->client->ps.persistant[VAR_6] = VAR_9;
 VAR_16->client->sess.sessionTeam = VAR_9;

 FUNC_10( VAR_2 + VAR_15, "");

 FUNC_1();

 if ( VAR_16->r.svFlags & VAR_8 ) {
  FUNC_0( VAR_15, VAR_14 );
 }
}
