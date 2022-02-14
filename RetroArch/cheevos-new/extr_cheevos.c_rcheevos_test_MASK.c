
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cheevos_leaderboards_enable; scalar_t__ cheevos_hardcore_mode_enable; scalar_t__ cheevos_test_unofficial; } ;
struct TYPE_5__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;


 TYPE_2__* FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;

void FUNC_3(void)
{
   settings_t *VAR_1 = FUNC_0();

   FUNC_1(1);

   if (VAR_1)
   {
      if (VAR_1->bools.cheevos_test_unofficial)
         FUNC_1(0);

      if (VAR_1->bools.cheevos_hardcore_mode_enable &&
          VAR_1->bools.cheevos_leaderboards_enable &&
          !VAR_0)
         FUNC_2();
   }
}
