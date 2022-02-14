
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_17__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int buf ;
struct TYPE_34__ {int curvalue; } ;
struct TYPE_33__ {int curvalue; } ;
struct TYPE_32__ {int curvalue; } ;
struct TYPE_30__ {int buffer; } ;
struct TYPE_31__ {TYPE_5__ field; } ;
struct TYPE_28__ {int buffer; } ;
struct TYPE_29__ {TYPE_3__ field; } ;
struct TYPE_26__ {int buffer; } ;
struct TYPE_27__ {TYPE_1__ field; } ;
struct TYPE_21__ {int curvalue; } ;
struct TYPE_19__ {int buffer; } ;
struct TYPE_20__ {TYPE_11__ field; } ;
struct TYPE_18__ {int curvalue; } ;
struct TYPE_25__ {char** playerNameBuffers; int gametype; TYPE_15__* playerTeam; TYPE_14__* playerType; TYPE_13__ punkbuster; TYPE_12__ hostname; TYPE_10__ botSkill; TYPE_9__ pure; TYPE_8__ friendlyfire; TYPE_7__ dedicated; TYPE_6__ flaglimit; TYPE_4__ fraglimit; TYPE_2__ timelimit; } ;
struct TYPE_24__ {size_t currentmap; int * maplist; } ;
struct TYPE_23__ {size_t curvalue; } ;
struct TYPE_22__ {int curvalue; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (char*,int,char*,char*,int,...) ;
 int VAR_0 ;




 int VAR_1 ;
 int FUNC_2 (int ) ;
 int * VAR_2 ;
 TYPE_17__ VAR_3 ;
 TYPE_16__ VAR_4 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int) ;
 char* FUNC_6 (char*,int ) ;

__attribute__((used)) static void FUNC_7( void ) {
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 char VAR_14[64];


 VAR_5 = FUNC_2( VAR_3.timelimit.field.buffer );
 VAR_6 = FUNC_2( VAR_3.fraglimit.field.buffer );
 VAR_10 = FUNC_2( VAR_3.flaglimit.field.buffer );
 VAR_8 = VAR_3.dedicated.curvalue;
 VAR_9 = VAR_3.friendlyfire.curvalue;
 VAR_11 = VAR_3.pure.curvalue;
 VAR_12 = VAR_3.botSkill.curvalue + 1;


 for( VAR_13 = 0, VAR_7 = 0; VAR_13 < VAR_1; VAR_13++ ) {
  if( VAR_3.playerType[VAR_13].curvalue == 2 ) {
   continue;
  }
  if( (VAR_3.playerType[VAR_13].curvalue == 1) && (VAR_3.playerNameBuffers[VAR_13][0] == 0) ) {
   continue;
  }
  VAR_7++;
 }

 switch( VAR_3.gametype ) {
 case 130:
 default:
  FUNC_5( "ui_ffa_fraglimit", VAR_6 );
  FUNC_5( "ui_ffa_timelimit", VAR_5 );
  break;

 case 128:
  FUNC_5( "ui_tourney_fraglimit", VAR_6 );
  FUNC_5( "ui_tourney_timelimit", VAR_5 );
  break;

 case 129:
  FUNC_5( "ui_team_fraglimit", VAR_6 );
  FUNC_5( "ui_team_timelimit", VAR_5 );
  FUNC_5( "ui_team_friendlt", VAR_9 );
  break;

 case 131:
  FUNC_5( "ui_ctf_fraglimit", VAR_6 );
  FUNC_5( "ui_ctf_timelimit", VAR_5 );
  FUNC_5( "ui_ctf_friendlt", VAR_9 );
  break;
 }

 FUNC_5( "sv_maxclients", FUNC_0( 0, 12, VAR_7 ) );
 FUNC_5( "dedicated", FUNC_0( 0, 2, VAR_8 ) );
 FUNC_5 ("timelimit", FUNC_0( 0, VAR_5, VAR_5 ) );
 FUNC_5 ("fraglimit", FUNC_0( 0, VAR_6, VAR_6 ) );
 FUNC_5 ("capturelimit", FUNC_0( 0, VAR_10, VAR_10 ) );
 FUNC_5( "g_friendlyfire", VAR_9 );
 FUNC_5( "sv_pure", VAR_11 );
 FUNC_4("sv_hostname", VAR_3.hostname.field.buffer );

 FUNC_5( "sv_punkbuster", VAR_3.punkbuster.curvalue );


 FUNC_3( VAR_0, FUNC_6( "wait ; wait ; map %s\n", VAR_4.maplist[VAR_4.currentmap] ) );


 FUNC_3( VAR_0, "wait 3\n" );
 for( VAR_13 = 1; VAR_13 < VAR_1; VAR_13++ ) {
  if( VAR_3.playerType[VAR_13].curvalue != 1 ) {
   continue;
  }
  if( VAR_3.playerNameBuffers[VAR_13][0] == 0 ) {
   continue;
  }
  if( VAR_3.playerNameBuffers[VAR_13][0] == '-' ) {
   continue;
  }
  if( VAR_3.gametype >= 129 ) {
   FUNC_1( VAR_14, sizeof(VAR_14), "addbot %s %i %s\n", VAR_3.playerNameBuffers[VAR_13], VAR_12,
    VAR_2[VAR_3.playerTeam[VAR_13].curvalue] );
  }
  else {
   FUNC_1( VAR_14, sizeof(VAR_14), "addbot %s %i\n", VAR_3.playerNameBuffers[VAR_13], VAR_12 );
  }
  FUNC_3( VAR_0, VAR_14 );
 }


 if( VAR_8 == 0 && VAR_3.gametype >= 129 ) {
  FUNC_3( VAR_0, FUNC_6( "wait 5; team %s\n", VAR_2[VAR_3.playerTeam[0].curvalue] ) );
 }
}
