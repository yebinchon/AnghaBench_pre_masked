
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int blueTeam; int redTeam; int mapname; void* maxclients; void* timelimit; void* capturelimit; void* fraglimit; void* teamflags; void* dmflags; void* gametype; } ;


 char* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,char*,char*) ;
 char* FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,int) ;
 void* FUNC_4 (char*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,void*) ;

void FUNC_7( void ) {
 const char *VAR_2;
 char *VAR_3;

 VAR_2 = FUNC_0( VAR_0 );
 VAR_1.gametype = FUNC_4( FUNC_2( VAR_2, "g_gametype" ) );
 FUNC_5("g_gametype", FUNC_6("%i", VAR_1.gametype));
 VAR_1.dmflags = FUNC_4( FUNC_2( VAR_2, "dmflags" ) );
 VAR_1.teamflags = FUNC_4( FUNC_2( VAR_2, "teamflags" ) );
 VAR_1.fraglimit = FUNC_4( FUNC_2( VAR_2, "fraglimit" ) );
 VAR_1.capturelimit = FUNC_4( FUNC_2( VAR_2, "capturelimit" ) );
 VAR_1.timelimit = FUNC_4( FUNC_2( VAR_2, "timelimit" ) );
 VAR_1.maxclients = FUNC_4( FUNC_2( VAR_2, "sv_maxclients" ) );
 VAR_3 = FUNC_2( VAR_2, "mapname" );
 FUNC_1( VAR_1.mapname, sizeof( VAR_1.mapname ), "maps/%s.bsp", VAR_3 );
 FUNC_3( VAR_1.redTeam, FUNC_2( VAR_2, "g_redTeam" ), sizeof(VAR_1.redTeam) );
 FUNC_5("g_redTeam", VAR_1.redTeam);
 FUNC_3( VAR_1.blueTeam, FUNC_2( VAR_2, "g_blueTeam" ), sizeof(VAR_1.blueTeam) );
 FUNC_5("g_blueTeam", VAR_1.blueTeam);
}
