
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_9__ ;
typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_20__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_18__ ;
typedef struct TYPE_26__ TYPE_14__ ;
typedef struct TYPE_25__ TYPE_13__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


struct TYPE_32__ {unsigned int current; unsigned int size; TYPE_14__* v; } ;
struct TYPE_23__ {TYPE_4__ vertex_cache; int ubo_tex; } ;
typedef TYPE_11__ wiiu_video_t ;
struct TYPE_33__ {unsigned int height; unsigned int pitch; int imageSize; TYPE_14__* image; } ;
struct TYPE_29__ {TYPE_5__ surface; } ;
struct TYPE_24__ {int ubo_tex; TYPE_20__ texture; TYPE_6__* atlas; int font_data; TYPE_1__* font_driver; } ;
typedef TYPE_12__ wiiu_font_t ;
struct TYPE_25__ {unsigned int width; unsigned int height; scalar_t__ userdata; } ;
typedef TYPE_13__ video_frame_info_t ;
struct font_glyph {float draw_offset_x; float draw_offset_y; float width; float height; float advance_x; float advance_y; int atlas_offset_y; int atlas_offset_x; } ;
struct TYPE_31__ {float width; float height; int v; int u; } ;
struct TYPE_30__ {int x; int y; float width; float height; } ;
struct TYPE_26__ {unsigned int color; TYPE_3__ coord; TYPE_2__ pos; } ;
typedef TYPE_14__ sprite_vertex_t ;
struct TYPE_37__ {TYPE_10__* uniformBlocks; } ;
struct TYPE_36__ {TYPE_7__* samplerVars; } ;
struct TYPE_35__ {int location; } ;
struct TYPE_34__ {int dirty; unsigned int height; unsigned int width; scalar_t__ buffer; } ;
struct TYPE_28__ {struct font_glyph* (* get_glyph ) (int ,char) ;} ;
struct TYPE_27__ {TYPE_9__ vs; TYPE_8__ ps; } ;
struct TYPE_22__ {int size; int offset; } ;


 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int ,TYPE_14__*,int) ;
 int FUNC_2 (TYPE_20__*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_4 (TYPE_14__*,scalar_t__,unsigned int) ;
 int FUNC_5 (double) ;
 TYPE_18__ VAR_3 ;
 struct font_glyph* FUNC_6 (int ,unsigned int) ;
 struct font_glyph* FUNC_7 (int ,char) ;
 unsigned int FUNC_8 (char const**) ;
 int FUNC_9 (TYPE_12__*,char const*,unsigned int,float) ;

__attribute__((used)) static void FUNC_10(
      video_frame_info_t *VAR_4,
      wiiu_font_t* VAR_5, const char* VAR_6, unsigned VAR_7,
      float VAR_8, const unsigned int VAR_9, float VAR_10,
      float VAR_11, unsigned VAR_12)
{
   unsigned VAR_13;
   wiiu_video_t* VAR_14 = (wiiu_video_t*)VAR_4->userdata;
   unsigned VAR_15 = VAR_4->width;
   unsigned VAR_16 = VAR_4->height;
   int VAR_17 = FUNC_5(VAR_10 * VAR_15);
   int VAR_18 = FUNC_5((1.0 - VAR_11) * VAR_16);

   if( !VAR_14 ||
         VAR_14->vertex_cache.current + (VAR_7 * 4) > VAR_14->vertex_cache.size)
      return;

   switch (VAR_12)
   {
      case 128:
         VAR_17 -= FUNC_9(VAR_5, VAR_6, VAR_7, VAR_8);
         break;

      case 129:
         VAR_17 -= FUNC_9(VAR_5, VAR_6, VAR_7, VAR_8) / 2;
         break;
   }

   sprite_vertex_t* VAR_19 = VAR_14->vertex_cache.v + VAR_14->vertex_cache.current;

   for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
   {
      const char* VAR_20 = &VAR_6[VAR_13];
      unsigned VAR_21 = FUNC_8(&VAR_20);
      unsigned VAR_22 = VAR_20 - &VAR_6[VAR_13];

      if (VAR_22 > 1)
         VAR_13 += VAR_22 - 1;

      const struct font_glyph* VAR_23 =
         VAR_5->font_driver->get_glyph(VAR_5->font_data, VAR_21);

      if (!VAR_23)
         VAR_23 = VAR_5->font_driver->get_glyph(VAR_5->font_data, '?');

      if (!VAR_23)
         continue;

      VAR_19->pos.x = VAR_17 + VAR_23->draw_offset_x * VAR_8;
      VAR_19->pos.y = VAR_18 + VAR_23->draw_offset_y * VAR_8;
      VAR_19->pos.width = VAR_23->width * VAR_8;
      VAR_19->pos.height = VAR_23->height * VAR_8;

      VAR_19->coord.u = VAR_23->atlas_offset_x;
      VAR_19->coord.v = VAR_23->atlas_offset_y;
      VAR_19->coord.width = VAR_23->width;
      VAR_19->coord.height = VAR_23->height;

      VAR_19->color = VAR_9;

      VAR_19++;

      VAR_17 += VAR_23->advance_x * VAR_8;
      VAR_18 += VAR_23->advance_y * VAR_8;
   }

   int VAR_24 = VAR_19 - VAR_14->vertex_cache.v - VAR_14->vertex_cache.current;

   if (!VAR_24)
      return;

   FUNC_1(VAR_0, VAR_14->vertex_cache.v + VAR_14->vertex_cache.current, VAR_24 * sizeof(VAR_14->vertex_cache.v));

   if(VAR_5->atlas->dirty)
   {
      for (VAR_13 = 0; (VAR_13 < VAR_5->atlas->height) && (VAR_13 < VAR_5->texture.surface.height); VAR_13++)
         FUNC_4(VAR_5->texture.surface.image + (VAR_13 * VAR_5->texture.surface.pitch),
                VAR_5->atlas->buffer + (VAR_13 * VAR_5->atlas->width), VAR_5->atlas->width);

      FUNC_1(VAR_1, VAR_5->texture.surface.image,
                    VAR_5->texture.surface.imageSize);
      VAR_5->atlas->dirty = 0;
   }

   FUNC_2(&VAR_5->texture, VAR_3.ps.samplerVars[0].location);
   FUNC_3(VAR_3.vs.uniformBlocks[1].offset, VAR_3.vs.uniformBlocks[1].size, VAR_5->ubo_tex);

   FUNC_0(VAR_2, VAR_24, VAR_14->vertex_cache.current, 1);

   FUNC_3(VAR_3.vs.uniformBlocks[1].offset, VAR_3.vs.uniformBlocks[1].size, VAR_14->ubo_tex);

   VAR_14->vertex_cache.current = VAR_19 - VAR_14->vertex_cache.v;
}
