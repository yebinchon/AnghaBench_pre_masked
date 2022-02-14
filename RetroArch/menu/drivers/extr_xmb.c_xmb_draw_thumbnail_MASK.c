
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {float shadow_offset; } ;
typedef TYPE_2__ xmb_handle_t ;
struct TYPE_14__ {scalar_t__ xmb_shadows_enable; } ;
typedef TYPE_3__ video_frame_info_t ;
struct video_coords {int vertices; float* color; int * lut_tex_coord; int * tex_coord; int * vertex; } ;
struct TYPE_15__ {int scale_x; int scale_y; int scale_z; int scale_enable; scalar_t__ rotation; int * matrix; } ;
typedef TYPE_4__ menu_display_ctx_rotate_draw_t ;
struct TYPE_12__ {scalar_t__ id; } ;
struct TYPE_16__ {float width; float height; uintptr_t texture; float x; float y; TYPE_1__ pipeline; int prim_type; int * matrix_data; struct video_coords* coords; } ;
typedef TYPE_5__ menu_display_ctx_draw_t ;
typedef int math_matrix_4x4 ;


 int VAR_0 ;
 float* VAR_1 ;
 int FUNC_0 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_2 (float*,float) ;

__attribute__((used)) static void FUNC_3(
      video_frame_info_t *VAR_2,
      xmb_handle_t *VAR_3, float *VAR_4,
      unsigned VAR_5, unsigned VAR_6,
      float VAR_7, float VAR_8,
      float VAR_9, float VAR_10, uintptr_t VAR_11)
{
   menu_display_ctx_rotate_draw_t VAR_12;
   menu_display_ctx_draw_t VAR_13;
   struct video_coords VAR_14;
   math_matrix_4x4 VAR_15;

   VAR_12.matrix = &VAR_15;
   VAR_12.rotation = 0;
   VAR_12.scale_x = 1;
   VAR_12.scale_y = 1;
   VAR_12.scale_z = 1;
   VAR_12.scale_enable = 1;

   FUNC_1(&VAR_12, VAR_2);

   VAR_14.vertices = 4;
   VAR_14.vertex = ((void*)0);
   VAR_14.tex_coord = ((void*)0);
   VAR_14.lut_tex_coord = ((void*)0);

   VAR_13.width = VAR_9;
   VAR_13.height = VAR_10;
   VAR_13.coords = &VAR_14;
   VAR_13.matrix_data = &VAR_15;
   VAR_13.texture = VAR_11;
   VAR_13.prim_type = VAR_0;
   VAR_13.pipeline.id = 0;

   if (VAR_2->xmb_shadows_enable)
   {
      FUNC_2(VAR_1, VAR_4[3] * 0.35f);

      VAR_14.color = VAR_1;
      VAR_13.x = VAR_7 + VAR_3->shadow_offset;
      VAR_13.y = VAR_6 - VAR_8 - VAR_3->shadow_offset;

      FUNC_0(&VAR_13, VAR_2);
   }

   VAR_14.color = (const float*)VAR_4;
   VAR_13.x = VAR_7;
   VAR_13.y = VAR_6 - VAR_8;

   FUNC_2(VAR_4, 1.0f);

   FUNC_0(&VAR_13, VAR_2);
}
