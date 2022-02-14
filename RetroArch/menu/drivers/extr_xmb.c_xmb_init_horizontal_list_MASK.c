
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {TYPE_3__* horizontal_list; } ;
typedef TYPE_4__ xmb_handle_t ;
struct TYPE_15__ {scalar_t__ menu_content_show_playlists; } ;
struct TYPE_14__ {char* directory_playlist; } ;
struct TYPE_18__ {TYPE_2__ bools; TYPE_1__ paths; } ;
typedef TYPE_5__ settings_t ;
struct TYPE_19__ {void* path; int enum_idx; int type_default; void* exts; void* label; TYPE_3__* list; } ;
typedef TYPE_6__ menu_displaylist_info_t ;
struct TYPE_16__ {size_t size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 char* FUNC_5 (int ) ;
 void* FUNC_6 (char*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (TYPE_4__*,unsigned int) ;

__attribute__((used)) static void FUNC_9(xmb_handle_t *VAR_3)
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
      {
         size_t VAR_6;
         for (VAR_6 = 0; VAR_6 < VAR_3->horizontal_list->size; VAR_6++)
            FUNC_8(VAR_3, (unsigned)VAR_6);
         FUNC_4(&VAR_4);
      }
   }

   FUNC_2(&VAR_4);
}
