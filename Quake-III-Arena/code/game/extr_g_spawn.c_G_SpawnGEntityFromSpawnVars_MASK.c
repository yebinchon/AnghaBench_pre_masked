
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int currentOrigin; } ;
struct TYPE_11__ {int trBase; } ;
struct TYPE_12__ {int origin; TYPE_1__ pos; } ;
struct TYPE_14__ {TYPE_3__ r; TYPE_2__ s; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_16__ {size_t integer; } ;
struct TYPE_15__ {int numSpawnVars; int ** spawnVars; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ,TYPE_4__*) ;
 TYPE_4__* FUNC_3 () ;
 int FUNC_4 (char*,char*,int*) ;
 scalar_t__ FUNC_5 (char*,int *,char**) ;
 int FUNC_6 (int ,int ) ;
 TYPE_6__ VAR_4 ;
 TYPE_5__ VAR_5 ;
 char* FUNC_7 (char*,char*) ;

void FUNC_8( void ) {
 int VAR_6;
 gentity_t *VAR_7;
 char *VAR_8, *VAR_9, *VAR_10;
 static char *VAR_11[] = {"ffa", "tournament", "single", "team", "ctf", "oneflag", "obelisk", "harvester", "teamtournament"};


 VAR_7 = FUNC_3();

 for ( VAR_6 = 0 ; VAR_6 < VAR_5.numSpawnVars ; VAR_6++ ) {
  FUNC_2( VAR_5.spawnVars[VAR_6][0], VAR_5.spawnVars[VAR_6][1], VAR_7 );
 }


 if ( VAR_4.integer == VAR_2 ) {
  FUNC_4( "notsingle", "0", &VAR_6 );
  if ( VAR_6 ) {
   FUNC_1( VAR_7 );
   return;
  }
 }

 if ( VAR_4.integer >= VAR_3 ) {
  FUNC_4( "notteam", "0", &VAR_6 );
  if ( VAR_6 ) {
   FUNC_1( VAR_7 );
   return;
  }
 } else {
  FUNC_4( "notfree", "0", &VAR_6 );
  if ( VAR_6 ) {
   FUNC_1( VAR_7 );
   return;
  }
 }
 FUNC_4( "notq3a", "0", &VAR_6 );
 if ( VAR_6 ) {
  FUNC_1( VAR_7 );
  return;
 }


 if( FUNC_5( "gametype", ((void*)0), &VAR_9 ) ) {
  if( VAR_4.integer >= VAR_0 && VAR_4.integer < VAR_1 ) {
   VAR_10 = VAR_11[VAR_4.integer];

   VAR_8 = FUNC_7( VAR_9, VAR_10 );
   if( !VAR_8 ) {
    FUNC_1( VAR_7 );
    return;
   }
  }
 }


 FUNC_6( VAR_7->s.origin, VAR_7->s.pos.trBase );
 FUNC_6( VAR_7->s.origin, VAR_7->r.currentOrigin );


 if ( !FUNC_0( VAR_7 ) ) {
  FUNC_1( VAR_7 );
 }
}
