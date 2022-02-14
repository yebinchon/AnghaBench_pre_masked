
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* string; } ;
typedef TYPE_1__ cvar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 () ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_4( void ) {

 cvar_t *VAR_6;



 if ( !VAR_4 ) {
  return;
 }

 if ( !(VAR_5 & VAR_0 ) ) {
  return;
 }
 VAR_5 &= ~VAR_0;

 FUNC_1( "q3config.cfg" );



 VAR_6 = FUNC_2 ("fs_game", "", VAR_1|VAR_2 );
 if (FUNC_3() && VAR_6 && VAR_6->string[0] != 0) {
  FUNC_0( VAR_6->string, &VAR_3[16] );
 } else {
  FUNC_0( "baseq3", VAR_3 );
 }

}
