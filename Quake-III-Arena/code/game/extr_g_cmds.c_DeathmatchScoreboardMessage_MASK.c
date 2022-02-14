
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int powerups; } ;
struct TYPE_12__ {TYPE_2__ s; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_11__ {int ping; scalar_t__* persistant; } ;
struct TYPE_9__ {scalar_t__ connected; int enterTime; } ;
struct TYPE_13__ {int accuracy_shots; int accuracy_hits; TYPE_3__ ps; TYPE_1__ pers; } ;
typedef TYPE_5__ gclient_t ;
typedef int entry ;
struct TYPE_14__ {int numConnectedClients; size_t* sortedClients; int time; int * teamScores; TYPE_5__* clients; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,char*,size_t,scalar_t__,int,int,int,int ,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,scalar_t__) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 TYPE_4__* VAR_12 ;
 TYPE_6__ VAR_13 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int,int ,int ,char*) ;

void FUNC_5( gentity_t *VAR_14 ) {
 char VAR_15[1024];
 char VAR_16[1400];
 int VAR_17;
 int VAR_18, VAR_19;
 gclient_t *VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24;


 VAR_16[0] = 0;
 VAR_17 = 0;
 VAR_22 = 0;

 VAR_21 = VAR_13.numConnectedClients;

 for (VAR_18=0 ; VAR_18 < VAR_21 ; VAR_18++) {
  int VAR_25;

  VAR_20 = &VAR_13.clients[VAR_13.sortedClients[VAR_18]];

  if ( VAR_20->pers.connected == VAR_0 ) {
   VAR_25 = -1;
  } else {
   VAR_25 = VAR_20->ps.ping < 999 ? VAR_20->ps.ping : 999;
  }

  if( VAR_20->accuracy_shots ) {
   VAR_23 = VAR_20->accuracy_hits * 100 / VAR_20->accuracy_shots;
  }
  else {
   VAR_23 = 0;
  }
  VAR_24 = ( VAR_20->ps.persistant[VAR_8] == 0 && VAR_20->ps.persistant[VAR_7] == 0 ) ? 1 : 0;

  FUNC_0 (VAR_15, sizeof(VAR_15),
   " %i %i %i %i %i %i %i %i %i %i %i %i %i %i", VAR_13.sortedClients[VAR_18],
   VAR_20->ps.persistant[VAR_9], VAR_25, (VAR_13.time - VAR_20->pers.enterTime)/60000,
   VAR_22, VAR_12[VAR_13.sortedClients[VAR_18]].s.powerups, VAR_23,
   VAR_20->ps.persistant[VAR_6],
   VAR_20->ps.persistant[VAR_4],
   VAR_20->ps.persistant[VAR_5],
   VAR_20->ps.persistant[VAR_3],
   VAR_20->ps.persistant[VAR_1],
   VAR_24,
   VAR_20->ps.persistant[VAR_2]);
  VAR_19 = FUNC_2(VAR_15);
  if (VAR_17 + VAR_19 > 1024)
   break;
  FUNC_1 (VAR_16 + VAR_17, VAR_15);
  VAR_17 += VAR_19;
 }

 FUNC_3( VAR_14-VAR_12, FUNC_4("scores %i %i %i%s", VAR_18,
  VAR_13.teamScores[VAR_11], VAR_13.teamScores[VAR_10],
  VAR_16 ) );
}
