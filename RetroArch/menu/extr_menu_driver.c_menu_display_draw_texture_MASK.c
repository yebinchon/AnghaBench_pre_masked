
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct video_coords {int vertices; float const* color; int * lut_tex_coord; int * tex_coord; int * vertex; } ;
struct TYPE_7__ {double rotation; double scale_x; double scale_y; int scale_z; int scale_enable; int * matrix; } ;
typedef TYPE_2__ menu_display_ctx_rotate_draw_t ;
struct TYPE_6__ {scalar_t__ id; } ;
struct TYPE_8__ {unsigned int width; unsigned int height; uintptr_t texture; int x; unsigned int y; TYPE_1__ pipeline; int prim_type; int * matrix_data; struct video_coords* coords; } ;
typedef TYPE_3__ menu_display_ctx_draw_t ;
typedef int math_matrix_4x4 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;

void FUNC_2(
      video_frame_info_t *VAR_1,
      int VAR_2, int VAR_3, unsigned VAR_4, unsigned VAR_5,
      unsigned VAR_6, unsigned VAR_7,
      float *VAR_8, uintptr_t VAR_9)
{
   menu_display_ctx_draw_t VAR_10;
   menu_display_ctx_rotate_draw_t VAR_11;
   struct video_coords VAR_12;
   math_matrix_4x4 VAR_13;
   VAR_11.matrix = &VAR_13;
   VAR_11.rotation = 0.0;
   VAR_11.scale_x = 1.0;
   VAR_11.scale_y = 1.0;
   VAR_11.scale_z = 1;
   VAR_11.scale_enable = 1;
   VAR_12.vertices = 4;
   VAR_12.vertex = ((void*)0);
   VAR_12.tex_coord = ((void*)0);
   VAR_12.lut_tex_coord = ((void*)0);
   VAR_10.width = VAR_4;
   VAR_10.height = VAR_5;
   VAR_10.coords = &VAR_12;
   VAR_10.matrix_data = &VAR_13;
   VAR_10.prim_type = VAR_0;
   VAR_10.pipeline.id = 0;
   VAR_12.color = (const float*)VAR_8;

   FUNC_1(&VAR_11, VAR_1);

   VAR_10.texture = VAR_9;
   VAR_10.x = VAR_2;
   VAR_10.y = VAR_7 - VAR_3;
   FUNC_0(&VAR_10, VAR_1);
}
