
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ userdata; } ;
typedef TYPE_4__ video_frame_info_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_10__ {unsigned int full_width; unsigned int full_height; } ;
struct TYPE_14__ {unsigned int* out_buffer; int stride; TYPE_1__ vp; } ;
typedef TYPE_5__ switch_video_t ;
struct TYPE_15__ {TYPE_3__* atlas; int font_data; TYPE_2__* font_driver; } ;
typedef TYPE_6__ switch_font_t ;
struct font_glyph {int draw_offset_x; int draw_offset_y; int width; int height; int atlas_offset_x; int atlas_offset_y; scalar_t__ advance_y; scalar_t__ advance_x; } ;
struct TYPE_12__ {int width; int * buffer; } ;
struct TYPE_11__ {struct font_glyph* (* get_glyph ) (int ,char) ;} ;




 int FUNC_0 (float) ;
 struct font_glyph* FUNC_1 (int ,unsigned int) ;
 struct font_glyph* FUNC_2 (int ,char) ;
 int FUNC_3 (TYPE_6__*,char const*,unsigned int,float) ;
 unsigned int FUNC_4 (char const**) ;

__attribute__((used)) static void FUNC_5(
    video_frame_info_t *VAR_0,
    switch_font_t *VAR_1, const char *VAR_2, unsigned VAR_3,
    float VAR_4, const unsigned int VAR_5, float VAR_6,
    float VAR_7, unsigned VAR_8)
{
      switch_video_t* VAR_9 = (switch_video_t*)VAR_0->userdata;

      if(!VAR_9)
         return;

      int VAR_10 = 0;
      int VAR_11 = 0;

      unsigned VAR_12 = VAR_9->vp.full_width;
      unsigned VAR_13 = VAR_9->vp.full_height;

      if (VAR_9->out_buffer) {

            int VAR_14 = FUNC_0(VAR_6 * VAR_12);
            int VAR_15 = FUNC_0((1.0f - VAR_7) * VAR_13);

            switch (VAR_8)
            {
            case 128:
                  VAR_14 -= FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
                  break;
            case 129:
                  VAR_14 -= FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4) / 2;
                  break;
            }

            for (int VAR_16 = 0; VAR_16 < VAR_3; VAR_16++)
            {
                  int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
                  const char *VAR_23 = &VAR_2[VAR_16];
                  unsigned VAR_24 = FUNC_4(&VAR_23);
                  unsigned VAR_25 = VAR_23 - &VAR_2[VAR_16];

                  if (VAR_25 > 1)
                        VAR_16 += VAR_25 - 1;

                  const struct font_glyph *VAR_26 =
                        VAR_1->font_driver->get_glyph(VAR_1->font_data, VAR_24);

                  if (!VAR_26)
                        VAR_26 = VAR_1->font_driver->get_glyph(VAR_1->font_data, '?');

                  if (!VAR_26)
                        continue;

                  VAR_17 = VAR_14 + VAR_26->draw_offset_x + VAR_10;
                  VAR_18 = VAR_15 + VAR_26->draw_offset_y + VAR_11;
                  VAR_21 = VAR_26->width;
                  VAR_22 = VAR_26->height;

                  VAR_19 = VAR_26->atlas_offset_x;
                  VAR_20 = VAR_26->atlas_offset_y;

                  for (int VAR_27 = VAR_20; VAR_27 < VAR_20 + VAR_22; VAR_27++)
                  {
                        uint8_t *VAR_28 = &VAR_1->atlas->buffer[VAR_27 * VAR_1->atlas->width];
                        for (int VAR_29 = VAR_19; VAR_29 < VAR_19 + VAR_21; VAR_29++)
                        {
                              if (!VAR_28[VAR_29])
                                 continue;
                              int VAR_30 = VAR_17 + (VAR_29 - VAR_19);
                              int VAR_31 = VAR_18 + (VAR_27 - VAR_20);
                              if (VAR_30 < VAR_12 && VAR_31 < VAR_13)
                                    VAR_9->out_buffer[VAR_31 * VAR_9->stride / sizeof(uint32_t) + VAR_30] = VAR_5;
                        }
                  }

                  VAR_10 += VAR_26->advance_x;
                  VAR_11 += VAR_26->advance_y;
            }
      }
}
