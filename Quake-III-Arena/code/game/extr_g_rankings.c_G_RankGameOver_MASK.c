
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int str ;
struct TYPE_2__ {scalar_t__ warmupTime; int maxclients; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_1__ VAR_14 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int,int,int ,int,int ) ;
 int FUNC_4 (int,int,int ,char*) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6( void )
{
 int VAR_15;
 char VAR_16[VAR_0];
 int VAR_17;

 if( VAR_14.warmupTime != 0 )
 {

  return;
 }

 for( VAR_15 = 0; VAR_15 < VAR_14.maxclients; VAR_15++ )
 {
  if( FUNC_5( VAR_15 ) == VAR_13 )
  {
   FUNC_0( VAR_15 );
  }
 }


 FUNC_2( "sv_hostname", VAR_16, sizeof(VAR_16) );
 FUNC_4( -1, -1, VAR_4, VAR_16 );


 FUNC_2( "mapname", VAR_16, sizeof(VAR_16) );
 FUNC_4( -1, -1, VAR_5, VAR_16 );


 FUNC_2( "fs_game", VAR_16, sizeof(VAR_16) );
 FUNC_4( -1, -1, VAR_10, VAR_16 );


 VAR_17 = FUNC_1("g_gametype");
 FUNC_3( -1, -1, VAR_3, VAR_17, 0 );


 VAR_17 = FUNC_1("fraglimit");
 FUNC_3( -1, -1, VAR_2, VAR_17, 0 );


 VAR_17 = FUNC_1("timelimit");
 FUNC_3( -1, -1, VAR_11, VAR_17, 0 );


 VAR_17 = FUNC_1("sv_maxclients");
 FUNC_3( -1, -1, VAR_6, VAR_17, 0 );


 VAR_17 = FUNC_1("sv_maxRate");
 FUNC_3( -1, -1, VAR_8, VAR_17, 0 );


 VAR_17 = FUNC_1("sv_minPing");
 FUNC_3( -1, -1, VAR_9, VAR_17, 0 );


 VAR_17 = FUNC_1("sv_maxPing");
 FUNC_3( -1, -1, VAR_7, VAR_17, 0 );


 VAR_17 = FUNC_1("dedicated");
 FUNC_3( -1, -1, VAR_1, VAR_17, 0 );


 FUNC_2( "version", VAR_16, sizeof(VAR_16) );
 FUNC_4( -1, -1, VAR_12, VAR_16 );
}
