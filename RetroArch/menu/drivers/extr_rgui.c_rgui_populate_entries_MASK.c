
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ menu_rgui_aspect_ratio_lock; } ;
struct TYPE_10__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_11__ {int member_0; } ;
typedef TYPE_3__ rgui_video_settings_t ;
struct TYPE_12__ {int is_playlist; int thumbnail_load_pending; int ignore_resize_events; int content_video_settings; int menu_video_settings; int menu_title; } ;
typedef TYPE_4__ rgui_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (void*,int) ;
 int FUNC_6 (TYPE_4__*,int *,int) ;
 scalar_t__ FUNC_7 (char const*,int ) ;

__attribute__((used)) static void FUNC_8(void *VAR_5,
      const char *VAR_6,
      const char *VAR_7, unsigned VAR_8)
{
   rgui_t *VAR_9 = (rgui_t*)VAR_5;
   settings_t *VAR_10 = FUNC_0();

   if (!VAR_9 || !VAR_10)
      return;


   VAR_9->is_playlist = FUNC_7(VAR_7, FUNC_2(VAR_1)) ||
                       FUNC_7(VAR_7, FUNC_2(VAR_3)) ||
                       FUNC_7(VAR_7, FUNC_2(VAR_0));


   FUNC_1(VAR_9->menu_title, sizeof(VAR_9->menu_title));


   VAR_9->thumbnail_load_pending = 0;

   FUNC_5(VAR_5, 1);




   if (VAR_10->uints.menu_rgui_aspect_ratio_lock != VAR_4)
   {
      if (FUNC_7(VAR_7, FUNC_2(VAR_2)))
      {


         rgui_video_settings_t VAR_11 = {0};
         FUNC_3(&VAR_11);
         if (FUNC_4(&VAR_11, &VAR_9->menu_video_settings))
         {
            FUNC_6(VAR_9, &VAR_9->content_video_settings, 0);


            VAR_9->ignore_resize_events = 1;
         }
      }
   }
}
