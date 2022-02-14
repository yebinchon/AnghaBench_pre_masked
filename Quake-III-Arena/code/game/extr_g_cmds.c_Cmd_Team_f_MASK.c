
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int s ;
struct TYPE_11__ {TYPE_2__* client; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_13__ {scalar_t__ integer; } ;
struct TYPE_12__ {scalar_t__ time; } ;
struct TYPE_9__ {int sessionTeam; int losses; } ;
struct TYPE_10__ {scalar_t__ switchTeamTime; TYPE_1__ sess; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,char*) ;




 int VAR_2 ;
 TYPE_6__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (TYPE_3__*,char*) ;

void FUNC_4( gentity_t *VAR_5 ) {
 int VAR_6;
 char VAR_7[VAR_1];

 if ( FUNC_1() != 2 ) {
  VAR_6 = VAR_5->client->sess.sessionTeam;
  switch ( VAR_6 ) {
  case 131:
   FUNC_3( VAR_5-VAR_2, "print \"Blue team\n\"" );
   break;
  case 129:
   FUNC_3( VAR_5-VAR_2, "print \"Red team\n\"" );
   break;
  case 130:
   FUNC_3( VAR_5-VAR_2, "print \"Free team\n\"" );
   break;
  case 128:
   FUNC_3( VAR_5-VAR_2, "print \"Spectator team\n\"" );
   break;
  }
  return;
 }

 if ( VAR_5->client->switchTeamTime > VAR_4.time ) {
  FUNC_3( VAR_5-VAR_2, "print \"May not switch teams more than once per 5 seconds.\n\"" );
  return;
 }


 if ( (VAR_3.integer == VAR_0 )
  && VAR_5->client->sess.sessionTeam == 130 ) {
  VAR_5->client->sess.losses++;
 }

 FUNC_2( 1, VAR_7, sizeof( VAR_7 ) );

 FUNC_0( VAR_5, VAR_7 );

 VAR_5->client->switchTeamTime = VAR_4.time + 5000;
}
