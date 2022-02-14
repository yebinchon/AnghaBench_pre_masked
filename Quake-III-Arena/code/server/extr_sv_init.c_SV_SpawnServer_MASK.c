
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int systemInfo ;
struct TYPE_18__ {int number; } ;
struct TYPE_19__ {TYPE_3__ s; } ;
typedef TYPE_4__ sharedEntity_t ;
typedef void* qboolean ;
typedef int entityState_t ;
struct TYPE_16__ {scalar_t__ type; } ;
struct TYPE_17__ {TYPE_1__ remoteAddress; } ;
struct TYPE_20__ {scalar_t__ state; int deltaMessage; int nextSnapshotTime; TYPE_4__* gentity; TYPE_2__ netchan; } ;
typedef TYPE_5__ client_t ;
struct TYPE_24__ {void* modified; } ;
struct TYPE_23__ {int integer; scalar_t__ modified; } ;
struct TYPE_22__ {scalar_t__ integer; } ;
struct TYPE_21__ {int numSnapshotEntities; int time; TYPE_5__* clients; int snapFlagServerBit; scalar_t__ nextSnapshotEntities; int snapshotEntities; } ;
struct TYPE_15__ {scalar_t__ integer; } ;
struct TYPE_14__ {int checksumFeed; int serverId; int restartedServerId; int checksumFeedServerId; int state; int * configstrings; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char const*,void*,int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ) ;
 char* FUNC_12 () ;
 char* FUNC_13 () ;
 char* FUNC_14 () ;
 char* FUNC_15 () ;
 int FUNC_16 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_17 (int,int ) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_20 (char*,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_21 (int) ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 int FUNC_26 (TYPE_5__*,char*) ;
 TYPE_4__* FUNC_27 (int) ;
 int FUNC_28 () ;
 int FUNC_29 () ;
 int FUNC_30 (int ,char*) ;
 int FUNC_31 () ;
 int FUNC_32 () ;
 int FUNC_33 () ;
 int FUNC_34 (int ,int ,int,...) ;
 char* FUNC_35 (int ,int ) ;
 TYPE_11__* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int FUNC_36 () ;
 int FUNC_37 (int) ;
 scalar_t__ FUNC_38 (char const*) ;
 TYPE_10__ VAR_21 ;
 TYPE_9__* VAR_22 ;
 TYPE_8__* VAR_23 ;
 TYPE_7__* VAR_24 ;
 TYPE_6__ VAR_25 ;
 char const* FUNC_39 (char*,...) ;

void FUNC_40( char *VAR_26, qboolean VAR_27 ) {
 int VAR_28;
 int VAR_29;
 qboolean VAR_30;
 char VAR_31[16384];
 const char *VAR_32;


 FUNC_31();

 FUNC_5 ("------ Server Initialization ------\n");
 FUNC_5 ("Server: %s\n",VAR_26);



 FUNC_0();


 FUNC_1();


 FUNC_18();


 FUNC_2();


 if ( !FUNC_10("sv_running") ) {
  FUNC_32();
 } else {

  if ( VAR_23->modified ) {
   FUNC_22();
  }
 }


 FUNC_11(0);


 VAR_25.snapshotEntities = FUNC_17( sizeof(entityState_t)*VAR_25.numSnapshotEntities, VAR_18 );
 VAR_25.nextSnapshotEntities = 0;



 VAR_25.snapFlagServerBit ^= VAR_11;



 FUNC_9( "nextmap", "map_restart 0");



 FUNC_23();
 for ( VAR_28 = 0 ; VAR_28 < VAR_9 ; VAR_28++ ) {
  VAR_21.configstrings[VAR_28] = FUNC_6("");
 }


 FUNC_9("cl_paused", "0");


 FUNC_37(FUNC_4());
 VAR_21.checksumFeed = ( ((int) FUNC_36() << 16) ^ FUNC_36() ) ^ FUNC_4();
 FUNC_16( VAR_21.checksumFeed );

 FUNC_3( FUNC_39("maps/%s.bsp", VAR_26), VAR_19, &VAR_29 );


 FUNC_9( "mapname", VAR_26 );

 FUNC_9( "sv_mapChecksum", FUNC_39("%i",VAR_29) );


 VAR_21.serverId = VAR_15;
 VAR_21.restartedServerId = VAR_21.serverId;
 VAR_21.checksumFeedServerId = VAR_21.serverId;
 FUNC_9( "sv_serverid", FUNC_39("%i", VAR_21.serverId ) );


 FUNC_24 ();




 VAR_21.state = VAR_13;


 FUNC_29();


 VAR_22->modified = VAR_19;


 for ( VAR_28 = 0 ;VAR_28 < 3 ; VAR_28++ ) {
  FUNC_34( VAR_17, VAR_8, VAR_25.time );
  FUNC_21( VAR_25.time );
  VAR_25.time += 100;
 }


 FUNC_25 ();

 for (VAR_28=0 ; VAR_28<VAR_23->integer ; VAR_28++) {

  if (VAR_25.clients[VAR_28].state >= VAR_1) {
   char *VAR_33;

   if ( VAR_25.clients[VAR_28].netchan.remoteAddress.type == VAR_10 ) {
    if ( VAR_27 ) {
     FUNC_26( &VAR_25.clients[VAR_28], "" );
     continue;
    }
    VAR_30 = VAR_20;
   }
   else {
    VAR_30 = VAR_19;
   }


   VAR_33 = FUNC_35( VAR_17, FUNC_34( VAR_17, VAR_7, VAR_28, VAR_19, VAR_30 ) );
   if ( VAR_33 ) {


    FUNC_26( &VAR_25.clients[VAR_28], VAR_33 );
   } else {
    if( !VAR_30 ) {


     VAR_25.clients[VAR_28].state = VAR_1;
    }
    else {
     client_t *VAR_34;
     sharedEntity_t *VAR_35;

     VAR_34 = &VAR_25.clients[VAR_28];
     VAR_34->state = VAR_0;
     VAR_35 = FUNC_27( VAR_28 );
     VAR_35->s.number = VAR_28;
     VAR_34->gentity = VAR_35;

     VAR_34->deltaMessage = -1;
     VAR_34->nextSnapshotTime = VAR_25.time;

     FUNC_34( VAR_17, VAR_6, VAR_28 );
    }
   }
  }
 }


 FUNC_34( VAR_17, VAR_8, VAR_25.time );
 FUNC_21( VAR_25.time );
 VAR_25.time += 100;

 if ( VAR_24->integer ) {


  VAR_32 = FUNC_12();
  FUNC_9( "sv_paks", VAR_32 );
  if (FUNC_38(VAR_32) == 0) {
   FUNC_5( "WARNING: sv_pure set but no PK3 files loaded\n" );
  }
  VAR_32 = FUNC_13();
  FUNC_9( "sv_pakNames", VAR_32 );



  if ( VAR_14->integer ) {
   FUNC_33();
  }
 }
 else {
  FUNC_9( "sv_paks", "" );
  FUNC_9( "sv_pakNames", "" );
 }


 VAR_32 = FUNC_14();
 FUNC_9( "sv_referencedPaks", VAR_32 );
 VAR_32 = FUNC_15();
 FUNC_9( "sv_referencedPakNames", VAR_32 );


 FUNC_20( VAR_31, FUNC_8( VAR_5 ), sizeof( VAR_31 ) );
 VAR_16 &= ~VAR_5;
 FUNC_30( VAR_3, VAR_31 );

 FUNC_30( VAR_2, FUNC_7( VAR_4 ) );
 VAR_16 &= ~VAR_4;




 VAR_21.state = VAR_12;


 FUNC_28();

 FUNC_19();

 FUNC_5 ("-----------------------------------\n");
}
