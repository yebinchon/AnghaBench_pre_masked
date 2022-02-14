
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_16__ ;
typedef struct TYPE_29__ TYPE_15__ ;
typedef struct TYPE_28__ TYPE_14__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


struct TYPE_25__ {unsigned int width; unsigned int height; scalar_t__ userdata; } ;
typedef TYPE_11__ video_frame_info_t ;
struct font_glyph {float draw_offset_x; float draw_offset_y; float width; float height; float atlas_offset_x; float atlas_offset_y; float advance_x; float advance_y; } ;
struct TYPE_36__ {unsigned int offset; int pipe; int pipe_font; int vbo; scalar_t__ capacity; int enabled; } ;
struct TYPE_35__ {int cmd; } ;
struct TYPE_38__ {scalar_t__ Height; scalar_t__ Width; } ;
struct TYPE_39__ {TYPE_8__ viewport; } ;
struct TYPE_26__ {TYPE_6__ sprites; TYPE_5__ queue; TYPE_9__ chain; } ;
typedef TYPE_12__ d3d12_video_t ;
struct TYPE_33__ {int scaling; scalar_t__ rotation; } ;
struct TYPE_31__ {float u; float v; float w; float h; } ;
struct TYPE_24__ {int x; int y; float w; float h; } ;
struct TYPE_27__ {unsigned int* colors; TYPE_3__ params; TYPE_1__ coords; TYPE_10__ pos; } ;
typedef TYPE_13__ d3d12_sprite_t ;
struct TYPE_32__ {scalar_t__ Height; scalar_t__ Width; } ;
struct TYPE_30__ {scalar_t__ dirty; TYPE_2__ desc; } ;
struct TYPE_28__ {TYPE_16__ texture; TYPE_4__* atlas; int font_data; TYPE_7__* font_driver; } ;
typedef TYPE_14__ d3d12_font_t ;
struct TYPE_37__ {struct font_glyph* (* get_glyph ) (int ,char) ;} ;
struct TYPE_34__ {int dirty; int buffer; int width; int height; } ;
struct TYPE_29__ {uintptr_t Begin; uintptr_t End; int member_1; int member_0; } ;
typedef TYPE_15__ D3D12_RANGE ;


 int FUNC_0 (int ,unsigned int,int,int,int ) ;
 int FUNC_1 (int ,int ,TYPE_15__*,void**) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,TYPE_15__*) ;
 int VAR_0 ;


 int FUNC_4 (TYPE_14__*,char const*,unsigned int,float) ;
 int FUNC_5 (int ,TYPE_16__*) ;
 int FUNC_6 (int ,int ,int ,int ,int ,TYPE_16__*) ;
 int FUNC_7 (int ,TYPE_16__*,scalar_t__) ;
 int FUNC_8 (double) ;
 struct font_glyph* FUNC_9 (int ,unsigned int) ;
 struct font_glyph* FUNC_10 (int ,char) ;
 unsigned int FUNC_11 (char const**) ;

