
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int symbols_inited; int (* retro_deinit ) () ;scalar_t__ inited; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(bool VAR_5)
{




   FUNC_0("Unloading game..\n");
   FUNC_2();

   FUNC_0("Unloading core..\n");

   FUNC_9(((void*)0));

   if (VAR_1.inited)
      VAR_1.retro_deinit();

   FUNC_0("Unloading core symbols..\n");
   FUNC_8(&VAR_1);
   VAR_1.symbols_inited = 0;

   if (VAR_5)
      FUNC_3(VAR_0);

   FUNC_1();
   FUNC_6();

   if ( VAR_3
         || VAR_2
         || VAR_4
      )
      FUNC_4(1);
}
