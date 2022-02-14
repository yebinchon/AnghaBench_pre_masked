
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct video_coords {int vertices; float const* color; int * lut_tex_coord; int * tex_coord; int * vertex; } ;
struct TYPE_7__ {float rotation; float scale_x; float scale_y; int scale_z; int scale_enable; int * matrix; } ;
typedef TYPE_2__ menu_display_ctx_rotate_draw_t ;
struct TYPE_6__ {scalar_t__ id; } ;
struct TYPE_8__ {float x; unsigned int y; unsigned int width; unsigned int height; float scale_factor; float rotation; uintptr_t texture; TYPE_1__ pipeline; int prim_type; int * matrix_data; struct video_coords* coords; } ;
typedef TYPE_3__ menu_display_ctx_draw_t ;
typedef int math_matrix_4x4 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 float const* VAR_1 ;

void FUNC_2(
      video_frame_info_t *VAR_2,
      unsigned VAR_3,
      unsigned VAR_4,
      uintptr_t VAR_5,
      float VAR_6, float VAR_7,
      unsigned VAR_8, unsigned VAR_9,
      float VAR_10, float VAR_11,
      float *VAR_12)
{
   menu_display_ctx_rotate_draw_t VAR_13;
   menu_display_ctx_draw_t VAR_14;
   struct video_coords VAR_15;
   math_matrix_4x4 VAR_16;

   VAR_13.matrix = &VAR_16;
   VAR_13.rotation = VAR_10;
   VAR_13.scale_x = VAR_11;
   VAR_13.scale_y = VAR_11;
   VAR_13.scale_z = 1;
   VAR_13.scale_enable = 1;

   FUNC_1(&VAR_13, VAR_2);

   VAR_15.vertices = 4;
   VAR_15.vertex = ((void*)0);
   VAR_15.tex_coord = ((void*)0);
   VAR_15.lut_tex_coord = ((void*)0);
   VAR_15.color = VAR_12 ? (const float*)VAR_12 : VAR_1;

   VAR_14.x = VAR_6;
   VAR_14.y = VAR_9 - VAR_7 - VAR_4;
   VAR_14.width = VAR_3;
   VAR_14.height = VAR_4;
   VAR_14.scale_factor = VAR_11;
   VAR_14.rotation = VAR_10;
   VAR_14.coords = &VAR_15;
   VAR_14.matrix_data = &VAR_16;
   VAR_14.texture = VAR_5;
   VAR_14.prim_type = VAR_0;
   VAR_14.pipeline.id = 0;

   FUNC_0(&VAR_14, VAR_2);
}
