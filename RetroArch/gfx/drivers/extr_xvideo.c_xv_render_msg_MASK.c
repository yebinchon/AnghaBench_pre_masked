
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {unsigned int* luma_index; unsigned int chroma_u_index; unsigned int chroma_v_index; unsigned int font_y; unsigned int font_u; unsigned int font_v; TYPE_3__* image; int font; TYPE_2__* font_driver; } ;
typedef TYPE_4__ xv_t ;
typedef int uint8_t ;
struct font_glyph {int draw_offset_x; int draw_offset_y; int width; int height; int atlas_offset_x; int atlas_offset_y; scalar_t__ advance_y; scalar_t__ advance_x; } ;
struct font_atlas {int* buffer; int width; } ;
struct TYPE_8__ {unsigned int video_msg_pos_x; float video_msg_pos_y; } ;
struct TYPE_12__ {TYPE_1__ floats; } ;
typedef TYPE_5__ settings_t ;
struct TYPE_10__ {scalar_t__ data; } ;
struct TYPE_9__ {struct font_glyph* (* get_glyph ) (int ,int) ;struct font_atlas* (* get_atlas ) (int ) ;} ;


 TYPE_5__* FUNC_0 () ;
 struct font_atlas* FUNC_1 (int ) ;
 struct font_glyph* FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(xv_t *VAR_0, const char *VAR_1,
      unsigned VAR_2, unsigned VAR_3)
{
   int VAR_4, VAR_5, VAR_6, VAR_7;
   unsigned VAR_8, VAR_9[2], VAR_10;
   unsigned VAR_11, VAR_12;
   settings_t *VAR_13 = FUNC_0();
   const struct font_atlas *VAR_14 = ((void*)0);

   if (!VAR_0->font)
      return;

   VAR_14 = VAR_0->font_driver->get_atlas(VAR_0->font);

   VAR_6 = VAR_13->floats.video_msg_pos_x * VAR_2;
   VAR_7 = VAR_3 * (1.0f - VAR_13->floats.video_msg_pos_y);

   VAR_9[0] = VAR_0->luma_index[0];
   VAR_9[1] = VAR_0->luma_index[1];

   VAR_11 = VAR_0->chroma_u_index;
   VAR_12 = VAR_0->chroma_v_index;

   VAR_10 = VAR_2 << 1;

   for (; *VAR_1; VAR_1++)
   {
      int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
      const uint8_t *VAR_21 = ((void*)0);
      uint8_t *VAR_22 = ((void*)0);
      const struct font_glyph *VAR_23 =
         VAR_0->font_driver->get_glyph(VAR_0->font, (uint8_t)*VAR_1);

      if (!VAR_23)
         continue;



      VAR_15 = (VAR_6 + VAR_23->draw_offset_x + 1) & ~1;
      VAR_16 = VAR_7 + VAR_23->draw_offset_y;

      VAR_17 = VAR_23->width;
      VAR_18 = VAR_23->height;

      VAR_21 = VAR_14->buffer + VAR_23->atlas_offset_x +
                        VAR_23->atlas_offset_y * VAR_14->width;

      if (VAR_15 < 0)
      {
         VAR_21 -= VAR_15;
         VAR_17 += VAR_15;
         VAR_15 = 0;
      }

      if (VAR_16 < 0)
      {
         VAR_21 -= VAR_16 * (int)VAR_14->width;
         VAR_18 += VAR_16;
         VAR_16 = 0;
      }

      VAR_19 = VAR_2 - VAR_15;
      VAR_20 = VAR_3 - VAR_16;

      if (VAR_19 <= 0 || VAR_20 <= 0)
         continue;

      if (VAR_17 > VAR_19)
         VAR_17 = VAR_19;
      if (VAR_18 > VAR_20)
         VAR_18 = VAR_20;

      VAR_22 = (uint8_t*)VAR_0->image->data + VAR_16 * VAR_10 + (VAR_15 << 1);

      for (VAR_5 = 0; VAR_5 < VAR_18; VAR_5++, VAR_21 += VAR_14->width, VAR_22 += VAR_10)
      {


         for (VAR_4 = 0; VAR_4 < VAR_17; VAR_4 += 2)
         {
            unsigned VAR_24[2], VAR_25, VAR_26;
            int VAR_27 = VAR_4 << 1;

            VAR_24[0] = VAR_21[VAR_4 + 0];
            VAR_24[1] = 0;

            if (VAR_4 + 1 < VAR_17)
               VAR_24[1] = VAR_21[VAR_4 + 1];


            VAR_25 = (VAR_24[0] + VAR_24[1]) >> 1;

            for (VAR_8 = 0; VAR_8 < 2; VAR_8++)
            {
               unsigned VAR_28 = (VAR_0->font_y * VAR_24[VAR_8]
                     + ((256 - VAR_24[VAR_8]) * VAR_22[VAR_27 + VAR_9[VAR_8]])) >> 8;
               VAR_22[VAR_27 + VAR_9[VAR_8]] = VAR_28;
            }


            VAR_26 = (VAR_0->font_u * VAR_25
                  + ((256 - VAR_25) * VAR_22[VAR_27 + VAR_11])) >> 8;
            VAR_22[VAR_27 + VAR_11] = VAR_26;

            VAR_26 = (VAR_0->font_v * VAR_25
                  + ((256 - VAR_25) * VAR_22[VAR_27 + VAR_12])) >> 8;
            VAR_22[VAR_27 + VAR_12] = VAR_26;
         }
      }

      VAR_6 += VAR_23->advance_x;
      VAR_7 += VAR_23->advance_y;
   }
}
