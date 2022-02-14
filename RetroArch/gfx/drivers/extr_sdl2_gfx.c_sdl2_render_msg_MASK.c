
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef char uint8_t ;
struct font_glyph {int draw_offset_x; int draw_offset_y; int atlas_offset_x; int atlas_offset_y; scalar_t__ advance_y; scalar_t__ advance_x; scalar_t__ height; scalar_t__ width; } ;
struct TYPE_13__ {unsigned int video_msg_pos_x; float video_msg_pos_y; } ;
struct TYPE_16__ {TYPE_2__ floats; } ;
typedef TYPE_5__ settings_t ;
struct TYPE_15__ {int tex; } ;
struct TYPE_12__ {unsigned int width; unsigned int height; } ;
struct TYPE_17__ {TYPE_4__ font; int renderer; int font_data; TYPE_3__* font_driver; int font_b; int font_g; int font_r; TYPE_1__ vp; } ;
typedef TYPE_6__ sdl2_video_t ;
struct TYPE_18__ {int x; int y; int w; int h; } ;
struct TYPE_14__ {struct font_glyph* (* get_glyph ) (int ,char) ;} ;
typedef TYPE_7__ SDL_Rect ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_7__*,TYPE_7__*,int ,int *,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 TYPE_5__* FUNC_2 () ;
 struct font_glyph* FUNC_3 (int ,char) ;
 struct font_glyph* FUNC_4 (int ,char) ;

__attribute__((used)) static void FUNC_5(sdl2_video_t *VAR_1, const char *VAR_2)
{
   int VAR_3, VAR_4, VAR_5, VAR_6;
   unsigned VAR_7 = VAR_1->vp.width;
   unsigned VAR_8 = VAR_1->vp.height;
   settings_t *VAR_9 = FUNC_2();

   if (!VAR_1->font_data)
      return;

   VAR_3 = VAR_9->floats.video_msg_pos_x * VAR_7;
   VAR_4 = (1.0f - VAR_9->floats.video_msg_pos_y) * VAR_8;
   VAR_5 = 0;
   VAR_6 = 0;

   FUNC_1(VAR_1->font.tex, VAR_1->font_r, VAR_1->font_g, VAR_1->font_b);

   for (; *VAR_2; VAR_2++)
   {
      SDL_Rect VAR_10, VAR_11;
      int VAR_12, VAR_13, VAR_14, VAR_15;
      const struct font_glyph *VAR_16 =
         VAR_1->font_driver->get_glyph(VAR_1->font_data, (uint8_t)*VAR_2);

      if (!VAR_16)
         VAR_16 = VAR_1->font_driver->get_glyph(VAR_1->font_data, '?');

      if (!VAR_16)
         continue;

      VAR_12 = VAR_16->draw_offset_x;
      VAR_13 = VAR_16->draw_offset_y;
      VAR_14 = VAR_16->atlas_offset_x;
      VAR_15 = VAR_16->atlas_offset_y;

      VAR_10.x = VAR_14;
      VAR_10.y = VAR_15;
      VAR_10.w = (int)VAR_16->width;
      VAR_10.h = (int)VAR_16->height;

      VAR_11.x = VAR_3 + VAR_5 + VAR_12;
      VAR_11.y = VAR_4 + VAR_6 + VAR_13;
      VAR_11.w = (int)VAR_16->width;
      VAR_11.h = (int)VAR_16->height;

      FUNC_0(VAR_1->renderer, VAR_1->font.tex,
            &VAR_10, &VAR_11, 0, ((void*)0), VAR_0);

      VAR_5 += VAR_16->advance_x;
      VAR_6 -= VAR_16->advance_y;
   }
}
