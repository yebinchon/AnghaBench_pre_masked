
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef unsigned int uint8_t ;
typedef unsigned int uint32_t ;
struct font_glyph {int width; int height; int draw_offset_x; int draw_offset_y; int atlas_offset_x; int atlas_offset_y; scalar_t__ advance_y; scalar_t__ advance_x; } ;
struct font_atlas {unsigned int* buffer; int width; } ;
struct TYPE_11__ {unsigned int video_msg_pos_x; float video_msg_pos_y; } ;
struct TYPE_13__ {TYPE_1__ floats; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_14__ {unsigned int font_r; unsigned int font_g; unsigned int font_b; int font; TYPE_2__* font_driver; } ;
typedef TYPE_4__ sdl_video_t ;
struct TYPE_16__ {unsigned int Rshift; unsigned int Gshift; unsigned int Bshift; } ;
struct TYPE_15__ {int pitch; scalar_t__ pixels; } ;
struct TYPE_12__ {struct font_glyph* (* get_glyph ) (int ,unsigned int) ;struct font_atlas* (* get_atlas ) (int ) ;} ;
typedef TYPE_5__ SDL_Surface ;
typedef TYPE_6__ SDL_PixelFormat ;


 TYPE_3__* FUNC_0 () ;
 struct font_atlas* FUNC_1 (int ) ;
 struct font_glyph* FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(sdl_video_t *VAR_0, SDL_Surface *VAR_1,
      const char *VAR_2, unsigned VAR_3, unsigned VAR_4, const SDL_PixelFormat *VAR_5)
{
   int VAR_6, VAR_7, VAR_8, VAR_9;
   unsigned VAR_10, VAR_11, VAR_12;
   const struct font_atlas *VAR_13 = ((void*)0);
   settings_t *VAR_14 = FUNC_0();

   if (!VAR_0->font)
      return;

   VAR_13 = VAR_0->font_driver->get_atlas(VAR_0->font);

   VAR_8 = VAR_14->floats.video_msg_pos_x * VAR_3;
   VAR_9 = (1.0f - VAR_14->floats.video_msg_pos_y) * VAR_4;

   VAR_10 = VAR_5->Rshift;
   VAR_11 = VAR_5->Gshift;
   VAR_12 = VAR_5->Bshift;

   for (; *VAR_2; VAR_2++)
   {
      int VAR_15, VAR_16;
      int VAR_17, VAR_18, VAR_19, VAR_20;
      uint32_t *VAR_21 = ((void*)0);
      const uint8_t *VAR_22 = ((void*)0);
      const struct font_glyph *VAR_23 = VAR_0->font_driver->get_glyph(VAR_0->font, (uint8_t)*VAR_2);
      if (!VAR_23)
         continue;

      VAR_15 = VAR_23->width;
      VAR_16 = VAR_23->height;

      VAR_17 = VAR_8 + VAR_23->draw_offset_x;
      VAR_18 = VAR_9 + VAR_23->draw_offset_y;
      VAR_22 = VAR_13->buffer + VAR_23->atlas_offset_x
         + VAR_23->atlas_offset_y * VAR_13->width;

      if (VAR_17 < 0)
      {
         VAR_22 -= VAR_17;
         VAR_15 += VAR_17;
         VAR_17 = 0;
      }

      if (VAR_18 < 0)
      {
         VAR_22 -= VAR_18 * (int)VAR_13->width;
         VAR_16 += VAR_18;
         VAR_18 = 0;
      }

      VAR_19 = VAR_3 - VAR_17;
      VAR_20 = VAR_4 - VAR_18;

      if (VAR_19 <= 0 || VAR_20 <= 0)
         continue;

      if (VAR_15 > VAR_19)
         VAR_15 = VAR_19;
      if (VAR_16 > VAR_20)
         VAR_16 = VAR_20;

      VAR_21 = (uint32_t*)VAR_1->pixels + VAR_18 * (VAR_1->pitch >> 2) + VAR_17;

      for (VAR_7 = 0; VAR_7 < VAR_16; VAR_7++, VAR_22 += VAR_13->width, VAR_21 += VAR_1->pitch >> 2)
      {
         for (VAR_6 = 0; VAR_6 < VAR_15; VAR_6++)
         {
            unsigned VAR_24 = VAR_22[VAR_6];
            unsigned VAR_25 = VAR_21[VAR_6];
            unsigned VAR_26 = (VAR_25 >> VAR_10) & 0xff;
            unsigned VAR_27 = (VAR_25 >> VAR_11) & 0xff;
            unsigned VAR_28 = (VAR_25 >> VAR_12) & 0xff;

            unsigned VAR_29 = (VAR_26 * (256 - VAR_24) + VAR_0->font_r * VAR_24) >> 8;
            unsigned VAR_30 = (VAR_27 * (256 - VAR_24) + VAR_0->font_g * VAR_24) >> 8;
            unsigned VAR_31 = (VAR_28 * (256 - VAR_24) + VAR_0->font_b * VAR_24) >> 8;
            VAR_21[VAR_6] = (VAR_29 << VAR_10) | (VAR_30 << VAR_11) | (VAR_31 << VAR_12);
         }
      }

      VAR_8 += VAR_23->advance_x;
      VAR_9 += VAR_23->advance_y;
   }
}
