
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct retro_system_info {char* library_name; } ;
struct TYPE_8__ {char const* path_cheat_database; } ;
struct TYPE_9__ {TYPE_2__ paths; } ;
typedef TYPE_3__ settings_t ;
typedef int s1 ;
struct TYPE_7__ {int cheatfile; } ;
struct TYPE_10__ {TYPE_1__ name; } ;
typedef TYPE_4__ global_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (struct retro_system_info*) ;
 int FUNC_2 (char*,char*,char const*,size_t) ;
 TYPE_4__* FUNC_3 () ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static bool FUNC_8(
      char *VAR_1, size_t VAR_2,
      bool VAR_3)
{
   char VAR_4[VAR_0];
   struct retro_system_info VAR_5;
   settings_t *VAR_6 = FUNC_0();
   global_t *VAR_7 = FUNC_3();
   const char *VAR_8 = ((void*)0);
   const char *VAR_9 = ((void*)0);

   VAR_4[0] = '\0';

   if (!VAR_6 || !VAR_7)
      return 0;

   if (!FUNC_1(&VAR_5))
      return 0;

   VAR_8 = VAR_5.library_name;
   VAR_9 = FUNC_4(VAR_7->name.cheatfile);

   if (FUNC_7(VAR_6->paths.path_cheat_database) ||
         FUNC_7(VAR_8) ||
         FUNC_7(VAR_9))
      return 0;

   VAR_1[0] = '\0';

   FUNC_2(VAR_4,
         VAR_6->paths.path_cheat_database, VAR_8,
         sizeof(VAR_4));

   if (VAR_3)
   {

      if (!FUNC_5(VAR_4))
         FUNC_6(VAR_4);
   }

   FUNC_2(VAR_1, VAR_4, VAR_9, VAR_2);

   return 1;
}
