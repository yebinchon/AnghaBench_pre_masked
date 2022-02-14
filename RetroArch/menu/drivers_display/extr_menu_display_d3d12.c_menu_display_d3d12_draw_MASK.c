
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_16__ ;
typedef struct TYPE_28__ TYPE_15__ ;
typedef struct TYPE_27__ TYPE_14__ ;
typedef struct TYPE_26__ TYPE_13__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


struct TYPE_23__ {scalar_t__ userdata; } ;
typedef TYPE_10__ video_frame_info_t ;
struct TYPE_35__ {int id; } ;
struct TYPE_24__ {float x; float y; float height; float width; float scale_factor; scalar_t__ texture; TYPE_7__* coords; int rotation; TYPE_6__ pipeline; } ;
typedef TYPE_11__ menu_display_ctx_draw_t ;
struct TYPE_38__ {int cmd; } ;
struct TYPE_37__ {int capacity; int offset; int pipe; int vbo; int enabled; int vbo_view; } ;
struct TYPE_31__ {float Height; scalar_t__ Width; } ;
struct TYPE_32__ {TYPE_2__ viewport; } ;
struct TYPE_25__ {TYPE_9__ queue; TYPE_8__ sprites; int * pipes; TYPE_3__ chain; } ;
typedef TYPE_12__ d3d12_video_t ;
struct TYPE_26__ {int * color; int * texcoord; int * position; } ;
typedef TYPE_13__ d3d12_vertex_t ;
struct TYPE_27__ {scalar_t__ dirty; } ;
typedef TYPE_14__ d3d12_texture_t ;
struct TYPE_34__ {float scaling; int rotation; } ;
struct TYPE_33__ {float u; float v; float w; float h; } ;
struct TYPE_30__ {float x; float y; float w; float h; } ;
struct TYPE_28__ {void** colors; TYPE_5__ params; TYPE_4__ coords; TYPE_1__ pos; } ;
typedef TYPE_15__ d3d12_sprite_t ;
struct TYPE_36__ {int vertices; float* vertex; float* tex_coord; int* color; } ;
struct TYPE_29__ {int Begin; int End; int member_1; int member_0; } ;
typedef TYPE_16__ D3D12_RANGE ;


 int FUNC_0 (int ,int,int,int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int,int *) ;
 int FUNC_3 (int ,int ,TYPE_16__*,void**) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,TYPE_16__*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_6 (int,int,int,int) ;






 size_t VAR_2 ;
 int FUNC_7 (int ,TYPE_14__*) ;
 int FUNC_8 (int ,TYPE_14__*,scalar_t__) ;

