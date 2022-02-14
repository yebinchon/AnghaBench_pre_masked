
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int path_menu_wallpaper; } ;
struct TYPE_5__ {TYPE_1__ paths; } ;
typedef TYPE_2__ settings_t ;
typedef int materialui_handle_t ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 () ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int ,int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(void *VAR_1, bool VAR_2)
{
   materialui_handle_t *VAR_3 = (materialui_handle_t*)VAR_1;
   settings_t *VAR_4 = FUNC_0();

   if (!VAR_3 || !VAR_4)
      return;

   FUNC_3(VAR_3, VAR_2);
   FUNC_1(VAR_3);
   FUNC_4();
   FUNC_2(VAR_3);

   if (FUNC_5(VAR_4->paths.path_menu_wallpaper))
      FUNC_6(VAR_4->paths.path_menu_wallpaper,
            FUNC_8(), 0,
            VAR_0, ((void*)0));

   FUNC_7();
}
