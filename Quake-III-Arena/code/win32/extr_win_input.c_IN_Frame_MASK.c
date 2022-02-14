
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int keyCatchers; } ;
struct TYPE_5__ {scalar_t__ hWnd; } ;
struct TYPE_4__ {scalar_t__ mouseStartupDelayed; int mouseInitialized; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 scalar_t__ FUNC_8 (int ,int ) ;

void FUNC_9 (void) {

 FUNC_5();

 if ( !VAR_6.mouseInitialized ) {
    if (VAR_6.mouseStartupDelayed && VAR_3.hWnd)
  {
   FUNC_0("Proceeding with delayed mouse init\n");
      FUNC_7();
   VAR_6.mouseStartupDelayed = VAR_5;
  }
  return;
 }

 if ( VAR_2.keyCatchers & VAR_0 ) {



  if (FUNC_2 ("r_fullscreen") == 0
   && FUNC_8( FUNC_1("r_glDriver"), VAR_1) ) {
   FUNC_4 ();
   return;
  }
 }

 if ( !VAR_4 ) {
  FUNC_4 ();
  return;
 }

 FUNC_3();


 FUNC_6();

}