__attribute__((used)) static void FUNC_12(
      video_frame_info_t* VAR_1,
      d3d12_font_t* VAR_2,
      const char* VAR_3,
      unsigned VAR_4,
      float VAR_5,
      const unsigned int VAR_6,
      float VAR_7,
      float VAR_8,
      unsigned VAR_9)
{
   unsigned VAR_10, VAR_11;
   void* VAR_12 = ((void*)0);
   d3d12_sprite_t* VAR_13 = ((void*)0);
   d3d12_sprite_t* VAR_14 = ((void*)0);
   d3d12_video_t* VAR_15 = (d3d12_video_t*)VAR_1->userdata;
   unsigned VAR_16 = VAR_1->width;
   unsigned VAR_17 = VAR_1->height;
   int VAR_18 = FUNC_8(VAR_7 * VAR_16);
   int VAR_19 = FUNC_8((1.0 - VAR_8) * VAR_17);
   D3D12_RANGE VAR_20 = { 0, 0 };

   if ( !VAR_15 ||
         !VAR_15->sprites.enabled ||
         VAR_4 > (unsigned)VAR_15->sprites.capacity)
      return;

   if (VAR_15->sprites.offset + VAR_4 > (unsigned)VAR_15->sprites.capacity)
      VAR_15->sprites.offset = 0;

   switch (VAR_9)
   {
      case 128:
         VAR_18 -= FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5);
         break;

      case 129:
         VAR_18 -= FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5) / 2;
         break;
   }

   FUNC_1(VAR_15->sprites.vbo, 0, &VAR_20, (void**)&VAR_14);

   VAR_13 = VAR_14 + VAR_15->sprites.offset;
   VAR_20.Begin = (uintptr_t)VAR_13 - (uintptr_t)VAR_14;

   for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
   {
      const struct font_glyph* VAR_21;
      const char* VAR_22 = &VAR_3[VAR_10];
      unsigned VAR_23 = FUNC_11(&VAR_22);
      unsigned VAR_24 = VAR_22 - &VAR_3[VAR_10];

      if (VAR_24 > 1)
         VAR_10 += VAR_24 - 1;

      VAR_21 = VAR_2->font_driver->get_glyph(VAR_2->font_data, VAR_23);

      if (!VAR_21)
         VAR_21 = VAR_2->font_driver->get_glyph(VAR_2->font_data, '?');

      if (!VAR_21)
         continue;

      VAR_13->pos.x = (VAR_18 + (VAR_21->draw_offset_x * VAR_5)) / (float)VAR_15->chain.viewport.Width;
      VAR_13->pos.y = (VAR_19 + (VAR_21->draw_offset_y * VAR_5)) / (float)VAR_15->chain.viewport.Height;
      VAR_13->pos.w = VAR_21->width * VAR_5 / (float)VAR_15->chain.viewport.Width;
      VAR_13->pos.h = VAR_21->height * VAR_5 / (float)VAR_15->chain.viewport.Height;

      VAR_13->coords.u = VAR_21->atlas_offset_x / (float)VAR_2->texture.desc.Width;
      VAR_13->coords.v = VAR_21->atlas_offset_y / (float)VAR_2->texture.desc.Height;
      VAR_13->coords.w = VAR_21->width / (float)VAR_2->texture.desc.Width;
      VAR_13->coords.h = VAR_21->height / (float)VAR_2->texture.desc.Height;

      VAR_13->params.scaling = 1;
      VAR_13->params.rotation = 0;

      VAR_13->colors[0] = VAR_6;
      VAR_13->colors[1] = VAR_6;
      VAR_13->colors[2] = VAR_6;
      VAR_13->colors[3] = VAR_6;

      VAR_13++;

      VAR_18 += VAR_21->advance_x * VAR_5;
      VAR_19 += VAR_21->advance_y * VAR_5;
   }

   VAR_20.End = (uintptr_t)VAR_13 - (uintptr_t)VAR_14;
   FUNC_3(VAR_15->sprites.vbo, 0, &VAR_20);

   VAR_11 = VAR_13 - VAR_14 - VAR_15->sprites.offset;

   if (!VAR_11)
      return;

   if (VAR_2->atlas->dirty)
   {
      FUNC_6(
            VAR_2->atlas->width, VAR_2->atlas->height,
            VAR_2->atlas->width, VAR_0,
            VAR_2->atlas->buffer, &VAR_2->texture);
      VAR_2->atlas->dirty = 0;
   }

   if(VAR_2->texture.dirty)
      FUNC_7(VAR_15->queue.cmd, &VAR_2->texture,
            VAR_1->userdata);

   FUNC_2(VAR_15->queue.cmd, VAR_15->sprites.pipe_font);
   FUNC_5(VAR_15->queue.cmd, &VAR_2->texture);
   FUNC_0(VAR_15->queue.cmd, VAR_11, 1, VAR_15->sprites.offset, 0);

   FUNC_2(VAR_15->queue.cmd, VAR_15->sprites.pipe);

   VAR_15->sprites.offset += VAR_11;
}
