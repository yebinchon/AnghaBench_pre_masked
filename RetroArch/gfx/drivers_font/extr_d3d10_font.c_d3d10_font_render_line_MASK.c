
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_15__ ;
typedef struct TYPE_24__ TYPE_14__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


struct TYPE_21__ {unsigned int width; unsigned int height; scalar_t__ userdata; } ;
typedef TYPE_11__ video_frame_info_t ;
struct font_glyph {float draw_offset_x; float draw_offset_y; float width; float height; float atlas_offset_x; float atlas_offset_y; float advance_x; float advance_y; } ;
struct TYPE_29__ {int ps; } ;
struct TYPE_28__ {int ps; } ;
struct TYPE_30__ {unsigned int offset; TYPE_4__ shader; TYPE_3__ shader_font; int vbo; scalar_t__ capacity; int enabled; } ;
struct TYPE_33__ {scalar_t__ Height; scalar_t__ Width; } ;
struct TYPE_22__ {TYPE_5__ sprites; int device; int blend_enable; TYPE_8__ viewport; } ;
typedef TYPE_12__ d3d10_video_t ;
struct TYPE_26__ {int scaling; scalar_t__ rotation; } ;
struct TYPE_34__ {float u; float v; float w; float h; } ;
struct TYPE_32__ {int x; int y; float w; float h; } ;
struct TYPE_23__ {unsigned int* colors; TYPE_1__ params; TYPE_9__ coords; TYPE_7__ pos; } ;
typedef TYPE_13__ d3d10_sprite_t ;
struct TYPE_20__ {scalar_t__ Height; scalar_t__ Width; } ;
struct TYPE_25__ {TYPE_10__ desc; } ;
struct TYPE_24__ {TYPE_15__ texture; TYPE_2__* atlas; int font_data; TYPE_6__* font_driver; } ;
typedef TYPE_14__ d3d10_font_t ;
struct TYPE_31__ {struct font_glyph* (* get_glyph ) (int ,char) ;} ;
struct TYPE_27__ {int dirty; int buffer; int width; int height; } ;


 int FUNC_0 (int ,unsigned int,int) ;
 int FUNC_1 (int ,int ,int ,void**) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_5 (TYPE_14__*,char const*,unsigned int,float) ;
 int FUNC_6 (int ,int ,TYPE_15__*) ;
 int FUNC_7 (int ,int ,int ,int ,int ,int ,TYPE_15__*) ;
 int FUNC_8 (double) ;
 struct font_glyph* FUNC_9 (int ,unsigned int) ;
 struct font_glyph* FUNC_10 (int ,char) ;
 unsigned int FUNC_11 (char const**) ;

__attribute__((used)) static void FUNC_12(
      video_frame_info_t* VAR_3,
      d3d10_font_t* VAR_4,
      const char* VAR_5,
      unsigned VAR_6,
      float VAR_7,
      const unsigned int VAR_8,
      float VAR_9,
      float VAR_10,
      unsigned VAR_11)
{
   unsigned VAR_12, VAR_13;
   void* VAR_14;
   d3d10_sprite_t* VAR_15;
   d3d10_video_t* VAR_16 = (d3d10_video_t*)VAR_3->userdata;
   unsigned VAR_17 = VAR_3->width;
   unsigned VAR_18 = VAR_3->height;
   int VAR_19 = FUNC_8(VAR_9 * VAR_17);
   int VAR_20 = FUNC_8((1.0 - VAR_10) * VAR_18);

   if ( !VAR_16 ||
         !VAR_16->sprites.enabled ||
         VAR_6 > (unsigned)VAR_16->sprites.capacity)
      return;

   if (VAR_16->sprites.offset + VAR_6 > (unsigned)VAR_16->sprites.capacity)
      VAR_16->sprites.offset = 0;

   switch (VAR_11)
   {
      case 128:
         VAR_19 -= FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7);
         break;

      case 129:
         VAR_19 -= FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7) / 2;
         break;
   }

   FUNC_1(VAR_16->sprites.vbo, VAR_1, 0, (void**)&VAR_14);
   VAR_15 = (d3d10_sprite_t*)VAR_14 + VAR_16->sprites.offset;

   for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++)
   {
      const struct font_glyph* VAR_21;
      const char* VAR_22 = &VAR_5[VAR_12];
      unsigned VAR_23 = FUNC_11(&VAR_22);
      unsigned VAR_24 = VAR_22 - &VAR_5[VAR_12];

      if (VAR_24 > 1)
         VAR_12 += VAR_24 - 1;

      VAR_21 = VAR_4->font_driver->get_glyph(VAR_4->font_data, VAR_23);

      if (!VAR_21)
         VAR_21 = VAR_4->font_driver->get_glyph(VAR_4->font_data, '?');

      if (!VAR_21)
         continue;

      VAR_15->pos.x = (VAR_19 + (VAR_21->draw_offset_x * VAR_7)) / (float)VAR_16->viewport.Width;
      VAR_15->pos.y = (VAR_20 + (VAR_21->draw_offset_y * VAR_7)) / (float)VAR_16->viewport.Height;
      VAR_15->pos.w = VAR_21->width * VAR_7 / (float)VAR_16->viewport.Width;
      VAR_15->pos.h = VAR_21->height * VAR_7 / (float)VAR_16->viewport.Height;

      VAR_15->coords.u = VAR_21->atlas_offset_x / (float)VAR_4->texture.desc.Width;
      VAR_15->coords.v = VAR_21->atlas_offset_y / (float)VAR_4->texture.desc.Height;
      VAR_15->coords.w = VAR_21->width / (float)VAR_4->texture.desc.Width;
      VAR_15->coords.h = VAR_21->height / (float)VAR_4->texture.desc.Height;

      VAR_15->params.scaling = 1;
      VAR_15->params.rotation = 0;

      VAR_15->colors[0] = VAR_8;
      VAR_15->colors[1] = VAR_8;
      VAR_15->colors[2] = VAR_8;
      VAR_15->colors[3] = VAR_8;

      VAR_15++;

      VAR_19 += VAR_21->advance_x * VAR_7;
      VAR_20 += VAR_21->advance_y * VAR_7;
   }

   VAR_13 = VAR_15 - ((d3d10_sprite_t*)VAR_14 + VAR_16->sprites.offset);
   FUNC_4(VAR_16->sprites.vbo);

   if (!VAR_13)
      return;

   if (VAR_4->atlas->dirty)
   {
      FUNC_7(
            VAR_16->device,
            VAR_4->atlas->width, VAR_4->atlas->height, VAR_4->atlas->width,
            VAR_2, VAR_4->atlas->buffer, &VAR_4->texture);
      VAR_4->atlas->dirty = 0;
   }

   FUNC_6(VAR_16->device, 0, &VAR_4->texture);
   FUNC_2(VAR_16->device, VAR_16->blend_enable, ((void*)0), VAR_0);

   FUNC_3(VAR_16->device, VAR_16->sprites.shader_font.ps);
   FUNC_0(VAR_16->device, VAR_13, VAR_16->sprites.offset);
   FUNC_3(VAR_16->device, VAR_16->sprites.shader.ps);

   VAR_16->sprites.offset += VAR_13;
}
