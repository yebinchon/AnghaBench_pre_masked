
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct font_glyph {int draw_offset_x; int draw_offset_y; int width; int height; int atlas_offset_x; int atlas_offset_y; scalar_t__ advance_y; scalar_t__ advance_x; } ;
struct font_atlas {int width; int * buffer; } ;
struct TYPE_7__ {int video_msg_pos_x; double video_msg_pos_y; } ;
struct TYPE_9__ {TYPE_1__ floats; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_10__ {int width; double height; int bytes_per_pixel; int font_rgb; int omap; int font; TYPE_2__* font_driver; } ;
typedef TYPE_4__ omap_video_t ;
struct TYPE_8__ {struct font_glyph* (* get_glyph ) (int ,int ) ;struct font_atlas* (* get_atlas ) (int ) ;} ;


 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (int ,int const*,int ,int,int,int,int,int) ;
 int FUNC_2 (int ,int const*,int ,int,int,int,int,int) ;
 struct font_atlas* FUNC_3 (int ) ;
 struct font_glyph* FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(omap_video_t *VAR_0, const char *VAR_1)
{
   const struct font_atlas *VAR_2 = ((void*)0);
   settings_t *VAR_3 = FUNC_0();
   int VAR_4 = VAR_3->floats.video_msg_pos_x * VAR_0->width;
   int VAR_5 = (1.0 - VAR_3->floats.video_msg_pos_y) * VAR_0->height;

   if (!VAR_0->font)
      return;

   VAR_2 = VAR_0->font_driver->get_atlas(VAR_0->font);

   for (; *VAR_1; VAR_1++)
   {
      int VAR_6, VAR_7;
      int VAR_8, VAR_9;
      const uint8_t *VAR_10 = ((void*)0);
      const struct font_glyph *VAR_11 =
         VAR_0->font_driver->get_glyph(VAR_0->font, (uint8_t)*VAR_1);

      if (!VAR_11)
         continue;

      VAR_6 = VAR_4 + VAR_11->draw_offset_x;
      VAR_7 = VAR_5 + VAR_11->draw_offset_y;

      const int VAR_12 = VAR_0->width - VAR_6;
      const int VAR_13 = VAR_0->height - VAR_7;

      VAR_8 = VAR_11->width;
      VAR_9 = VAR_11->height;

      VAR_10 = VAR_2->buffer + VAR_11->atlas_offset_x +
         VAR_11->atlas_offset_y * VAR_2->width;

      if (VAR_6 < 0)
      {
         VAR_10 -= VAR_6;
         VAR_8 += VAR_6;
         VAR_6 = 0;
      }

      if (VAR_7 < 0)
      {
         VAR_10 -= VAR_7 * (int)VAR_2->width;
         VAR_9 += VAR_7;
         VAR_7 = 0;
      }

      if (VAR_12 <= 0 || VAR_13 <= 0)
         continue;

      if (VAR_8 > VAR_12)
         VAR_8 = VAR_12;
      if (VAR_9 > VAR_13)
         VAR_9 = VAR_13;

      if (VAR_0->bytes_per_pixel == 2)
      {
         FUNC_2(VAR_0->omap, VAR_10, VAR_0->font_rgb,
               VAR_8, VAR_9,
               VAR_2->width, VAR_6, VAR_7);
      }
      else
      {
         FUNC_1(VAR_0->omap, VAR_10, VAR_0->font_rgb,
               VAR_8, VAR_9,
               VAR_2->width, VAR_6, VAR_7);
      }

      VAR_4 += VAR_11->advance_x;
      VAR_5 += VAR_11->advance_y;
   }
}
