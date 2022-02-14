
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int network_on_demand_thumbnails; scalar_t__ menu_rgui_inline_thumbnails; } ;
struct TYPE_8__ {scalar_t__ menu_rgui_thumbnail_delay; } ;
struct TYPE_10__ {TYPE_2__ bools; TYPE_1__ uints; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_11__ {int entry_has_thumbnail; int entry_has_left_thumbnail; int thumbnail_load_pending; int thumbnail_load_trigger_time; int thumbnail_path_data; scalar_t__ is_playlist; scalar_t__ show_fs_thumbnail; } ;
typedef TYPE_4__ rgui_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_8(rgui_t *VAR_2, bool VAR_3)
{
   bool VAR_4 = 0;
   settings_t *VAR_5 = FUNC_0();

   if (!VAR_5)
      return;

   VAR_2->entry_has_thumbnail = 0;
   VAR_2->entry_has_left_thumbnail = 0;
   VAR_2->thumbnail_load_pending = 0;


   if ((VAR_2->show_fs_thumbnail || VAR_5->bools.menu_rgui_inline_thumbnails) && VAR_2->is_playlist)
   {
      if (FUNC_4(VAR_2->thumbnail_path_data,
            FUNC_6(), FUNC_2()))
      {
         if (FUNC_3(VAR_2->thumbnail_path_data, VAR_1))
            VAR_4 = FUNC_5(VAR_2->thumbnail_path_data, VAR_1);

         if (VAR_5->bools.menu_rgui_inline_thumbnails &&
             FUNC_3(VAR_2->thumbnail_path_data, VAR_0))
            VAR_4 = FUNC_5(VAR_2->thumbnail_path_data, VAR_0) ||
                            VAR_4;
      }
   }


   if (VAR_4)
   {

      if ((VAR_5->uints.menu_rgui_thumbnail_delay == 0) || VAR_3)
         FUNC_7(VAR_2, VAR_5->bools.network_on_demand_thumbnails);
      else
      {

         VAR_2->thumbnail_load_pending = 1;
         VAR_2->thumbnail_load_trigger_time = FUNC_1();
      }
   }
}
