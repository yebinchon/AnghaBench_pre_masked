
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reliableSequence; char** reliableCommands; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;

void FUNC_2( void ) {
 int VAR_3, VAR_4, VAR_5;

 VAR_3 = VAR_2.reliableSequence - (FUNC_0() * 5);
 VAR_4 = VAR_2.reliableSequence & ( VAR_0 - 1 );
 VAR_5 = FUNC_1(VAR_2.reliableCommands[ VAR_4 ]);
 if ( VAR_5 >= VAR_1 - 1 ) {
  VAR_5 = VAR_1 - 2;
 }
 VAR_2.reliableCommands[ VAR_4 ][ VAR_5 ] = '\n';
 VAR_2.reliableCommands[ VAR_4 ][ VAR_5+1 ] = '\0';
}
