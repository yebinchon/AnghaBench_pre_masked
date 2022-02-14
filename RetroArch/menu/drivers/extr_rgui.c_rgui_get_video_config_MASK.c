
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int y; int x; int height; int width; } ;
typedef TYPE_3__ video_viewport_t ;
struct TYPE_9__ {int video_aspect_ratio_idx; } ;
struct TYPE_12__ {TYPE_1__ uints; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_10__ {int y; int x; int height; int width; } ;
struct TYPE_13__ {TYPE_2__ viewport; int aspect_ratio_idx; } ;
typedef TYPE_5__ rgui_video_settings_t ;


 TYPE_4__* FUNC_0 () ;
 TYPE_3__* FUNC_1 () ;

__attribute__((used)) static void FUNC_2(rgui_video_settings_t *VAR_0)
{
   settings_t *VAR_1 = FUNC_0();


   video_viewport_t *VAR_2 = FUNC_1();

   if (!VAR_1)
      return;

   VAR_0->aspect_ratio_idx = VAR_1->uints.video_aspect_ratio_idx;
   VAR_0->viewport.width = VAR_2->width;
   VAR_0->viewport.height = VAR_2->height;
   VAR_0->viewport.x = VAR_2->x;
   VAR_0->viewport.y = VAR_2->y;
}
