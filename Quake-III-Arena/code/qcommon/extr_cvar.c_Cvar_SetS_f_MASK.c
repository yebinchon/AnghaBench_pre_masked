
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ cvar_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 () ;

void FUNC_5( void ) {
 cvar_t *VAR_1;

 if ( FUNC_0() != 3 ) {
  FUNC_2 ("usage: sets <variable> <value>\n");
  return;
 }
 FUNC_4();
 VAR_1 = FUNC_3( FUNC_1( 1 ) );
 if ( !VAR_1 ) {
  return;
 }
 VAR_1->flags |= VAR_0;
}
