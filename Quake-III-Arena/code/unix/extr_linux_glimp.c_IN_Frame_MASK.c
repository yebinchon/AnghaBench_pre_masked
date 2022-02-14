
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int keyCatchers; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_5 (int ,int ) ;

void FUNC_6 (void) {


  FUNC_4();

  if ( VAR_2.keyCatchers & VAR_0 )
  {



    if (FUNC_1 ("r_fullscreen") == 0
        && FUNC_5( FUNC_0("r_glDriver"), VAR_1 ) )
    {
      FUNC_3 ();
      return;
    }
  }

  FUNC_2();
}
