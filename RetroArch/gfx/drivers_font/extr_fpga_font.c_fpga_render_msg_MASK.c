
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int width; unsigned int height; float font_msg_pos_x; float font_msg_pos_y; } ;
typedef TYPE_1__ video_frame_info_t ;
struct font_params {float x; float y; float scale; unsigned int text_align; } ;
struct TYPE_5__ {int fpga; } ;
typedef TYPE_2__ fpga_raster_t ;





 scalar_t__ FUNC_0 (char const*) ;
 unsigned int FUNC_1 (char const*) ;

__attribute__((used)) static void FUNC_2(
      video_frame_info_t *VAR_0,
      void *VAR_1, const char *VAR_2,
      const void *VAR_3)
{
   float VAR_4, VAR_5, VAR_6;
   fpga_raster_t *VAR_7 = (fpga_raster_t*)VAR_1;
   unsigned VAR_8, VAR_9, VAR_10;
   unsigned VAR_11;
   const struct font_params *VAR_12 = (const struct font_params*)VAR_3;
   unsigned VAR_13 = VAR_0->width;
   unsigned VAR_14 = VAR_0->height;

   if (!VAR_7 || FUNC_0(VAR_2))
      return;

   if (VAR_12)
   {
      VAR_4 = VAR_12->x;
      VAR_5 = VAR_12->y;
      VAR_6 = VAR_12->scale;
      VAR_11 = VAR_12->text_align;
   }
   else
   {
      VAR_4 = VAR_0->font_msg_pos_x;
      VAR_5 = VAR_0->font_msg_pos_y;
      VAR_6 = 1.0f;
      VAR_11 = 129;
   }

   if (!VAR_7->fpga)
      return;

   VAR_10 = FUNC_1(VAR_2);

   switch (VAR_11)
   {
      case 129:
         VAR_8 = VAR_4 * VAR_13 * VAR_6;
         break;
      case 128:
         VAR_8 = (VAR_4 * VAR_13 * VAR_6) - VAR_10;
         break;
      case 130:
         VAR_8 = (VAR_4 * VAR_13 * VAR_6) - (VAR_10 / 2);
         break;
      default:
         break;
   }


}
