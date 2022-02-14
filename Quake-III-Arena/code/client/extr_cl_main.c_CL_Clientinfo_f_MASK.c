
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int servername; int state; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_1 ;

void FUNC_3( void ) {
 FUNC_0( "--------- Client Information ---------\n" );
 FUNC_0( "state: %i\n", VAR_1.state );
 FUNC_0( "Server: %s\n", VAR_1.servername );
 FUNC_0 ("User info settings:\n");
 FUNC_2( FUNC_1( VAR_0 ) );
 FUNC_0( "--------------------------------------\n" );
}
