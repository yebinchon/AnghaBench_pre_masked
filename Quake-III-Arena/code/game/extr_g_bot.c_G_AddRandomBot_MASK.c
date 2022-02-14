
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


typedef int netname ;
struct TYPE_12__ {scalar_t__ connected; int netname; } ;
struct TYPE_11__ {int sessionTeam; } ;
struct TYPE_10__ {size_t clientNum; } ;
struct TYPE_13__ {TYPE_4__ pers; TYPE_3__ sess; TYPE_2__ ps; } ;
typedef TYPE_5__ gclient_t ;
struct TYPE_9__ {int svFlags; } ;
struct TYPE_16__ {TYPE_1__ r; } ;
struct TYPE_15__ {int integer; } ;
struct TYPE_14__ {TYPE_5__* clients; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 TYPE_8__* VAR_6 ;
 TYPE_7__ VAR_7 ;
 int VAR_8 ;
 TYPE_6__ VAR_9 ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*,int) ;
 float FUNC_5 (char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,char*,float,char*,int ) ;

void FUNC_8( int VAR_10 ) {
 int VAR_11, VAR_12, VAR_13;
 float VAR_14;
 char *VAR_15, VAR_16[36], *VAR_17;
 gclient_t *VAR_18;

 VAR_13 = 0;
 for ( VAR_12 = 0; VAR_12 < VAR_8 ; VAR_12++ ) {
  VAR_15 = FUNC_0( VAR_5[VAR_12], "name" );

  for ( VAR_11=0 ; VAR_11< VAR_7.integer ; VAR_11++ ) {
   VAR_18 = VAR_9.clients + VAR_11;
   if ( VAR_18->pers.connected != VAR_0 ) {
    continue;
   }
   if ( !(VAR_6[VAR_18->ps.clientNum].r.svFlags & VAR_2) ) {
    continue;
   }
   if ( VAR_10 >= 0 && VAR_18->sess.sessionTeam != VAR_10 ) {
    continue;
   }
   if ( !FUNC_2( VAR_15, VAR_18->pers.netname ) ) {
    break;
   }
  }
  if (VAR_11 >= VAR_7.integer) {
   VAR_13++;
  }
 }
 VAR_13 = FUNC_3() * VAR_13;
 for ( VAR_12 = 0; VAR_12 < VAR_8 ; VAR_12++ ) {
  VAR_15 = FUNC_0( VAR_5[VAR_12], "name" );

  for ( VAR_11=0 ; VAR_11< VAR_7.integer ; VAR_11++ ) {
   VAR_18 = VAR_9.clients + VAR_11;
   if ( VAR_18->pers.connected != VAR_0 ) {
    continue;
   }
   if ( !(VAR_6[VAR_18->ps.clientNum].r.svFlags & VAR_2) ) {
    continue;
   }
   if ( VAR_10 >= 0 && VAR_18->sess.sessionTeam != VAR_10 ) {
    continue;
   }
   if ( !FUNC_2( VAR_15, VAR_18->pers.netname ) ) {
    break;
   }
  }
  if (VAR_11 >= VAR_7.integer) {
   VAR_13--;
   if (VAR_13 <= 0) {
    VAR_14 = FUNC_5( "g_spSkill" );
    if (VAR_10 == VAR_4) VAR_17 = "red";
    else if (VAR_10 == VAR_3) VAR_17 = "blue";
    else VAR_17 = "";
    FUNC_4(VAR_16, VAR_15, sizeof(VAR_16)-1);
    VAR_16[sizeof(VAR_16)-1] = '\0';
    FUNC_1(VAR_16);
    FUNC_6( VAR_1, FUNC_7("addbot %s %f %s %i\n", VAR_16, VAR_14, VAR_17, 0) );
    return;
   }
  }
 }
}
