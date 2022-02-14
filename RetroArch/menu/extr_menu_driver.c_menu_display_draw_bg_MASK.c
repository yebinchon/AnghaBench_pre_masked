
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct video_coords {unsigned int vertices; float const* vertex; float const* tex_coord; float const* lut_tex_coord; float const* color; } ;
struct TYPE_4__ {float* vertex; float* tex_coord; float scale_factor; float rotation; int * matrix_data; scalar_t__ texture; scalar_t__ color; struct video_coords* coords; scalar_t__ vertex_count; } ;
typedef TYPE_1__ menu_display_ctx_draw_t ;
typedef int math_matrix_4x4 ;
struct TYPE_5__ {float* (* get_default_vertices ) () ;float* (* get_default_tex_coords ) () ;scalar_t__ (* get_default_mvp ) (int *) ;} ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (scalar_t__,float) ;
 scalar_t__ VAR_1 ;
 float* FUNC_1 () ;
 float* FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;

void FUNC_4(menu_display_ctx_draw_t *VAR_2,
      video_frame_info_t *VAR_3, bool VAR_4,
      float VAR_5)
{
   static struct video_coords VAR_6;
   const float *VAR_7 = ((void*)0);
   const float *VAR_8 = ((void*)0);
   if (!VAR_0 || !VAR_2)
      return;

   VAR_7 = VAR_2->vertex;
   VAR_8 = VAR_2->tex_coord;

   if (!VAR_7)
      VAR_7 = VAR_0->get_default_vertices();
   if (!VAR_8)
      VAR_8 = VAR_0->get_default_tex_coords();

   VAR_6.vertices = (unsigned)VAR_2->vertex_count;
   VAR_6.vertex = VAR_7;
   VAR_6.tex_coord = VAR_8;
   VAR_6.lut_tex_coord = VAR_8;
   VAR_6.color = (const float*)VAR_2->color;

   VAR_2->coords = &VAR_6;
   VAR_2->scale_factor = 1.0f;
   VAR_2->rotation = 0.0f;

   if (VAR_2->texture)
      VAR_4 = 1;

   if (VAR_4)
      FUNC_0(VAR_2->color, VAR_5);

   if (!VAR_2->texture)
      VAR_2->texture = VAR_1;

   if (VAR_0 && VAR_0->get_default_mvp)
      VAR_2->matrix_data = (math_matrix_4x4*)VAR_0->get_default_mvp(VAR_3);
}
