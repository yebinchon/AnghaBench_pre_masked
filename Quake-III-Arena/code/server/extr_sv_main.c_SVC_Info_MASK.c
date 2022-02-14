
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
typedef struct TYPE_11__ TYPE_10__ ;


typedef int netadr_t ;
struct TYPE_20__ {char* string; } ;
struct TYPE_19__ {char* string; } ;
struct TYPE_18__ {int integer; } ;
struct TYPE_17__ {int integer; } ;
struct TYPE_16__ {int integer; } ;
struct TYPE_15__ {int integer; } ;
struct TYPE_14__ {int integer; } ;
struct TYPE_13__ {TYPE_1__* clients; } ;
struct TYPE_12__ {scalar_t__ state; } ;
struct TYPE_11__ {int integer; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*,char*,char*) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_10__* VAR_5 ;
 TYPE_9__* VAR_6 ;
 TYPE_8__* VAR_7 ;
 TYPE_7__* VAR_8 ;
 TYPE_6__* VAR_9 ;
 TYPE_5__* VAR_10 ;
 TYPE_4__* VAR_11 ;
 TYPE_3__* VAR_12 ;
 TYPE_2__ VAR_13 ;
 char* FUNC_5 (char*,int) ;

void FUNC_6( netadr_t VAR_14 ) {
 int VAR_15, VAR_16;
 char *VAR_17;
 char VAR_18[VAR_2];


 if ( FUNC_2( "g_gametype" ) == VAR_1 || FUNC_2("ui_singlePlayerActive")) {
  return;
 }


 VAR_16 = 0;
 for ( VAR_15 = VAR_11->integer ; VAR_15 < VAR_9->integer ; VAR_15++ ) {
  if ( VAR_13.clients[VAR_15].state >= VAR_0 ) {
   VAR_16++;
  }
 }

 VAR_18[0] = 0;



 FUNC_3( VAR_18, "challenge", FUNC_0(1) );

 FUNC_3( VAR_18, "protocol", FUNC_5("%i", VAR_4) );
 FUNC_3( VAR_18, "hostname", VAR_6->string );
 FUNC_3( VAR_18, "mapname", VAR_7->string );
 FUNC_3( VAR_18, "clients", FUNC_5("%i", VAR_16) );
 FUNC_3( VAR_18, "sv_maxclients",
  FUNC_5("%i", VAR_9->integer - VAR_11->integer ) );
 FUNC_3( VAR_18, "gametype", FUNC_5("%i", VAR_5->integer ) );
 FUNC_3( VAR_18, "pure", FUNC_5("%i", VAR_12->integer ) );

 if( VAR_10->integer ) {
  FUNC_3( VAR_18, "minPing", FUNC_5("%i", VAR_10->integer) );
 }
 if( VAR_8->integer ) {
  FUNC_3( VAR_18, "maxPing", FUNC_5("%i", VAR_8->integer) );
 }
 VAR_17 = FUNC_1( "fs_game" );
 if( *VAR_17 ) {
  FUNC_3( VAR_18, "game", VAR_17 );
 }

 FUNC_4( VAR_3, VAR_14, "infoResponse\n%s", VAR_18 );
}
