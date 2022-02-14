
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pingtime; int gametype; int gamename; void* nettype; void* bPB; void* maxPing; void* minPing; void* maxclients; void* numclients; int mapname; int hostname; int adrstr; } ;
typedef TYPE_1__ servernode_t ;
struct TYPE_4__ {scalar_t__* numservers; scalar_t__ maxservers; TYPE_1__* serverlist; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 char* FUNC_1 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (char*) ;
 TYPE_2__ VAR_4 ;
 scalar_t__ VAR_5 ;
 char** VAR_6 ;

__attribute__((used)) static void FUNC_6( char* VAR_7, char* VAR_8, int VAR_9 )
{
 servernode_t* VAR_10;
 char* VAR_11;
 int VAR_12;


 if ((VAR_9 >= FUNC_0()) && (VAR_5 != VAR_0))
 {

  return;
 }

 if (*VAR_4.numservers >= VAR_4.maxservers) {

  VAR_10 = VAR_4.serverlist+(*VAR_4.numservers)-1;
 } else {

  VAR_10 = VAR_4.serverlist+(*VAR_4.numservers);
  (*VAR_4.numservers)++;
 }

 FUNC_3( VAR_10->adrstr, VAR_7, VAR_1 );

 FUNC_3( VAR_10->hostname, FUNC_1( VAR_8, "hostname"), VAR_2 );
 FUNC_2( VAR_10->hostname );
 FUNC_4( VAR_10->hostname );

 FUNC_3( VAR_10->mapname, FUNC_1( VAR_8, "mapname"), VAR_3 );
 FUNC_2( VAR_10->mapname );
 FUNC_4( VAR_10->mapname );

 VAR_10->numclients = FUNC_5( FUNC_1( VAR_8, "clients") );
 VAR_10->maxclients = FUNC_5( FUNC_1( VAR_8, "sv_maxclients") );
 VAR_10->pingtime = VAR_9;
 VAR_10->minPing = FUNC_5( FUNC_1( VAR_8, "minPing") );
 VAR_10->maxPing = FUNC_5( FUNC_1( VAR_8, "maxPing") );
 VAR_10->bPB = FUNC_5( FUNC_1( VAR_8, "punkbuster") );
 VAR_10->nettype = FUNC_5(FUNC_1(VAR_8, "nettype"));

 VAR_11 = FUNC_1( VAR_8, "game");
 VAR_12 = FUNC_5( FUNC_1( VAR_8, "gametype") );
 if( VAR_12 < 0 ) {
  VAR_12 = 0;
 }
 else if( VAR_12 > 11 ) {
  VAR_12 = 12;
 }
 if( *VAR_11 ) {
  VAR_10->gametype = VAR_12;
  FUNC_3( VAR_10->gamename, VAR_11, sizeof(VAR_10->gamename) );
 }
 else {
  VAR_10->gametype = VAR_12;
  FUNC_3( VAR_10->gamename, VAR_6[VAR_12], sizeof(VAR_10->gamename) );
 }
}
