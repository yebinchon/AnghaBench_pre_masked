
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* path_menu_wallpaper; } ;
struct TYPE_5__ {TYPE_1__ paths; } ;
typedef TYPE_2__ settings_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (char*,char const*,char*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (char*) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char*,int ,int ,int ,int *) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(const char *VAR_2)
{
   char *VAR_3 = ((void*)0);
   settings_t *VAR_4 = FUNC_0();
   const char *VAR_5 = VAR_4->paths.path_menu_wallpaper;

   if (!FUNC_6(VAR_5))
      VAR_3 = FUNC_5(VAR_5);
   else if (!FUNC_6(VAR_2))
   {
      VAR_3 = (char*)FUNC_3(VAR_0 * sizeof(char));
      VAR_3[0] = '\0';

      FUNC_1(VAR_3, VAR_2, "bg.png",
            VAR_0 * sizeof(char));
   }

   if (FUNC_4(VAR_3))
      FUNC_7(VAR_3,
            FUNC_8(), 0,
            VAR_1, ((void*)0));

   if (VAR_3)
      FUNC_2(VAR_3);
}
