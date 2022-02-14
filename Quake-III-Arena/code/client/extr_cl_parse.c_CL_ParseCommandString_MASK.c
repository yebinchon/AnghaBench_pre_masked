
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int msg_t ;
struct TYPE_2__ {int serverCommandSequence; int * serverCommands; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int) ;
 TYPE_1__ VAR_1 ;

void FUNC_3( msg_t *VAR_2 ) {
 char *VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0( VAR_2 );
 VAR_3 = FUNC_1( VAR_2 );


 if ( VAR_1.serverCommandSequence >= VAR_4 ) {
  return;
 }
 VAR_1.serverCommandSequence = VAR_4;

 VAR_5 = VAR_4 & (VAR_0-1);
 FUNC_2( VAR_1.serverCommands[ VAR_5 ], VAR_3, sizeof( VAR_1.serverCommands[ VAR_5 ] ) );
}
