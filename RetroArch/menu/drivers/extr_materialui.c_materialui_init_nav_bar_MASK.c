
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int enabled; int texture_index; int type; } ;
struct TYPE_7__ {int enabled; int texture_index; int type; } ;
struct TYPE_10__ {int menu_navigation_wrapped; int location; scalar_t__ last_active_menu_tab_index; scalar_t__ active_menu_tab_index; scalar_t__ num_menu_tabs; TYPE_3__* menu_tabs; TYPE_2__ resume_tab; TYPE_1__ back_tab; } ;
struct TYPE_11__ {TYPE_4__ nav_bar; } ;
typedef TYPE_5__ materialui_handle_t ;
struct TYPE_9__ {int active; scalar_t__ texture_index; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(materialui_handle_t *VAR_7)
{


   unsigned VAR_8;


   VAR_7->nav_bar.back_tab.type = VAR_0;
   VAR_7->nav_bar.back_tab.texture_index = VAR_5;
   VAR_7->nav_bar.back_tab.enabled = 0;


   VAR_7->nav_bar.resume_tab.type = VAR_1;
   VAR_7->nav_bar.resume_tab.texture_index = VAR_6;
   VAR_7->nav_bar.resume_tab.enabled = 0;


   for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
   {
      VAR_7->nav_bar.menu_tabs[VAR_8].type = VAR_3;
      VAR_7->nav_bar.menu_tabs[VAR_8].texture_index = 0;
      VAR_7->nav_bar.menu_tabs[VAR_8].active = 0;
   }


   VAR_7->nav_bar.num_menu_tabs = 0;
   VAR_7->nav_bar.active_menu_tab_index = 0;
   VAR_7->nav_bar.last_active_menu_tab_index = 0;
   VAR_7->nav_bar.menu_navigation_wrapped = 0;
   VAR_7->nav_bar.location = VAR_2;
}
