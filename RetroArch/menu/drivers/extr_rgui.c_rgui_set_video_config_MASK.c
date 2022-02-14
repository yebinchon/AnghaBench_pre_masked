
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_15__ {float height; scalar_t__ width; int y; int x; } ;
typedef TYPE_3__ video_viewport_t ;
struct TYPE_13__ {int video_aspect_ratio_idx; } ;
struct TYPE_16__ {TYPE_1__ uints; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_14__ {float height; int y; int x; scalar_t__ width; } ;
struct TYPE_17__ {TYPE_2__ viewport; int aspect_ratio_idx; } ;
typedef TYPE_5__ rgui_video_settings_t ;
struct TYPE_18__ {int aspect_update_pending; } ;
typedef TYPE_6__ rgui_t ;
struct TYPE_12__ {float value; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_11__* VAR_2 ;
 int FUNC_0 (int ,int *) ;
 TYPE_4__* FUNC_1 () ;
 TYPE_3__* FUNC_2 () ;

__attribute__((used)) static void FUNC_3(rgui_t *VAR_3, rgui_video_settings_t *VAR_4, bool VAR_5)
{
   settings_t *VAR_6 = FUNC_1();


   video_viewport_t *VAR_7 = FUNC_2();

   if (!VAR_6)
      return;

   VAR_6->uints.video_aspect_ratio_idx = VAR_4->aspect_ratio_idx;
   VAR_7->width = VAR_4->viewport.width;
   VAR_7->height = VAR_4->viewport.height;
   VAR_7->x = VAR_4->viewport.x;
   VAR_7->y = VAR_4->viewport.y;

   VAR_2[VAR_0].value =
      (float)VAR_7->width / VAR_7->height;

   if (VAR_5)
      VAR_3->aspect_update_pending = 1;
   else
   {
      FUNC_0(VAR_1, ((void*)0));
      VAR_3->aspect_update_pending = 0;
   }
}
