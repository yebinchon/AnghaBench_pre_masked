
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct g2d_image {int width; float height; } ;
struct font_glyph {int draw_offset_x; int draw_offset_y; int width; int height; int atlas_offset_x; int atlas_offset_y; scalar_t__ advance_y; scalar_t__ advance_x; } ;
struct font_atlas {int width; int * buffer; } ;
struct exynos_video {int font_color; int font; TYPE_2__* font_driver; struct exynos_data* data; } ;
struct exynos_data {int g2d; struct g2d_image** src; } ;
struct TYPE_5__ {int video_msg_pos_x; float video_msg_pos_y; } ;
struct TYPE_7__ {TYPE_1__ floats; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_6__ {struct font_glyph* (* get_glyph ) (int ,int ) ;struct font_atlas* (* get_atlas ) (int ) ;} ;


 size_t VAR_0 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (struct exynos_data*) ;
 scalar_t__ FUNC_2 (int ,struct g2d_image*) ;
 int FUNC_3 (struct exynos_data*,int const*,int ,int,int,int,int,int) ;
 struct font_atlas* FUNC_4 (int ) ;
 struct font_glyph* FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct exynos_video *VAR_1,
      const char *VAR_2)
{
   const struct font_atlas *VAR_3;
   struct exynos_data *VAR_4 = VAR_1->data;
   struct g2d_image *VAR_5 = VAR_4->src[VAR_0];
   settings_t *VAR_6 = FUNC_0();
   int VAR_7 = VAR_6->floats.video_msg_pos_x * VAR_5->width;
   int VAR_8 = (1.0f - VAR_6->floats.video_msg_pos_y) * VAR_5->height;

   if (!VAR_1->font || !VAR_1->font_driver)
      return -1;

   if (FUNC_2(VAR_4->g2d, VAR_5) != 0)
      return -1;

   VAR_3 = VAR_1->font_driver->get_atlas(VAR_1->font);

   for (; *VAR_2; ++VAR_2)
   {
      int VAR_9, VAR_10;
      int VAR_11, VAR_12;
      const uint8_t *VAR_13 = ((void*)0);
      const struct font_glyph *VAR_14 = VAR_1->font_driver->get_glyph(VAR_1->font, (uint8_t)*VAR_2);
      if (!VAR_14)
         continue;

      VAR_9 = VAR_7 + VAR_14->draw_offset_x;
      VAR_10 = VAR_8 + VAR_14->draw_offset_y;

      const int VAR_15 = VAR_5->width - VAR_9;
      const int VAR_16 = VAR_5->height - VAR_10;

      VAR_11 = VAR_14->width;
      VAR_12 = VAR_14->height;

      VAR_13 = VAR_3->buffer + VAR_14->atlas_offset_x + VAR_14->atlas_offset_y * VAR_3->width;

      if (VAR_9 < 0)
      {
         VAR_13 -= VAR_9;
         VAR_11 += VAR_9;
         VAR_9 = 0;
      }

      if (VAR_10 < 0)
      {
         VAR_13 -= VAR_10 * (int)VAR_3->width;
         VAR_12 += VAR_10;
         VAR_10 = 0;
      }

      if (VAR_15 <= 0 || VAR_16 <= 0)
         continue;

      if (VAR_11 > VAR_15)
         VAR_11 = VAR_15;
      if (VAR_12 > VAR_16)
         VAR_12 = VAR_16;

      FUNC_3(VAR_4, VAR_13, VAR_1->font_color,
            VAR_11, VAR_12,
            VAR_3->width, VAR_9, VAR_10);

      VAR_7 += VAR_14->advance_x;
      VAR_8 += VAR_14->advance_y;
   }

   return FUNC_1(VAR_4);
}
