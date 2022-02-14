
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int texture; TYPE_2__* atlas; int font_data; TYPE_1__* font_driver; } ;
typedef TYPE_3__ vita_font_t ;
struct TYPE_11__ {unsigned int width; unsigned int height; } ;
typedef TYPE_4__ video_frame_info_t ;
typedef int uint8_t ;
struct font_glyph {int draw_offset_x; int draw_offset_y; int atlas_offset_x; int atlas_offset_y; int width; int height; scalar_t__ advance_y; scalar_t__ advance_x; } ;
struct TYPE_9__ {int dirty; unsigned int width; unsigned int height; int * buffer; } ;
struct TYPE_8__ {struct font_glyph* (* get_glyph ) (int ,char) ;} ;




 int FUNC_0 (float) ;
 struct font_glyph* FUNC_1 (int ,unsigned int) ;
 struct font_glyph* FUNC_2 (int ,char) ;
 unsigned int FUNC_3 (char const**) ;
 int FUNC_4 (int ,int,int,int,int,int,int,float,float,unsigned int const) ;
 int FUNC_5 (TYPE_3__*,char const*,unsigned int,float) ;
 int * FUNC_6 (int ) ;
 unsigned int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(
      video_frame_info_t *VAR_0,
      vita_font_t *VAR_1, const char *VAR_2, unsigned VAR_3,
      float VAR_4, const unsigned int VAR_5, float VAR_6,
      float VAR_7, unsigned VAR_8)
{
   unsigned VAR_9;
   unsigned VAR_10 = VAR_0->width;
   unsigned VAR_11 = VAR_0->height;
   int VAR_12 = FUNC_0(VAR_6 * VAR_10);
   int VAR_13 = FUNC_0((1.0f - VAR_7) * VAR_11);
   int VAR_14 = 0;
   int VAR_15 = 0;

   switch (VAR_8)
   {
      case 128:
         VAR_12 -= FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4);
         break;
      case 129:
         VAR_12 -= FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4) / 2;
         break;
   }

   for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
   {
      int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
      unsigned int VAR_22, VAR_23, VAR_24, VAR_25;
      const struct font_glyph *VAR_26 = ((void*)0);
      const uint8_t *VAR_27 = ((void*)0);
      uint8_t *VAR_28 = ((void*)0);
      const char *VAR_29 = &VAR_2[VAR_9];
      unsigned VAR_30 = FUNC_3(&VAR_29);
      unsigned VAR_31 = VAR_29 - &VAR_2[VAR_9];

      if (VAR_31 > 1)
         VAR_9 += VAR_31 - 1;

      VAR_26 = VAR_1->font_driver->get_glyph(VAR_1->font_data, VAR_30);

      if (!VAR_26)
         VAR_26 = VAR_1->font_driver->get_glyph(VAR_1->font_data, '?');

      if (!VAR_26)
         continue;

      VAR_16 = VAR_26->draw_offset_x;
      VAR_17 = VAR_26->draw_offset_y;
      VAR_18 = VAR_26->atlas_offset_x;
      VAR_19 = VAR_26->atlas_offset_y;
      VAR_20 = VAR_26->width;
      VAR_21 = VAR_26->height;

      if (VAR_1->atlas->dirty)
      {
        VAR_22 = FUNC_7(VAR_1->texture);
        VAR_28 = FUNC_6(VAR_1->texture);
        VAR_27 = VAR_1->atlas->buffer;
        VAR_23 = VAR_1->atlas->width;

        for (VAR_24 = 0; VAR_24 < VAR_1->atlas->height; VAR_24++)
           for (VAR_25 = 0; VAR_25 < VAR_1->atlas->width; VAR_25++)
              VAR_28[VAR_25 + VAR_24*VAR_22] = VAR_27[VAR_25 + VAR_24*VAR_23];

         VAR_1->atlas->dirty = 0;
      }

      FUNC_4(VAR_1->texture,
            VAR_12 + (VAR_16 + VAR_14) * VAR_4,
            VAR_13 + (VAR_17 + VAR_15) * VAR_4,
            VAR_18, VAR_19, VAR_20, VAR_21,
            VAR_4,
            VAR_4,
            VAR_5);

      VAR_14 += VAR_26->advance_x;
      VAR_15 += VAR_26->advance_y;
   }
}
