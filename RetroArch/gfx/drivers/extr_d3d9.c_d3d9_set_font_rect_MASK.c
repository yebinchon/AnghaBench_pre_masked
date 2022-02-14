
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct font_params {float x; float y; float scale; } ;
struct TYPE_8__ {float video_msg_pos_x; float video_msg_pos_y; float video_font_size; } ;
struct TYPE_11__ {TYPE_1__ floats; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_10__ {float left; float right; float top; float bottom; } ;
struct TYPE_9__ {float width; float height; } ;
struct TYPE_12__ {TYPE_3__ font_rect_shifted; TYPE_3__ font_rect; TYPE_2__ video_info; } ;
typedef TYPE_5__ d3d9_video_t ;


 TYPE_4__* FUNC_0 () ;

__attribute__((used)) static void FUNC_1(
      d3d9_video_t *VAR_0,
      const struct font_params *VAR_1)
{
   settings_t *VAR_2 = FUNC_0();
   float VAR_3 = VAR_2->floats.video_msg_pos_x;
   float VAR_4 = VAR_2->floats.video_msg_pos_y;
   float VAR_5 = VAR_2->floats.video_font_size;

   if (VAR_1)
   {
      VAR_3 = VAR_1->x;
      VAR_4 = VAR_1->y;
      VAR_5 *= VAR_1->scale;
   }

   if (!VAR_0)
      return;

   VAR_0->font_rect.left = VAR_0->video_info.width * VAR_3;
   VAR_0->font_rect.right = VAR_0->video_info.width;
   VAR_0->font_rect.top = (1.0f - VAR_4) * VAR_0->video_info.height - VAR_5;
   VAR_0->font_rect.bottom = VAR_0->video_info.height;

   VAR_0->font_rect_shifted = VAR_0->font_rect;
   VAR_0->font_rect_shifted.left -= 2;
   VAR_0->font_rect_shifted.right -= 2;
   VAR_0->font_rect_shifted.top += 2;
   VAR_0->font_rect_shifted.bottom += 2;
}
