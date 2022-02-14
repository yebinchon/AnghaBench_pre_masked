
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ menu_content_show_playlists; } ;
struct TYPE_12__ {char* directory_playlist; } ;
struct TYPE_14__ {TYPE_2__ bools; TYPE_1__ paths; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_15__ {int horizontal_list; } ;
typedef TYPE_4__ ozone_handle_t ;
struct TYPE_16__ {void* path; int enum_idx; int type_default; void* exts; void* label; int list; } ;
typedef TYPE_5__ menu_displaylist_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 char* FUNC_5 (int ) ;
 void* FUNC_6 (char*) ;
 int FUNC_7 (void*) ;

void FUNC_8(ozone_handle_t *VAR_3)
{
   menu_displaylist_info_t VAR_4;
   settings_t *VAR_5 = FUNC_0();

   FUNC_3(&VAR_4);

   VAR_4.list = VAR_3->horizontal_list;
   VAR_4.path = FUNC_6(
         VAR_5->paths.directory_playlist);
   VAR_4.label = FUNC_6(
         FUNC_5(VAR_2));
   VAR_4.exts = FUNC_6("lpl");
   VAR_4.type_default = VAR_1;
   VAR_4.enum_idx = VAR_2;

   if (VAR_5->bools.menu_content_show_playlists && !FUNC_7(VAR_4.path))
   {
      if (FUNC_1(VAR_0, &VAR_4))
         FUNC_4(&VAR_4);
   }

   FUNC_2(&VAR_4);
}
