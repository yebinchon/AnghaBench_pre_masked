
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ logFile; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__) ;

void FUNC_6( int VAR_1 ) {
 FUNC_2 ("==== ShutdownGame ====\n");

 if ( VAR_0.logFile ) {
  FUNC_1("ShutdownGame:\n" );
  FUNC_1("------------------------------------------------------------\n" );
  FUNC_5( VAR_0.logFile );
 }


 FUNC_3();

 if ( FUNC_4( "bot_enable" ) ) {
  FUNC_0( VAR_1 );
 }
}
