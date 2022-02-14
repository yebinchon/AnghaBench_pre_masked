
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;
typedef int menuDef_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;

void FUNC_9( int VAR_2, qboolean VAR_3 ) {

  if (FUNC_0() > 0) {
    menuDef_t *VAR_4 = FUNC_1();
  if (VAR_4) {
   if (VAR_2 == VAR_1 && VAR_3 && !FUNC_3()) {
    FUNC_4();
   } else {
    FUNC_2(VAR_4, VAR_2, VAR_3 );
   }
  } else {
   FUNC_8( FUNC_7() & ~VAR_0 );
   FUNC_6();
   FUNC_5( "cl_paused", "0" );
  }
  }




}
