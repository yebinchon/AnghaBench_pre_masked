
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ width; scalar_t__ height; scalar_t__ x; scalar_t__ y; } ;
struct TYPE_6__ {scalar_t__ aspect_ratio_idx; TYPE_1__ viewport; } ;
typedef TYPE_2__ rgui_video_settings_t ;



bool FUNC_0(rgui_video_settings_t *VAR_0, rgui_video_settings_t *VAR_1)
{
   return (VAR_0->aspect_ratio_idx == VAR_1->aspect_ratio_idx) &&
          (VAR_0->viewport.width == VAR_1->viewport.width) &&
          (VAR_0->viewport.height == VAR_1->viewport.height) &&
          (VAR_0->viewport.x == VAR_1->viewport.x) &&
          (VAR_0->viewport.y == VAR_1->viewport.y);
}
