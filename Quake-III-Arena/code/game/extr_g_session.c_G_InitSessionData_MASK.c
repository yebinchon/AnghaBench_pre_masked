
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int spectatorTime; int spectatorState; void* sessionTeam; } ;
struct TYPE_10__ {TYPE_2__ sess; } ;
typedef TYPE_1__ gclient_t ;
typedef TYPE_2__ clientSession_t ;
struct TYPE_15__ {int integer; } ;
struct TYPE_14__ {int integer; } ;
struct TYPE_13__ {scalar_t__ integer; } ;
struct TYPE_12__ {int numNonSpectatorClients; int time; } ;


 int FUNC_0 (TYPE_1__*,int) ;


 int VAR_0 ;

 int FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (char*,char*) ;
 void* FUNC_3 (int) ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 TYPE_6__ VAR_4 ;
 TYPE_5__ VAR_5 ;
 TYPE_4__ VAR_6 ;
 TYPE_3__ VAR_7 ;

void FUNC_4( gclient_t *VAR_8, char *VAR_9 ) {
 clientSession_t *VAR_10;
 const char *VAR_11;

 VAR_10 = &VAR_8->sess;


 if ( VAR_4.integer >= VAR_0 ) {
  if ( VAR_6.integer ) {
   VAR_10->sessionTeam = FUNC_3( -1 );
   FUNC_0( VAR_8, -1 );
  } else {

   VAR_10->sessionTeam = VAR_3;
  }
 } else {
  VAR_11 = FUNC_2( VAR_9, "team" );
  if ( VAR_11[0] == 's' ) {

   VAR_10->sessionTeam = VAR_3;
  } else {
   switch ( VAR_4.integer ) {
   default:
   case 130:
   case 129:
    if ( VAR_5.integer > 0 &&
     VAR_7.numNonSpectatorClients >= VAR_5.integer ) {
     VAR_10->sessionTeam = VAR_3;
    } else {
     VAR_10->sessionTeam = VAR_2;
    }
    break;
   case 128:

    if ( VAR_7.numNonSpectatorClients >= 2 ) {
     VAR_10->sessionTeam = VAR_3;
    } else {
     VAR_10->sessionTeam = VAR_2;
    }
    break;
   }
  }
 }

 VAR_10->spectatorState = VAR_1;
 VAR_10->spectatorTime = VAR_7.time;

 FUNC_1( VAR_8 );
}
