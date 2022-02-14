
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
 int FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (char*,char const*,char*,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 char* FUNC_7 (char const*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char*,int ,int ,int ,int *) ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(const char *VAR_2)
{
   char *VAR_3 = ((void*)0);
   settings_t *VAR_4 = FUNC_1();
   const char *VAR_5 = VAR_4->paths.path_menu_wallpaper;

   if (!FUNC_8(VAR_5))
      VAR_3 = FUNC_7(VAR_5);
   else if (!FUNC_8(VAR_2))
   {
      VAR_3 = (char*)FUNC_4(VAR_0 * sizeof(char));
      VAR_3[0] = '\0';

      FUNC_2(VAR_3, VAR_2, "bg.png",
            VAR_0 * sizeof(char));
   }

   if (FUNC_5(VAR_3))
      FUNC_9(VAR_3,
            FUNC_10(), 0,
            VAR_1, ((void*)0));






   if (VAR_3)
      FUNC_3(VAR_3);
}
