
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_14__ {int origin; } ;
struct TYPE_13__ {int svFlags; } ;
struct TYPE_17__ {int flags; TYPE_5__* client; TYPE_3__ s; TYPE_2__ r; } ;
typedef TYPE_6__ gentity_t ;
struct TYPE_18__ {scalar_t__ integer; } ;
struct TYPE_15__ {int * persistant; int origin; scalar_t__* powerups; } ;
struct TYPE_12__ {scalar_t__ sessionTeam; } ;
struct TYPE_16__ {TYPE_4__ ps; TYPE_1__ sess; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 TYPE_6__* FUNC_1 (TYPE_6__*,int ,char*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_7__ VAR_9 ;

void FUNC_4( gentity_t *VAR_10, gentity_t *VAR_11 ) {
 gentity_t *VAR_12;
 vec3_t VAR_13;
 char *VAR_14;


 if ( VAR_10->client->ps.powerups[VAR_6] ||
  VAR_10->client->ps.powerups[VAR_4] ||
  VAR_10->client->ps.powerups[VAR_5] ) {

  if ( VAR_9.integer == VAR_1 ) {
   if ( VAR_10->client->sess.sessionTeam == VAR_8 ) {
    VAR_14 = "team_CTF_blueflag";
   }
   else {
    VAR_14 = "team_CTF_redflag";
   }
  }
  else {
   if ( VAR_10->client->sess.sessionTeam == VAR_8 ) {
    VAR_14 = "team_CTF_redflag";
   }
   else {
    VAR_14 = "team_CTF_blueflag";
   }
  }
  VAR_12 = ((void*)0);
  do
  {
   VAR_12 = FUNC_1(VAR_12, FUNC_0(VAR_14), VAR_14);
  } while (VAR_12 && (VAR_12->flags & VAR_0));

  if (VAR_12 && !(VAR_12->r.svFlags & VAR_7) ) {

   FUNC_3( VAR_10->client->ps.origin, VAR_12->s.origin, VAR_13 );
   if ( FUNC_2(VAR_13) < 200 ) {
    VAR_10->client->ps.persistant[VAR_2] ^= VAR_3;
    if ( VAR_11->client ) {
     VAR_11->client->ps.persistant[VAR_2] ^= VAR_3;
    }
   }
  }
 }
}
