
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_13__ {int zoom; int alpha; int icon; } ;
struct TYPE_23__ {int * list; } ;
struct TYPE_22__ {int zoom; int alpha; int icon; } ;
struct TYPE_21__ {int zoom; int alpha; int icon; } ;
struct TYPE_20__ {int zoom; int alpha; int icon; } ;
struct TYPE_19__ {int zoom; int alpha; int icon; } ;
struct TYPE_18__ {int zoom; int alpha; int icon; } ;
struct TYPE_17__ {int zoom; int alpha; int icon; } ;
struct TYPE_16__ {int zoom; int alpha; int icon; } ;
struct TYPE_15__ {int zoom; int alpha; int icon; } ;
struct TYPE_14__ {int categories_active_zoom; TYPE_10__ netplay_tab_node; int categories_active_alpha; TYPE_9__ textures; TYPE_8__ add_tab_node; TYPE_7__ images_tab_node; TYPE_6__ video_tab_node; TYPE_5__ music_tab_node; TYPE_4__ favorites_tab_node; TYPE_3__ history_tab_node; TYPE_2__ settings_tab_node; TYPE_1__ main_menu_node; } ;
typedef TYPE_11__ stripes_handle_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 unsigned int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char const*,int *,int ,int *,int *) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static void FUNC_3(
      stripes_handle_t *VAR_11, const char *VAR_12)
{
   unsigned VAR_13;

   for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++)
      FUNC_1(FUNC_2(VAR_13), VAR_12, &VAR_11->textures.list[VAR_13], VAR_10, ((void*)0), ((void*)0));

   FUNC_0();

   VAR_11->main_menu_node.icon = VAR_11->textures.list[VAR_5];
   VAR_11->main_menu_node.alpha = VAR_11->categories_active_alpha;
   VAR_11->main_menu_node.zoom = VAR_11->categories_active_zoom;

   VAR_11->settings_tab_node.icon = VAR_11->textures.list[VAR_9];
   VAR_11->settings_tab_node.alpha = VAR_11->categories_active_alpha;
   VAR_11->settings_tab_node.zoom = VAR_11->categories_active_zoom;

   VAR_11->history_tab_node.icon = VAR_11->textures.list[VAR_2];
   VAR_11->history_tab_node.alpha = VAR_11->categories_active_alpha;
   VAR_11->history_tab_node.zoom = VAR_11->categories_active_zoom;

   VAR_11->favorites_tab_node.icon = VAR_11->textures.list[VAR_1];
   VAR_11->favorites_tab_node.alpha = VAR_11->categories_active_alpha;
   VAR_11->favorites_tab_node.zoom = VAR_11->categories_active_zoom;

   VAR_11->music_tab_node.icon = VAR_11->textures.list[VAR_7];
   VAR_11->music_tab_node.alpha = VAR_11->categories_active_alpha;
   VAR_11->music_tab_node.zoom = VAR_11->categories_active_zoom;
   VAR_11->add_tab_node.icon = VAR_11->textures.list[VAR_0];
   VAR_11->add_tab_node.alpha = VAR_11->categories_active_alpha;
   VAR_11->add_tab_node.zoom = VAR_11->categories_active_zoom;






}