__attribute__((used)) static void FUNC_9(menu_display_ctx_draw_t *VAR_3,
      video_frame_info_t *VAR_4)
{
   int VAR_5;
   d3d12_video_t *VAR_6 = (d3d12_video_t*)VAR_4->userdata;

   if (!VAR_6 || !VAR_3 || !VAR_3->texture)
      return;

   switch (VAR_3->pipeline.id)
   {
      case 133:
      case 132:
      case 131:
      case 130:
      case 129:
      case 128:
         FUNC_4(VAR_6->queue.cmd, VAR_6->pipes[VAR_3->pipeline.id]);
         FUNC_0(VAR_6->queue.cmd, VAR_3->coords->vertices, 1, 0, 0);
         FUNC_4(VAR_6->queue.cmd, VAR_6->sprites.pipe);
         FUNC_1(VAR_6->queue.cmd, VAR_0);
         FUNC_2(VAR_6->queue.cmd, 0, 1, &VAR_6->sprites.vbo_view);
         return;
   }

   if (VAR_3->coords->vertex && VAR_3->coords->tex_coord && VAR_3->coords->color)
      VAR_5 = VAR_3->coords->vertices;
   else
      VAR_5 = 1;

   if (!VAR_6->sprites.enabled || VAR_5 > VAR_6->sprites.capacity)
      return;

   if (VAR_6->sprites.offset + VAR_5 > VAR_6->sprites.capacity)
      VAR_6->sprites.offset = 0;

   {
      d3d12_sprite_t* VAR_7;
      D3D12_RANGE VAR_8 = { 0, 0 };
      FUNC_3(VAR_6->sprites.vbo, 0, &VAR_8, (void**)&VAR_7);
      VAR_7 += VAR_6->sprites.offset;

      if (VAR_5 == 1)
      {

         VAR_7->pos.x = VAR_3->x / (float)VAR_6->chain.viewport.Width;
         VAR_7->pos.y = (VAR_6->chain.viewport.Height - VAR_3->y - VAR_3->height) /
                         (float)VAR_6->chain.viewport.Height;
         VAR_7->pos.w = VAR_3->width / (float)VAR_6->chain.viewport.Width;
         VAR_7->pos.h = VAR_3->height / (float)VAR_6->chain.viewport.Height;

         VAR_7->coords.u = 0.0f;
         VAR_7->coords.v = 0.0f;
         VAR_7->coords.w = 1.0f;
         VAR_7->coords.h = 1.0f;

         if (VAR_3->scale_factor)
            VAR_7->params.scaling = VAR_3->scale_factor;
         else
            VAR_7->params.scaling = 1.0f;

         VAR_7->params.rotation = VAR_3->rotation;

         VAR_7->colors[3] = FUNC_6(
               0xFF * VAR_3->coords->color[0], 0xFF * VAR_3->coords->color[1],
               0xFF * VAR_3->coords->color[2], 0xFF * VAR_3->coords->color[3]);
         VAR_7->colors[2] = FUNC_6(
               0xFF * VAR_3->coords->color[4], 0xFF * VAR_3->coords->color[5],
               0xFF * VAR_3->coords->color[6], 0xFF * VAR_3->coords->color[7]);
         VAR_7->colors[1] = FUNC_6(
               0xFF * VAR_3->coords->color[8], 0xFF * VAR_3->coords->color[9],
               0xFF * VAR_3->coords->color[10], 0xFF * VAR_3->coords->color[11]);
         VAR_7->colors[0] = FUNC_6(
               0xFF * VAR_3->coords->color[12], 0xFF * VAR_3->coords->color[13],
               0xFF * VAR_3->coords->color[14], 0xFF * VAR_3->coords->color[15]);
      }
      else
      {
         int VAR_9;
         const float* VAR_10 = VAR_3->coords->vertex;
         const float* VAR_11 = VAR_3->coords->tex_coord;
         const float* VAR_12 = VAR_3->coords->color;

         for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
         {
            d3d12_vertex_t* VAR_13 = (d3d12_vertex_t*)VAR_7;
            VAR_13->position[0] = *VAR_10++;
            VAR_13->position[1] = *VAR_10++;
            VAR_13->texcoord[0] = *VAR_11++;
            VAR_13->texcoord[1] = *VAR_11++;
            VAR_13->color[0] = *VAR_12++;
            VAR_13->color[1] = *VAR_12++;
            VAR_13->color[2] = *VAR_12++;
            VAR_13->color[3] = *VAR_12++;

            VAR_7++;
         }
         FUNC_4(VAR_6->queue.cmd,
               VAR_6->pipes[VAR_2]);
         FUNC_1(VAR_6->queue.cmd,
               VAR_1);
      }

      VAR_8.Begin = VAR_6->sprites.offset * sizeof(*VAR_7);
      VAR_8.End = (VAR_6->sprites.offset + VAR_5) * sizeof(*VAR_7);
      FUNC_5(VAR_6->sprites.vbo, 0, &VAR_8);
   }

   {
      d3d12_texture_t* VAR_14 = (d3d12_texture_t*)VAR_3->texture;
      if (VAR_14->dirty)
      {
         FUNC_8(VAR_6->queue.cmd,
               VAR_14, VAR_4->userdata);

         if (VAR_5 > 1)
            FUNC_4(VAR_6->queue.cmd,
                  VAR_6->pipes[VAR_2]);
         else
            FUNC_4(VAR_6->queue.cmd,
                  VAR_6->sprites.pipe);
      }
      FUNC_7(VAR_6->queue.cmd, VAR_14);
   }

   FUNC_0(VAR_6->queue.cmd, VAR_5, 1, VAR_6->sprites.offset, 0);
   VAR_6->sprites.offset += VAR_5;

   if (VAR_5 > 1)
   {
      FUNC_4(VAR_6->queue.cmd, VAR_6->sprites.pipe);
      FUNC_1(VAR_6->queue.cmd, VAR_0);
   }

   return;
}
