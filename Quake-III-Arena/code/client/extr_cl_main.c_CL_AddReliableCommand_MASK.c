
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reliableSequence; int reliableAcknowledge; int * reliableCommands; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char const*,int) ;
 TYPE_1__ VAR_2 ;

void FUNC_2( const char *VAR_3 ) {
 int VAR_4;



 if ( VAR_2.reliableSequence - VAR_2.reliableAcknowledge > VAR_1 ) {
  FUNC_0( VAR_0, "Client command overflow" );
 }
 VAR_2.reliableSequence++;
 VAR_4 = VAR_2.reliableSequence & ( VAR_1 - 1 );
 FUNC_1( VAR_2.reliableCommands[ VAR_4 ], VAR_3, sizeof( VAR_2.reliableCommands[ VAR_4 ] ) );
}
