
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ apply_cheats_after_load; } ;
struct TYPE_5__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(void)
{
   settings_t *VAR_3 = VAR_2;
   bool VAR_4 = 1;





   VAR_4 &= !(VAR_1 != ((void*)0));

   if (!VAR_4)
      return;

   FUNC_0();
   FUNC_2();

   if (VAR_3 && VAR_3->bools.apply_cheats_after_load)
      FUNC_1();
}
