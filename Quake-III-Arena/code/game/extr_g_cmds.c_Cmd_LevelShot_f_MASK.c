
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int gentity_t ;
struct TYPE_2__ {scalar_t__ integer; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int *,char*) ;

void FUNC_3( gentity_t *VAR_2 ) {
 if ( !FUNC_1( VAR_2 ) ) {
  return;
 }


 if ( VAR_1.integer != 0 ) {
  FUNC_2( VAR_2-VAR_0,
   "print \"Must be in g_gametype 0 for levelshot\n\"" );
  return;
 }

 FUNC_0();
 FUNC_2( VAR_2-VAR_0, "clientLevelShot" );
}
