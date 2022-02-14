
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct video_viewport {unsigned int full_width; double full_height; } ;
struct TYPE_8__ {scalar_t__ menu_rgui_aspect_ratio_lock; } ;
struct TYPE_11__ {TYPE_1__ uints; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_9__ {unsigned int width; double height; int x; int y; } ;
struct TYPE_10__ {TYPE_2__ viewport; int aspect_ratio_idx; } ;
struct TYPE_12__ {TYPE_3__ menu_video_settings; } ;
typedef TYPE_5__ rgui_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_2 ;
 TYPE_4__* FUNC_1 () ;
 int FUNC_2 (unsigned int*,unsigned int*,size_t*) ;
 int FUNC_3 (struct video_viewport*) ;

__attribute__((used)) static void FUNC_4(rgui_t *VAR_3)
{
   settings_t *VAR_4 = FUNC_1();
   size_t VAR_5;
   unsigned VAR_6, VAR_7;
   struct video_viewport VAR_8;

   if (!VAR_4)
      return;

   FUNC_2(&VAR_6, &VAR_7, &VAR_5);
   FUNC_3(&VAR_8);



   VAR_3->menu_video_settings.aspect_ratio_idx = VAR_0;


   if (VAR_6 > 0 && VAR_7 > 0 && VAR_8.full_width > 0 && VAR_8.full_height > 0)
   {
      bool VAR_9 = (VAR_4->uints.menu_rgui_aspect_ratio_lock == VAR_2);

      if (VAR_9)
      {
         unsigned VAR_10 = (VAR_8.full_width / VAR_6);
         unsigned VAR_11 = (VAR_8.full_height / VAR_7);
         unsigned VAR_12 = (VAR_10 <= VAR_11) ? VAR_10 : VAR_11;

         if (VAR_12 > 0)
         {
            VAR_3->menu_video_settings.viewport.width = VAR_12 * VAR_6;
            VAR_3->menu_video_settings.viewport.height = VAR_12 * VAR_7;
         }
         else
            VAR_9 = 0;
      }

      if (!VAR_9)
      {
         float VAR_13 = (float)VAR_8.full_width / (float)VAR_8.full_height;
         float VAR_14 = (float)VAR_6 / (float)VAR_7;

         if (VAR_14 > VAR_13)
         {
            VAR_3->menu_video_settings.viewport.width = VAR_8.full_width;
            VAR_3->menu_video_settings.viewport.height = VAR_7 * VAR_8.full_width / VAR_6;
         }
         else
         {
            VAR_3->menu_video_settings.viewport.height = VAR_8.full_height;
            VAR_3->menu_video_settings.viewport.width = VAR_6 * VAR_8.full_height / VAR_7;
         }
      }



      VAR_3->menu_video_settings.viewport.width = (VAR_3->menu_video_settings.viewport.width < 1) ?
         1 : VAR_3->menu_video_settings.viewport.width;
      VAR_3->menu_video_settings.viewport.height = (VAR_3->menu_video_settings.viewport.height < 1) ?
         1 : VAR_3->menu_video_settings.viewport.height;
   }
   else
   {
      VAR_3->menu_video_settings.viewport.width = 1;
      VAR_3->menu_video_settings.viewport.height = 1;
   }

   VAR_3->menu_video_settings.viewport.x = (VAR_8.full_width - VAR_3->menu_video_settings.viewport.width) / 2;
   VAR_3->menu_video_settings.viewport.y = (VAR_8.full_height - VAR_3->menu_video_settings.viewport.height) / 2;
}
