
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_10__ {int origin; } ;
struct TYPE_13__ {TYPE_4__* client; TYPE_2__ s; } ;
typedef TYPE_5__ gentity_t ;
struct TYPE_11__ {int * persistant; int origin; scalar_t__ generic1; } ;
struct TYPE_9__ {scalar_t__ sessionTeam; } ;
struct TYPE_12__ {TYPE_3__ ps; TYPE_1__ sess; } ;


 int FUNC_0 (char*) ;
 TYPE_5__* FUNC_1 (int *,int ,char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

void FUNC_4( gentity_t *VAR_3, gentity_t *VAR_4 ) {
 gentity_t *VAR_5;
 vec3_t VAR_6;
 char *VAR_7;


 if ( VAR_3->client->ps.generic1 ) {
  if ( VAR_3->client->sess.sessionTeam == VAR_2 ) {
   VAR_7 = "team_redobelisk";
  }
  else {
   VAR_7 = "team_blueobelisk";
  }
  VAR_5 = FUNC_1(((void*)0), FUNC_0(VAR_7), VAR_7);

  if ( VAR_5 ) {

   FUNC_3( VAR_3->client->ps.origin, VAR_5->s.origin, VAR_6 );
   if ( FUNC_2(VAR_6) < 200 ) {
    VAR_3->client->ps.persistant[VAR_0] ^= VAR_1;
    if ( VAR_4->client ) {
     VAR_4->client->ps.persistant[VAR_0] ^= VAR_1;
    }
   }
  }
 }
}
