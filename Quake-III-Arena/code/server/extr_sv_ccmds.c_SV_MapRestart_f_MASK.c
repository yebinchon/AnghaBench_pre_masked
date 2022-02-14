
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* qboolean ;
typedef int mapname ;
struct TYPE_12__ {scalar_t__ type; } ;
struct TYPE_13__ {TYPE_1__ remoteAddress; } ;
struct TYPE_14__ {scalar_t__ state; int lastUsercmd; TYPE_2__ netchan; } ;
typedef TYPE_3__ client_t ;
struct TYPE_19__ {int integer; } ;
struct TYPE_18__ {scalar_t__ serverId; int restartTime; void* restarting; int state; } ;
struct TYPE_17__ {scalar_t__ modified; } ;
struct TYPE_16__ {int integer; scalar_t__ modified; } ;
struct TYPE_15__ {int time; TYPE_3__* clients; int snapFlagServerBit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (char*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (TYPE_3__*,char*) ;
 int FUNC_8 (TYPE_3__*,int *) ;
 int FUNC_9 (TYPE_3__*,char*) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (char*,void*) ;
 int FUNC_13 (int ,int ,int,...) ;
 char* FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ VAR_10 ;
 TYPE_8__* VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 TYPE_7__ VAR_15 ;
 TYPE_6__* VAR_16 ;
 TYPE_5__* VAR_17 ;
 TYPE_4__ VAR_18 ;
 int FUNC_16 (char*,int) ;

__attribute__((used)) static void FUNC_17( void ) {
 int VAR_19;
 client_t *VAR_20;
 char *VAR_21;
 qboolean VAR_22;
 int VAR_23;


 if ( VAR_10 == VAR_15.serverId ) {
  return;
 }


 if ( !VAR_11->integer ) {
  FUNC_2( "Server is not running.\n" );
  return;
 }

 if ( VAR_15.restartTime ) {
  return;
 }

 if (FUNC_0() > 1 ) {
  VAR_23 = FUNC_15( FUNC_1(1) );
 }
 else {
  VAR_23 = 5;
 }
 if( VAR_23 && !FUNC_5("g_doWarmup") ) {
  VAR_15.restartTime = VAR_18.time + VAR_23 * 1000;
  FUNC_11( VAR_2, FUNC_16("%i", VAR_15.restartTime) );
  return;
 }



 if ( VAR_17->modified || VAR_16->modified ) {
  char VAR_24[VAR_5];

  FUNC_2( "variable change -- restarting.\n" );

  FUNC_6( VAR_24, FUNC_4( "mapname" ), sizeof( VAR_24 ) );

  FUNC_12( VAR_24, VAR_13 );
  return;
 }



 VAR_18.snapFlagServerBit ^= VAR_7;



 VAR_15.serverId = VAR_10;
 FUNC_3( "sv_serverid", FUNC_16("%i", VAR_15.serverId ) );




 VAR_15.state = VAR_9;
 VAR_15.restarting = VAR_14;

 FUNC_10();


 for ( VAR_19 = 0 ;VAR_19 < 3 ; VAR_19++ ) {
  FUNC_13( VAR_12, VAR_4, VAR_18.time );
  VAR_18.time += 100;
 }

 VAR_15.state = VAR_8;
 VAR_15.restarting = VAR_13;


 for (VAR_19=0 ; VAR_19<VAR_17->integer ; VAR_19++) {
  VAR_20 = &VAR_18.clients[VAR_19];


  if ( VAR_20->state < VAR_1) {
   continue;
  }

  if ( VAR_20->netchan.remoteAddress.type == VAR_6 ) {
   VAR_22 = VAR_14;
  } else {
   VAR_22 = VAR_13;
  }


  FUNC_7( VAR_20, "map_restart\n" );


  VAR_21 = FUNC_14( VAR_12, FUNC_13( VAR_12, VAR_3, VAR_19, VAR_13, VAR_22 ) );
  if ( VAR_21 ) {


   FUNC_9( VAR_20, VAR_21 );
   FUNC_2( "SV_MapRestart_f(%d): dropped client %i - denied!\n", VAR_23, VAR_19 );
   continue;
  }

  VAR_20->state = VAR_0;

  FUNC_8( VAR_20, &VAR_20->lastUsercmd );
 }


 FUNC_13( VAR_12, VAR_4, VAR_18.time );
 VAR_18.time += 100;
}
