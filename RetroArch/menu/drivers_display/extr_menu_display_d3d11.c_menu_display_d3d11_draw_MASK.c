
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_28__ {scalar_t__ userdata; } ;
typedef TYPE_8__ video_frame_info_t ;
struct TYPE_25__ {int id; } ;
struct TYPE_29__ {float x; float y; float height; float width; float scale_factor; scalar_t__ texture; TYPE_6__* coords; int rotation; TYPE_5__ pipeline; } ;
typedef TYPE_9__ menu_display_ctx_draw_t ;
struct TYPE_27__ {int capacity; int offset; int shader; int vbo; int enabled; } ;
struct TYPE_22__ {float Height; scalar_t__ Width; } ;
struct TYPE_17__ {int context; TYPE_7__ sprites; int * shaders; TYPE_2__ viewport; int blend_enable; } ;
typedef TYPE_10__ d3d11_video_t ;
struct TYPE_18__ {int * color; int * texcoord; int * position; } ;
typedef TYPE_11__ d3d11_vertex_t ;
typedef int d3d11_texture_t ;
struct TYPE_24__ {float scaling; int rotation; } ;
struct TYPE_23__ {float u; float v; float w; float h; } ;
struct TYPE_21__ {float x; float y; float w; float h; } ;
struct TYPE_19__ {void** colors; TYPE_4__ params; TYPE_3__ coords; TYPE_1__ pos; } ;
typedef TYPE_12__ d3d11_sprite_t ;
struct TYPE_26__ {int vertices; float* vertex; float* tex_coord; float* color; } ;
struct TYPE_20__ {scalar_t__ pData; } ;
typedef TYPE_13__ D3D11_MAPPED_SUBRESOURCE ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,TYPE_13__*) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_6 (int,int,int,int) ;






 size_t VAR_4 ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_9(menu_display_ctx_draw_t *VAR_5,
      video_frame_info_t *VAR_6)
{
   int VAR_7;
   d3d11_video_t *VAR_8 = (d3d11_video_t*)VAR_6->userdata;

   if (!VAR_8 || !VAR_5 || !VAR_5->texture)
      return;

   switch (VAR_5->pipeline.id)
   {
      case 133:
      case 132:
      case 131:
      case 130:
      case 129:
      case 128:
         FUNC_7(VAR_8->context, &VAR_8->shaders[VAR_5->pipeline.id]);
         FUNC_0(VAR_8->context, VAR_5->coords->vertices, 0);

         FUNC_2(VAR_8->context, VAR_8->blend_enable, ((void*)0), VAR_0);
         FUNC_7(VAR_8->context, &VAR_8->sprites.shader);
         FUNC_4(VAR_8->context, 0, VAR_8->sprites.vbo, sizeof(d3d11_sprite_t), 0);
         FUNC_3(VAR_8->context, VAR_2);
         return;
   }

   if (VAR_5->coords->vertex && VAR_5->coords->tex_coord && VAR_5->coords->color)
      VAR_7 = VAR_5->coords->vertices;
   else
      VAR_7 = 1;

   if (!VAR_8->sprites.enabled || VAR_7 > VAR_8->sprites.capacity)
      return;

   if (VAR_8->sprites.offset + VAR_7 > VAR_8->sprites.capacity)
      VAR_8->sprites.offset = 0;

   {
      D3D11_MAPPED_SUBRESOURCE VAR_9;
      d3d11_sprite_t* VAR_10 = ((void*)0);

      FUNC_1(
            VAR_8->context, VAR_8->sprites.vbo, 0, VAR_1, 0, &VAR_9);

      VAR_10 = (d3d11_sprite_t*)VAR_9.pData + VAR_8->sprites.offset;

      if (VAR_7 == 1)
      {
         VAR_10->pos.x = VAR_5->x / (float)VAR_8->viewport.Width;
         VAR_10->pos.y =
               (VAR_8->viewport.Height - VAR_5->y - VAR_5->height) / (float)VAR_8->viewport.Height;
         VAR_10->pos.w = VAR_5->width / (float)VAR_8->viewport.Width;
         VAR_10->pos.h = VAR_5->height / (float)VAR_8->viewport.Height;

         VAR_10->coords.u = 0.0f;
         VAR_10->coords.v = 0.0f;
         VAR_10->coords.w = 1.0f;
         VAR_10->coords.h = 1.0f;

         if (VAR_5->scale_factor)
            VAR_10->params.scaling = VAR_5->scale_factor;
         else
            VAR_10->params.scaling = 1.0f;

         VAR_10->params.rotation = VAR_5->rotation;

         VAR_10->colors[3] = FUNC_6(
               0xFF * VAR_5->coords->color[0], 0xFF * VAR_5->coords->color[1],
               0xFF * VAR_5->coords->color[2], 0xFF * VAR_5->coords->color[3]);
         VAR_10->colors[2] = FUNC_6(
               0xFF * VAR_5->coords->color[4], 0xFF * VAR_5->coords->color[5],
               0xFF * VAR_5->coords->color[6], 0xFF * VAR_5->coords->color[7]);
         VAR_10->colors[1] = FUNC_6(
               0xFF * VAR_5->coords->color[8], 0xFF * VAR_5->coords->color[9],
               0xFF * VAR_5->coords->color[10], 0xFF * VAR_5->coords->color[11]);
         VAR_10->colors[0] = FUNC_6(
               0xFF * VAR_5->coords->color[12], 0xFF * VAR_5->coords->color[13],
               0xFF * VAR_5->coords->color[14], 0xFF * VAR_5->coords->color[15]);
      }
      else
      {
         int VAR_11;
         const float* VAR_12 = VAR_5->coords->vertex;
         const float* VAR_13 = VAR_5->coords->tex_coord;
         const float* VAR_14 = VAR_5->coords->color;

         for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
         {
            d3d11_vertex_t* VAR_15 = (d3d11_vertex_t*)VAR_10;
            VAR_15->position[0] = *VAR_12++;
            VAR_15->position[1] = *VAR_12++;
            VAR_15->texcoord[0] = *VAR_13++;
            VAR_15->texcoord[1] = *VAR_13++;
            VAR_15->color[0] = *VAR_14++;
            VAR_15->color[1] = *VAR_14++;
            VAR_15->color[2] = *VAR_14++;
            VAR_15->color[3] = *VAR_14++;

            VAR_10++;
         }

         FUNC_7(VAR_8->context, &VAR_8->shaders[VAR_4]);
         FUNC_3(VAR_8->context, VAR_3);
      }

      FUNC_5(VAR_8->context, VAR_8->sprites.vbo, 0);
   }

   FUNC_8(VAR_8->context, 0, (d3d11_texture_t*)VAR_5->texture);
   FUNC_0(VAR_8->context, VAR_7, VAR_8->sprites.offset);
   VAR_8->sprites.offset += VAR_7;

   if (VAR_7 > 1)
   {
      FUNC_7(VAR_8->context, &VAR_8->sprites.shader);
      FUNC_3(VAR_8->context, VAR_2);
   }

   return;
}
