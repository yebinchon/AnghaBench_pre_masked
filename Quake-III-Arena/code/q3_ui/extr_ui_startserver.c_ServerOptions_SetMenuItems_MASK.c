
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_29__ {int buffer; } ;
struct TYPE_30__ {TYPE_8__ field; } ;
struct TYPE_28__ {int curvalue; } ;
struct TYPE_26__ {char* buffer; } ;
struct TYPE_27__ {TYPE_5__ field; } ;
struct TYPE_24__ {char* buffer; } ;
struct TYPE_25__ {TYPE_3__ field; } ;
struct TYPE_22__ {char* buffer; } ;
struct TYPE_23__ {TYPE_1__ field; } ;
struct TYPE_17__ {char* name; } ;
struct TYPE_18__ {TYPE_11__ generic; } ;
struct TYPE_16__ {scalar_t__ curvalue; } ;
struct TYPE_21__ {int gametype; int mapnamebuffer; TYPE_12__ mappic; TYPE_10__ pure; TYPE_9__ hostname; TYPE_7__ friendlyfire; TYPE_6__ timelimit; TYPE_4__ flaglimit; TYPE_2__ fraglimit; } ;
struct TYPE_19__ {int string; } ;
struct TYPE_20__ {int* maplist; size_t currentmap; TYPE_13__ mapname; } ;


 scalar_t__ FUNC_0 (int ,int,int ) ;
 int FUNC_1 (char*,int,char*,int) ;




 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 TYPE_15__ VAR_0 ;
 TYPE_14__ VAR_1 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10( void ) {
 static char VAR_2[64];

 switch( VAR_0.gametype ) {
 case 130:
 default:
  FUNC_1( VAR_0.fraglimit.field.buffer, 4, "%i", (int)FUNC_0( 0, 999, FUNC_9( "ui_ffa_fraglimit" ) ) );
  FUNC_1( VAR_0.timelimit.field.buffer, 4, "%i", (int)FUNC_0( 0, 999, FUNC_9( "ui_ffa_timelimit" ) ) );
  break;

 case 128:
  FUNC_1( VAR_0.fraglimit.field.buffer, 4, "%i", (int)FUNC_0( 0, 999, FUNC_9( "ui_tourney_fraglimit" ) ) );
  FUNC_1( VAR_0.timelimit.field.buffer, 4, "%i", (int)FUNC_0( 0, 999, FUNC_9( "ui_tourney_timelimit" ) ) );
  break;

 case 129:
  FUNC_1( VAR_0.fraglimit.field.buffer, 4, "%i", (int)FUNC_0( 0, 999, FUNC_9( "ui_team_fraglimit" ) ) );
  FUNC_1( VAR_0.timelimit.field.buffer, 4, "%i", (int)FUNC_0( 0, 999, FUNC_9( "ui_team_timelimit" ) ) );
  VAR_0.friendlyfire.curvalue = (int)FUNC_0( 0, 1, FUNC_9( "ui_team_friendly" ) );
  break;

 case 131:
  FUNC_1( VAR_0.flaglimit.field.buffer, 4, "%i", (int)FUNC_0( 0, 100, FUNC_9( "ui_ctf_capturelimit" ) ) );
  FUNC_1( VAR_0.timelimit.field.buffer, 4, "%i", (int)FUNC_0( 0, 999, FUNC_9( "ui_ctf_timelimit" ) ) );
  VAR_0.friendlyfire.curvalue = (int)FUNC_0( 0, 1, FUNC_9( "ui_ctf_friendly" ) );
  break;
 }

 FUNC_2( VAR_0.hostname.field.buffer, FUNC_7( "sv_hostname" ), sizeof( VAR_0.hostname.field.buffer ) );
 VAR_0.pure.curvalue = FUNC_0( 0, 1, FUNC_9( "sv_pure" ) );


 FUNC_1( VAR_2, 64, "levelshots/%s", VAR_1.maplist[VAR_1.currentmap] );
 VAR_0.mappic.generic.name = VAR_2;


 FUNC_8( VAR_0.mapnamebuffer, VAR_1.mapname.string );
 FUNC_3( VAR_0.mapnamebuffer );


 FUNC_5();
 FUNC_6();


 FUNC_4();
 FUNC_6();
}
