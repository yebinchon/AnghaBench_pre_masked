
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float font_msg_pos_x; float font_msg_pos_y; } ;
typedef TYPE_1__ video_frame_info_t ;
struct TYPE_5__ {int vga; } ;
typedef TYPE_2__ vga_raster_t ;
struct font_params {float x; float y; float scale; unsigned int text_align; } ;





 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void FUNC_2(video_frame_info_t *VAR_2,
      void *VAR_3, const char *VAR_4,
      const struct font_params *VAR_5)
{
   float VAR_6, VAR_7, VAR_8;
   unsigned VAR_9, VAR_10;
   unsigned VAR_11, VAR_12;
   unsigned VAR_13;
   vga_raster_t *VAR_14 = (vga_raster_t*)VAR_3;

   if (!VAR_14 || FUNC_0(VAR_4))
      return;

   if (VAR_5)
   {
      VAR_6 = VAR_5->x;
      VAR_7 = VAR_5->y;
      VAR_8 = VAR_5->scale;
      VAR_13 = VAR_5->text_align;
   }
   else
   {
      VAR_6 = VAR_2->font_msg_pos_x;
      VAR_7 = VAR_2->font_msg_pos_y;
      VAR_8 = 1.0f;
      VAR_13 = 129;
   }

   if (!VAR_14->vga)
      return;

   VAR_9 = VAR_1;
   VAR_10 = VAR_0;
   VAR_12 = VAR_10 - (VAR_7 * VAR_10 * VAR_8);

   switch (VAR_13)
   {
      case 129:
         VAR_11 = VAR_6 * VAR_9 * VAR_8;
         break;
      case 128:
         VAR_11 = (VAR_6 * VAR_9 * VAR_8) - FUNC_1(VAR_4);
         break;
      case 130:
         VAR_11 = (VAR_6 * VAR_9 * VAR_8) - (FUNC_1(VAR_4) / 2);
         break;
      default:
         break;
   }
}
