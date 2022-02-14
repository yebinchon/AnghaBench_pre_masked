
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int reliableSequence; int reliableAcknowledge; char const** reliableCommands; } ;
typedef TYPE_1__ client_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char const*,char const*,int) ;
 int FUNC_2 (TYPE_1__*,char*) ;

void FUNC_3( client_t *VAR_1, const char *VAR_2 ) {
 int VAR_3, VAR_4;







 VAR_1->reliableSequence++;




 if ( VAR_1->reliableSequence - VAR_1->reliableAcknowledge == VAR_0 + 1 ) {
  FUNC_0( "===== pending server commands =====\n" );
  for ( VAR_4 = VAR_1->reliableAcknowledge + 1 ; VAR_4 <= VAR_1->reliableSequence ; VAR_4++ ) {
   FUNC_0( "cmd %5d: %s\n", VAR_4, VAR_1->reliableCommands[ VAR_4 & (VAR_0-1) ] );
  }
  FUNC_0( "cmd %5d: %s\n", VAR_4, VAR_2 );
  FUNC_2( VAR_1, "Server command overflow" );
  return;
 }
 VAR_3 = VAR_1->reliableSequence & ( VAR_0 - 1 );
 FUNC_1( VAR_1->reliableCommands[ VAR_3 ], VAR_2, sizeof( VAR_1->reliableCommands[ VAR_3 ] ) );
}
