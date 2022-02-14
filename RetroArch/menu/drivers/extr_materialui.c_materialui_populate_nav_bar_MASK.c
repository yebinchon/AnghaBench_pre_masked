
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ menu_content_show_playlists; } ;
struct TYPE_15__ {TYPE_3__ bools; } ;
typedef TYPE_6__ settings_t ;
typedef int menu_handle_t ;
struct TYPE_11__ {int enabled; } ;
struct TYPE_10__ {int enabled; } ;
struct TYPE_14__ {unsigned int last_active_menu_tab_index; unsigned int active_menu_tab_index; unsigned int num_menu_tabs; TYPE_4__* menu_tabs; TYPE_2__ resume_tab; TYPE_1__ back_tab; } ;
struct TYPE_16__ {TYPE_5__ nav_bar; } ;
typedef TYPE_7__ materialui_handle_t ;
struct TYPE_13__ {void* active; int texture_index; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 void* FUNC_4 (char const*,int ) ;

__attribute__((used)) static void FUNC_5(
      materialui_handle_t *VAR_11, const char *VAR_12, settings_t *VAR_13)
{
   menu_handle_t *VAR_14 = FUNC_0();
   unsigned VAR_15 = 0;
   bool VAR_16 = 0;


   VAR_11->nav_bar.last_active_menu_tab_index = VAR_11->nav_bar.active_menu_tab_index;


   VAR_11->nav_bar.back_tab.enabled = FUNC_1(VAR_0, ((void*)0));





   VAR_11->nav_bar.resume_tab.enabled = !FUNC_3(VAR_10, ((void*)0));




   VAR_11->nav_bar.menu_tabs[VAR_15].type =
         VAR_4;
   VAR_11->nav_bar.menu_tabs[VAR_15].texture_index =
         VAR_7;
   VAR_11->nav_bar.menu_tabs[VAR_15].active =
         FUNC_4(VAR_12, FUNC_2(VAR_1));

   if(VAR_11->nav_bar.menu_tabs[VAR_15].active)
      VAR_11->nav_bar.active_menu_tab_index = VAR_15;

   VAR_15++;


   if (VAR_13->bools.menu_content_show_playlists)
   {
      VAR_11->nav_bar.menu_tabs[VAR_15].type =
            VAR_5;
      VAR_11->nav_bar.menu_tabs[VAR_15].texture_index =
            VAR_8;
      VAR_11->nav_bar.menu_tabs[VAR_15].active =
            FUNC_4(VAR_12, FUNC_2(VAR_2));

      if(VAR_11->nav_bar.menu_tabs[VAR_15].active)
         VAR_11->nav_bar.active_menu_tab_index = VAR_15;

      VAR_15++;
   }


   VAR_11->nav_bar.menu_tabs[VAR_15].type =
         VAR_6;
   VAR_11->nav_bar.menu_tabs[VAR_15].texture_index =
         VAR_9;
   VAR_11->nav_bar.menu_tabs[VAR_15].active =
         FUNC_4(VAR_12, FUNC_2(VAR_3));

   if(VAR_11->nav_bar.menu_tabs[VAR_15].active)
      VAR_11->nav_bar.active_menu_tab_index = VAR_15;

   VAR_15++;


   VAR_11->nav_bar.num_menu_tabs = VAR_15;
}
