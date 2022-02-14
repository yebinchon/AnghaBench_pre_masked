
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int string ;
struct TYPE_17__ {int powerups; } ;
struct TYPE_18__ {TYPE_6__ s; TYPE_5__* client; scalar_t__ inuse; } ;
typedef TYPE_7__ gentity_t ;
typedef int entry ;
typedef int clients ;
struct TYPE_20__ {int integer; } ;
struct TYPE_19__ {int* sortedClients; } ;
struct TYPE_15__ {int* stats; int weapon; } ;
struct TYPE_13__ {int location; } ;
struct TYPE_14__ {TYPE_2__ teamState; int teamInfo; } ;
struct TYPE_12__ {scalar_t__ sessionTeam; } ;
struct TYPE_16__ {TYPE_4__ ps; TYPE_3__ pers; TYPE_1__ sess; } ;


 int FUNC_0 (char*,int,char*,int,int ,int,int,int ,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_7__* VAR_4 ;
 TYPE_9__ VAR_5 ;
 TYPE_8__ VAR_6 ;
 int FUNC_1 (int*,int,int,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*,int,char*) ;

void FUNC_6( gentity_t *VAR_7 ) {
 char VAR_8[1024];
 char VAR_9[8192];
 int VAR_10;
 int VAR_11, VAR_12;
 gentity_t *VAR_13;
 int VAR_14;
 int VAR_15, VAR_16;
 int VAR_17[VAR_3];

 if ( ! VAR_7->client->pers.teamInfo )
  return;




 for (VAR_11 = 0, VAR_14 = 0; VAR_11 < VAR_5.integer && VAR_14 < VAR_3; VAR_11++) {
  VAR_13 = VAR_4 + VAR_6.sortedClients[VAR_11];
  if (VAR_13->inuse && VAR_13->client->sess.sessionTeam ==
   VAR_7->client->sess.sessionTeam ) {
   VAR_17[VAR_14++] = VAR_6.sortedClients[VAR_11];
  }
 }


 FUNC_1( VAR_17, VAR_14, sizeof( VAR_17[0] ), VAR_2 );


 VAR_9[0] = 0;
 VAR_10 = 0;

 for (VAR_11 = 0, VAR_14 = 0; VAR_11 < VAR_5.integer && VAR_14 < VAR_3; VAR_11++) {
  VAR_13 = VAR_4 + VAR_11;
  if (VAR_13->inuse && VAR_13->client->sess.sessionTeam ==
   VAR_7->client->sess.sessionTeam ) {

   VAR_15 = VAR_13->client->ps.stats[VAR_1];
   VAR_16 = VAR_13->client->ps.stats[VAR_0];
   if (VAR_15 < 0) VAR_15 = 0;
   if (VAR_16 < 0) VAR_16 = 0;

   FUNC_0 (VAR_8, sizeof(VAR_8),
    " %i %i %i %i %i %i",

    VAR_11, VAR_13->client->pers.teamState.location, VAR_15, VAR_16,
    VAR_13->client->ps.weapon, VAR_13->s.powerups);
   VAR_12 = FUNC_3(VAR_8);
   if (VAR_10 + VAR_12 > sizeof(VAR_9))
    break;
   FUNC_2 (VAR_9 + VAR_10, VAR_8);
   VAR_10 += VAR_12;
   VAR_14++;
  }
 }

 FUNC_4( VAR_7-VAR_4, FUNC_5("tinfo %i %s", VAR_14, VAR_9) );
}
