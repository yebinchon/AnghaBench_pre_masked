
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ menu_rgui_aspect_ratio_lock; } ;
struct TYPE_14__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_15__ {int member_0; } ;
typedef TYPE_3__ rgui_video_settings_t ;
struct TYPE_16__ {int ignore_resize_events; TYPE_3__ content_video_settings; TYPE_3__ menu_video_settings; } ;
typedef TYPE_4__ rgui_t ;
struct TYPE_17__ {int * data; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*,int) ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_5__ VAR_1 ;

__attribute__((used)) static void FUNC_6(void *VAR_2, bool VAR_3)
{
   rgui_t *VAR_4 = (rgui_t*)VAR_2;
   settings_t *VAR_5 = FUNC_0();





   if (!VAR_4 || !VAR_5)
      return;

   if (VAR_5->uints.menu_rgui_aspect_ratio_lock != VAR_0)
   {
      if (VAR_3)
      {

         FUNC_2(&VAR_4->content_video_settings);


         FUNC_5(VAR_4);


         FUNC_4(VAR_4, &VAR_4->menu_video_settings, 0);
      }
      else
      {



         rgui_video_settings_t VAR_6 = {0};
         FUNC_2(&VAR_6);

         if (FUNC_3(&VAR_6, &VAR_4->menu_video_settings))
            FUNC_4(VAR_4, &VAR_4->content_video_settings, 0);



         VAR_4->ignore_resize_events = 0;
      }
   }




   if (!VAR_3 && VAR_1.data)
   {
      FUNC_1(VAR_1.data);
      VAR_1.data = ((void*)0);
   }
}
