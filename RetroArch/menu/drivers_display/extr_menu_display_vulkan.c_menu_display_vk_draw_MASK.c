
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_23__ {int nearest; int linear; int mipmap_linear; } ;
struct vk_texture {int default_smooth; int mipmap; } ;
struct TYPE_22__ {int blend; int * pipelines; struct vk_texture blank_texture; } ;
struct TYPE_18__ {int dirty; } ;
struct TYPE_25__ {TYPE_6__ samplers; TYPE_5__ display; TYPE_2__* chain; int context; TYPE_1__ tracker; } ;
typedef TYPE_8__ vk_t ;
struct TYPE_26__ {scalar_t__ userdata; } ;
typedef TYPE_9__ video_frame_info_t ;
struct TYPE_20__ {int a; int b; int g; int r; } ;
struct vk_vertex {float y; TYPE_3__ color; int tex_y; int tex_x; int x; } ;
struct vk_draw_triangles {int uniform_size; unsigned int vertices; struct vk_buffer_range* vbo; int uniform; int sampler; struct vk_texture* texture; int pipeline; } ;
struct vk_buffer_range {scalar_t__ data; } ;
struct TYPE_21__ {int id; int backend_data_size; int backend_data; } ;
struct TYPE_17__ {TYPE_7__* coords; int matrix_data; int prim_type; TYPE_4__ pipeline; scalar_t__ texture; } ;
typedef TYPE_10__ menu_display_ctx_draw_t ;
typedef int math_matrix_4x4 ;
struct TYPE_24__ {float* vertex; float* tex_coord; float* color; int vertices; void* lut_tex_coord; } ;
struct TYPE_19__ {int vbo; } ;







 int VAR_0 ;
 int VAR_1 ;
 float* FUNC_0 () ;
 int FUNC_1 (TYPE_9__*) ;
 void* FUNC_2 () ;
 float* FUNC_3 () ;
 int FUNC_4 (TYPE_10__*,TYPE_9__*) ;
 size_t FUNC_5 (int ,int ) ;
 size_t FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int *,int,struct vk_buffer_range*) ;
 int FUNC_8 (TYPE_8__*,struct vk_draw_triangles*) ;

__attribute__((used)) static void FUNC_9(menu_display_ctx_draw_t *VAR_2,
      video_frame_info_t *VAR_3)
{
   unsigned VAR_4;
   struct vk_buffer_range VAR_5;
   struct vk_texture *VAR_6 = ((void*)0);
   const float *VAR_7 = ((void*)0);
   const float *VAR_8 = ((void*)0);
   const float *VAR_9 = ((void*)0);
   struct vk_vertex *VAR_10 = ((void*)0);
   vk_t *VAR_11 = (vk_t*)VAR_3->userdata;

   if (!VAR_11 || !VAR_2)
      return;

   VAR_6 = (struct vk_texture*)VAR_2->texture;
   VAR_7 = VAR_2->coords->vertex;
   VAR_8 = VAR_2->coords->tex_coord;
   VAR_9 = VAR_2->coords->color;

   if (!VAR_7)
      VAR_7 = FUNC_3();
   if (!VAR_8)
      VAR_8 = FUNC_2();
   if (!VAR_2->coords->lut_tex_coord)
      VAR_2->coords->lut_tex_coord = FUNC_2();
   if (!VAR_6)
      VAR_6 = &VAR_11->display.blank_texture;
   if (!VAR_9)
      VAR_9 = FUNC_0();

   FUNC_4(VAR_2, VAR_3);

   VAR_11->tracker.dirty |= VAR_1;



   if (!FUNC_7(VAR_11->context, &VAR_11->chain->vbo,
         VAR_2->coords->vertices * sizeof(struct vk_vertex), &VAR_5))
      return;

   VAR_10 = (struct vk_vertex*)VAR_5.data;
   for (VAR_4 = 0; VAR_4 < VAR_2->coords->vertices; VAR_4++, VAR_10++)
   {
      VAR_10->x = *VAR_7++;

      VAR_10->y = 1.0f - (*VAR_7++);
      VAR_10->tex_x = *VAR_8++;
      VAR_10->tex_y = *VAR_8++;
      VAR_10->color.r = *VAR_9++;
      VAR_10->color.g = *VAR_9++;
      VAR_10->color.b = *VAR_9++;
      VAR_10->color.a = *VAR_9++;
   }

   switch (VAR_2->pipeline.id)
   {
      default:
      {
         struct vk_draw_triangles VAR_12;

         VAR_12.pipeline = VAR_11->display.pipelines[
               FUNC_5(VAR_2->prim_type, VAR_11->display.blend)];
         VAR_12.texture = VAR_6;
         VAR_12.sampler = VAR_6->mipmap ?
            VAR_11->samplers.mipmap_linear :
            (VAR_6->default_smooth ? VAR_11->samplers.linear
             : VAR_11->samplers.nearest);
         VAR_12.uniform = VAR_2->matrix_data
            ? VAR_2->matrix_data : FUNC_1(VAR_3);
         VAR_12.uniform_size = sizeof(math_matrix_4x4);
         VAR_12.vbo = &VAR_5;
         VAR_12.vertices = VAR_2->coords->vertices;

         FUNC_8(VAR_11, &VAR_12);
         break;
      }
   }
}
