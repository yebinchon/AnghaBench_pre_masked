
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_13__ {int ping; int * persistant; } ;
struct TYPE_11__ {scalar_t__ connected; int netname; } ;
struct TYPE_10__ {scalar_t__ sessionTeam; } ;
struct TYPE_14__ {TYPE_4__ ps; TYPE_2__ pers; TYPE_1__ sess; } ;
typedef TYPE_5__ gclient_t ;
struct TYPE_12__ {int svFlags; } ;
struct TYPE_18__ {TYPE_3__ r; } ;
struct TYPE_17__ {scalar_t__ integer; } ;
struct TYPE_16__ {scalar_t__ integer; } ;
struct TYPE_15__ {int numConnectedClients; size_t* sortedClients; int * teamScores; TYPE_5__* clients; int time; int intermissionQueued; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,char const*,...) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_9__* VAR_12 ;
 TYPE_8__ VAR_13 ;
 TYPE_7__ VAR_14 ;
 TYPE_6__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3( const char *VAR_18 ) {
 int VAR_19, VAR_20;
 gclient_t *VAR_21;



 FUNC_0( "Exit: %s\n", VAR_18 );

 VAR_15.intermissionQueued = VAR_15.time;



 FUNC_2( VAR_1, "1" );


 VAR_20 = VAR_15.numConnectedClients;
 if ( VAR_20 > 32 ) {
  VAR_20 = 32;
 }

 if ( VAR_13.integer >= VAR_4 ) {
  FUNC_0( "red:%i  blue:%i\n",
   VAR_15.teamScores[VAR_10], VAR_15.teamScores[VAR_9] );
 }

 for (VAR_19=0 ; VAR_19 < VAR_20 ; VAR_19++) {
  int VAR_22;

  VAR_21 = &VAR_15.clients[VAR_15.sortedClients[VAR_19]];

  if ( VAR_21->sess.sessionTeam == VAR_11 ) {
   continue;
  }
  if ( VAR_21->pers.connected == VAR_0 ) {
   continue;
  }

  VAR_22 = VAR_21->ps.ping < 999 ? VAR_21->ps.ping : 999;

  FUNC_0( "score: %i  ping: %i  client: %i %s\n", VAR_21->ps.persistant[VAR_7], VAR_22, VAR_15.sortedClients[VAR_19], VAR_21->pers.netname );
 }
}
