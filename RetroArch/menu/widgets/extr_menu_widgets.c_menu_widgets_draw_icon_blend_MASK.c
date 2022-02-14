
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct video_coords {int vertices; float* color; int * lut_tex_coord; int * tex_coord; int * vertex; } ;
struct TYPE_7__ {float rotation; float scale_x; float scale_y; int scale_z; int scale_enable; int * matrix; } ;
typedef TYPE_2__ menu_display_ctx_rotate_draw_t ;
struct TYPE_6__ {scalar_t__ id; } ;
struct TYPE_8__ {float x; unsigned int y; unsigned int width; unsigned int height; float scale_factor; float rotation; uintptr_t texture; TYPE_1__ pipeline; int prim_type; int * matrix_data; struct video_coords* coords; } ;
typedef TYPE_3__ menu_display_ctx_draw_t ;
typedef int math_matrix_4x4 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_2(
      video_frame_info_t *VAR_1,
      unsigned VAR_2,
      unsigned VAR_3,
      uintptr_t VAR_4,
      float VAR_5, float VAR_6,
      unsigned VAR_7, unsigned VAR_8,
      float VAR_9, float VAR_10,
      float *VAR_11)
{
   menu_display_ctx_rotate_draw_t VAR_12;
   menu_display_ctx_draw_t VAR_13;
   struct video_coords VAR_14;
   math_matrix_4x4 VAR_15;

   if (!VAR_4)
      return;

   VAR_12.matrix = &VAR_15;
   VAR_12.rotation = VAR_9;
   VAR_12.scale_x = VAR_10;
   VAR_12.scale_y = VAR_10;
   VAR_12.scale_z = 1;
   VAR_12.scale_enable = 1;

   FUNC_1(&VAR_12, VAR_1);

   VAR_14.vertices = 4;
   VAR_14.vertex = ((void*)0);
   VAR_14.tex_coord = ((void*)0);
   VAR_14.lut_tex_coord = ((void*)0);
   VAR_14.color = VAR_11;

   VAR_13.x = VAR_5;
   VAR_13.y = VAR_8 - VAR_6 - VAR_3;
   VAR_13.width = VAR_2;
   VAR_13.height = VAR_3;
   VAR_13.scale_factor = VAR_10;
   VAR_13.rotation = VAR_9;
   VAR_13.coords = &VAR_14;
   VAR_13.matrix_data = &VAR_15;
   VAR_13.texture = VAR_4;
   VAR_13.prim_type = VAR_0;
   VAR_13.pipeline.id = 0;

   FUNC_0(&VAR_13, VAR_1);
}
