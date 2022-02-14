
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int need_sort; int need_refresh; int need_entries_refresh; int need_push_no_playlist_entries; int need_push; int need_clear; int push_builtin_cores; int download_core; int need_navigation_clear; int * setting; int * menu_list; int * list; int * exts; int * path_c; int * path_b; int * path; int * label; scalar_t__ directory_ptr; scalar_t__ flags; scalar_t__ type_default; scalar_t__ type; int enum_idx; } ;
typedef TYPE_1__ menu_displaylist_info_t ;


 int VAR_0 ;

void FUNC_0(menu_displaylist_info_t *VAR_1)
{
   if (!VAR_1)
      return;

   VAR_1->enum_idx = VAR_0;
   VAR_1->need_sort = 0;
   VAR_1->need_refresh = 0;
   VAR_1->need_entries_refresh = 0;
   VAR_1->need_push_no_playlist_entries = 0;
   VAR_1->need_push = 0;
   VAR_1->need_clear = 0;
   VAR_1->push_builtin_cores = 0;
   VAR_1->download_core = 0;
   VAR_1->need_navigation_clear = 0;
   VAR_1->type = 0;
   VAR_1->type_default = 0;
   VAR_1->flags = 0;
   VAR_1->directory_ptr = 0;
   VAR_1->label = ((void*)0);
   VAR_1->path = ((void*)0);
   VAR_1->path_b = ((void*)0);
   VAR_1->path_c = ((void*)0);
   VAR_1->exts = ((void*)0);
   VAR_1->list = ((void*)0);
   VAR_1->menu_list = ((void*)0);
   VAR_1->setting = ((void*)0);
}
