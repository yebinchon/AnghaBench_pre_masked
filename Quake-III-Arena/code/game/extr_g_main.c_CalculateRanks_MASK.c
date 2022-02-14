
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int* persistant; } ;
struct TYPE_11__ {scalar_t__ sessionTeam; } ;
struct TYPE_9__ {scalar_t__ connected; } ;
struct TYPE_13__ {TYPE_4__ ps; TYPE_3__ sess; TYPE_1__ pers; } ;
typedef TYPE_5__ gclient_t ;
struct TYPE_10__ {int svFlags; } ;
struct TYPE_16__ {TYPE_2__ r; } ;
struct TYPE_15__ {scalar_t__ integer; } ;
struct TYPE_14__ {int follow1; int follow2; size_t numConnectedClients; int numPlayingClients; int maxclients; int* sortedClients; scalar_t__* teamScores; scalar_t__ intermissiontime; TYPE_5__* clients; scalar_t__* numteamVotingClients; scalar_t__ numVotingClients; scalar_t__ numNonSpectatorClients; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 () ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_8__* VAR_16 ;
 TYPE_7__ VAR_17 ;
 TYPE_6__ VAR_18 ;
 int FUNC_2 (int*,size_t,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,scalar_t__) ;

void FUNC_5( void ) {
 int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 gclient_t *VAR_23;

 VAR_18.follow1 = -1;
 VAR_18.follow2 = -1;
 VAR_18.numConnectedClients = 0;
 VAR_18.numNonSpectatorClients = 0;
 VAR_18.numPlayingClients = 0;
 VAR_18.numVotingClients = 0;
 for ( VAR_19 = 0; VAR_19 < VAR_13; VAR_19++ ) {
  VAR_18.numteamVotingClients[VAR_19] = 0;
 }
 for ( VAR_19 = 0 ; VAR_19 < VAR_18.maxclients ; VAR_19++ ) {
  if ( VAR_18.clients[VAR_19].pers.connected != VAR_1 ) {
   VAR_18.sortedClients[VAR_18.numConnectedClients] = VAR_19;
   VAR_18.numConnectedClients++;

   if ( VAR_18.clients[VAR_19].sess.sessionTeam != VAR_15 ) {
    VAR_18.numNonSpectatorClients++;


    if ( VAR_18.clients[VAR_19].pers.connected == VAR_0 ) {
     VAR_18.numPlayingClients++;
     if ( !(VAR_16[VAR_19].r.svFlags & VAR_10) ) {
      VAR_18.numVotingClients++;
      if ( VAR_18.clients[VAR_19].sess.sessionTeam == VAR_14 )
       VAR_18.numteamVotingClients[0]++;
      else if ( VAR_18.clients[VAR_19].sess.sessionTeam == VAR_12 )
       VAR_18.numteamVotingClients[1]++;
     }
     if ( VAR_18.follow1 == -1 ) {
      VAR_18.follow1 = VAR_19;
     } else if ( VAR_18.follow2 == -1 ) {
      VAR_18.follow2 = VAR_19;
     }
    }
   }
  }
 }

 FUNC_2( VAR_18.sortedClients, VAR_18.numConnectedClients,
  sizeof(VAR_18.sortedClients[0]), VAR_11 );


 if ( VAR_17.integer >= VAR_5 ) {

  for ( VAR_19 = 0; VAR_19 < VAR_18.numConnectedClients; VAR_19++ ) {
   VAR_23 = &VAR_18.clients[ VAR_18.sortedClients[VAR_19] ];
   if ( VAR_18.teamScores[VAR_14] == VAR_18.teamScores[VAR_12] ) {
    VAR_23->ps.persistant[VAR_6] = 2;
   } else if ( VAR_18.teamScores[VAR_14] > VAR_18.teamScores[VAR_12] ) {
    VAR_23->ps.persistant[VAR_6] = 0;
   } else {
    VAR_23->ps.persistant[VAR_6] = 1;
   }
  }
 } else {
  VAR_20 = -1;
  VAR_21 = 0;
  for ( VAR_19 = 0; VAR_19 < VAR_18.numPlayingClients; VAR_19++ ) {
   VAR_23 = &VAR_18.clients[ VAR_18.sortedClients[VAR_19] ];
   VAR_22 = VAR_23->ps.persistant[VAR_7];
   if ( VAR_19 == 0 || VAR_22 != VAR_21 ) {
    VAR_20 = VAR_19;

    VAR_18.clients[ VAR_18.sortedClients[VAR_19] ].ps.persistant[VAR_6] = VAR_20;
   } else {

    VAR_18.clients[ VAR_18.sortedClients[VAR_19-1] ].ps.persistant[VAR_6] = VAR_20 | VAR_8;
    VAR_18.clients[ VAR_18.sortedClients[VAR_19] ].ps.persistant[VAR_6] = VAR_20 | VAR_8;
   }
   VAR_21 = VAR_22;
   if ( VAR_17.integer == VAR_4 && VAR_18.numPlayingClients == 1 ) {
    VAR_18.clients[ VAR_18.sortedClients[VAR_19] ].ps.persistant[VAR_6] = VAR_20 | VAR_8;
   }
  }
 }


 if ( VAR_17.integer >= VAR_5 ) {
  FUNC_3( VAR_2, FUNC_4("%i", VAR_18.teamScores[VAR_14] ) );
  FUNC_3( VAR_3, FUNC_4("%i", VAR_18.teamScores[VAR_12] ) );
 } else {
  if ( VAR_18.numConnectedClients == 0 ) {
   FUNC_3( VAR_2, FUNC_4("%i", VAR_9) );
   FUNC_3( VAR_3, FUNC_4("%i", VAR_9) );
  } else if ( VAR_18.numConnectedClients == 1 ) {
   FUNC_3( VAR_2, FUNC_4("%i", VAR_18.clients[ VAR_18.sortedClients[0] ].ps.persistant[VAR_7] ) );
   FUNC_3( VAR_3, FUNC_4("%i", VAR_9) );
  } else {
   FUNC_3( VAR_2, FUNC_4("%i", VAR_18.clients[ VAR_18.sortedClients[0] ].ps.persistant[VAR_7] ) );
   FUNC_3( VAR_3, FUNC_4("%i", VAR_18.clients[ VAR_18.sortedClients[1] ].ps.persistant[VAR_7] ) );
  }
 }


 FUNC_0();


 if ( VAR_18.intermissiontime ) {
  FUNC_1();
 }
}
