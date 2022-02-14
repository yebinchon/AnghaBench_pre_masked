
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {float font_msg_pos_x; float font_msg_pos_y; } ;
typedef TYPE_2__ video_frame_info_t ;
struct font_params {float x; float y; float scale; unsigned int text_align; } ;
struct TYPE_7__ {TYPE_1__* sixel; } ;
typedef TYPE_3__ sixel_raster_t ;
struct TYPE_5__ {unsigned int screen_width; unsigned int screen_height; } ;





 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void FUNC_2(video_frame_info_t *VAR_0,
      void *VAR_1, const char *VAR_2,
      const struct font_params *VAR_3)
{
   float VAR_4, VAR_5, VAR_6;
   unsigned VAR_7, VAR_8;
   unsigned VAR_9, VAR_10;
   unsigned VAR_11;
   sixel_raster_t *VAR_12 = (sixel_raster_t*)VAR_1;
   const struct font_params *VAR_13 = (const struct font_params*)VAR_3;

   (void)VAR_9;
   (void)VAR_10;

   if (!VAR_12 || FUNC_0(VAR_2))
      return;

   if (VAR_13)
   {
      VAR_4 = VAR_13->x;
      VAR_5 = VAR_13->y;
      VAR_6 = VAR_13->scale;
      VAR_11 = VAR_13->text_align;
   }
   else
   {
      VAR_4 = VAR_0->font_msg_pos_x;
      VAR_5 = VAR_0->font_msg_pos_y;
      VAR_6 = 1.0f;
      VAR_11 = 129;
   }

   if (!VAR_12->sixel)
      return;

   VAR_7 = VAR_12->sixel->screen_width;
   VAR_8 = VAR_12->sixel->screen_height;
   VAR_10 = VAR_8 - (VAR_5 * VAR_8 * VAR_6);

   switch (VAR_11)
   {
      case 128:
         VAR_9 = (VAR_4 * VAR_7 * VAR_6) - FUNC_1(VAR_2);
         break;
      case 130:
         VAR_9 = (VAR_4 * VAR_7 * VAR_6) - (FUNC_1(VAR_2) / 2);
         break;
      case 129:
      default:
         VAR_9 = VAR_4 * VAR_7 * VAR_6;
         break;
   }


}
