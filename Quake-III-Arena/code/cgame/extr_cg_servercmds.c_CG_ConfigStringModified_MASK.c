
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {void* intermissionStarted; } ;
struct TYPE_4__ {int voteNow; } ;
struct TYPE_5__ {scalar_t__ gametype; char redflag; char blueflag; char flagStatus; int * gameSounds; int * gameModels; TYPE_1__ media; int * teamVoteString; void** teamVoteModified; void** teamVoteNo; void** teamVoteYes; void** teamVoteTime; int voteString; void* voteModified; void* voteNo; void* voteYes; void* voteTime; void* levelStartTime; void* scores2; void* scores1; int gameState; } ;


 char const* FUNC_0 (int) ;
 int FUNC_1 () ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_8 (int ,char const*,int) ;
 void* FUNC_9 (char const*) ;
 TYPE_3__ VAR_25 ;
 TYPE_2__ VAR_26 ;
 int VAR_27 ;
 void* VAR_28 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (char const*,int ) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static void FUNC_14( void ) {
 const char *VAR_29;
 int VAR_30;

 VAR_30 = FUNC_9( FUNC_0( 1 ) );



 FUNC_10( &VAR_26.gameState );


 VAR_29 = FUNC_2( VAR_30 );


 if ( VAR_30 == VAR_5 ) {
  FUNC_7();
 } else if ( VAR_30 == VAR_9 ) {
  FUNC_4();
 } else if ( VAR_30 == VAR_20 ) {
  FUNC_5();
 } else if ( VAR_30 == VAR_7 ) {
  VAR_26.scores1 = FUNC_9( VAR_29 );
 } else if ( VAR_30 == VAR_8 ) {
  VAR_26.scores2 = FUNC_9( VAR_29 );
 } else if ( VAR_30 == VAR_3 ) {
  VAR_26.levelStartTime = FUNC_9( VAR_29 );
 } else if ( VAR_30 == VAR_18 ) {
  VAR_26.voteTime = FUNC_9( VAR_29 );
  VAR_26.voteModified = VAR_28;
 } else if ( VAR_30 == VAR_19 ) {
  VAR_26.voteYes = FUNC_9( VAR_29 );
  VAR_26.voteModified = VAR_28;
 } else if ( VAR_30 == VAR_16 ) {
  VAR_26.voteNo = FUNC_9( VAR_29 );
  VAR_26.voteModified = VAR_28;
 } else if ( VAR_30 == VAR_17 ) {
  FUNC_8( VAR_26.voteString, VAR_29, sizeof( VAR_26.voteString ) );



 } else if ( VAR_30 >= VAR_14 && VAR_30 <= VAR_14 + 1) {
  VAR_26.teamVoteTime[VAR_30-VAR_14] = FUNC_9( VAR_29 );
  VAR_26.teamVoteModified[VAR_30-VAR_14] = VAR_28;
 } else if ( VAR_30 >= VAR_15 && VAR_30 <= VAR_15 + 1) {
  VAR_26.teamVoteYes[VAR_30-VAR_15] = FUNC_9( VAR_29 );
  VAR_26.teamVoteModified[VAR_30-VAR_15] = VAR_28;
 } else if ( VAR_30 >= VAR_12 && VAR_30 <= VAR_12 + 1) {
  VAR_26.teamVoteNo[VAR_30-VAR_12] = FUNC_9( VAR_29 );
  VAR_26.teamVoteModified[VAR_30-VAR_12] = VAR_28;
 } else if ( VAR_30 >= VAR_13 && VAR_30 <= VAR_13 + 1) {
  FUNC_8( VAR_26.teamVoteString[VAR_30-VAR_13], VAR_29, sizeof( VAR_26.teamVoteString ) );



 } else if ( VAR_30 == VAR_2 ) {
  VAR_25.intermissionStarted = FUNC_9( VAR_29 );
 } else if ( VAR_30 >= VAR_4 && VAR_30 < VAR_4+VAR_24 ) {
  VAR_26.gameModels[ VAR_30-VAR_4 ] = FUNC_11( VAR_29 );
 } else if ( VAR_30 >= VAR_11 && VAR_30 < VAR_11+VAR_24 ) {
  if ( VAR_29[0] != '*' ) {
   VAR_26.gameSounds[ VAR_30-VAR_11] = FUNC_12( VAR_29, VAR_27 );
  }
 } else if ( VAR_30 >= VAR_6 && VAR_30 < VAR_6+VAR_23 ) {
  FUNC_3( VAR_30 - VAR_6 );
  FUNC_1();
 } else if ( VAR_30 == VAR_1 ) {
  if( VAR_26.gametype == VAR_22 ) {

   VAR_26.redflag = VAR_29[0] - '0';
   VAR_26.blueflag = VAR_29[1] - '0';
  }





 }
 else if ( VAR_30 == VAR_10 ) {
  FUNC_6();
 }

}
