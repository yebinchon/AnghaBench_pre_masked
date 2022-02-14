
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int path_cheat_database; } ;
struct TYPE_5__ {TYPE_1__ paths; } ;
typedef TYPE_2__ settings_t ;
typedef int rarch_setting_t ;


 int FUNC_0 (char const*,int ,int) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 () ;
 char* FUNC_3 () ;
 int * FUNC_4 (char const*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(
      void *VAR_0, const char *VAR_1)
{
   if (VAR_1 && *VAR_1)
   {
      rarch_setting_t *VAR_2 = ((void*)0);
      settings_t *VAR_3 = FUNC_1();
      const char *VAR_4 = FUNC_3();

      if (!FUNC_7(VAR_4))
         VAR_2 = FUNC_4(VAR_4);

      if (VAR_2)
      {
         FUNC_6(VAR_2, VAR_1);
         FUNC_5(VAR_2, 0);
      }
      else if (!FUNC_7(VAR_4))
         FUNC_0(VAR_1, VAR_3->paths.path_cheat_database,0);
   }

   FUNC_2();
}
