
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ voteExecuteTime; scalar_t__ time; scalar_t__ voteTime; int voteYes; int numVotingClients; int voteNo; int voteString; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int ) ;

void FUNC_4( void ) {
 if ( VAR_3.voteExecuteTime && VAR_3.voteExecuteTime < VAR_3.time ) {
  VAR_3.voteExecuteTime = 0;
  FUNC_0( VAR_1, FUNC_3("%s\n", VAR_3.voteString ) );
 }
 if ( !VAR_3.voteTime ) {
  return;
 }
 if ( VAR_3.time - VAR_3.voteTime >= VAR_2 ) {
  FUNC_1( -1, "print \"Vote failed.\n\"" );
 } else {

  if ( VAR_3.voteYes > VAR_3.numVotingClients/2 ) {

   FUNC_1( -1, "print \"Vote passed.\n\"" );
   VAR_3.voteExecuteTime = VAR_3.time + 3000;
  } else if ( VAR_3.voteNo >= VAR_3.numVotingClients/2 ) {

   FUNC_1( -1, "print \"Vote failed.\n\"" );
  } else {

   return;
  }
 }
 VAR_3.voteTime = 0;
 FUNC_2( VAR_0, "" );

}
