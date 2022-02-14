
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ xmb_shadows_enable; } ;
typedef TYPE_2__ video_frame_info_t ;
struct video_coords {int vertices; float const* color; int * lut_tex_coord; int * tex_coord; int * vertex; } ;
struct TYPE_7__ {scalar_t__ id; } ;
struct TYPE_9__ {int width; int height; float rotation; float scale_factor; uintptr_t texture; float x; unsigned int y; TYPE_1__ pipeline; int prim_type; int * matrix_data; struct video_coords* coords; } ;
typedef TYPE_3__ menu_display_ctx_draw_t ;
typedef int math_matrix_4x4 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (float const*,float) ;
 float const* VAR_1 ;

__attribute__((used)) static void FUNC_2(
      video_frame_info_t *VAR_2,
      int VAR_3,
      math_matrix_4x4 *VAR_4,
      uintptr_t VAR_5,
      float VAR_6,
      float VAR_7,
      unsigned VAR_8,
      unsigned VAR_9,
      float VAR_10,
      float VAR_11,
      float VAR_12,
      float *VAR_13,
      float VAR_14)
{
   menu_display_ctx_draw_t VAR_15;
   struct video_coords VAR_16;

   if (
         (VAR_6 < (-VAR_3 / 2.0f)) ||
         (VAR_6 > VAR_8) ||
         (VAR_7 < (VAR_3 / 2.0f)) ||
         (VAR_7 > VAR_9 + VAR_3)
      )
      return;

   VAR_16.vertices = 4;
   VAR_16.vertex = ((void*)0);
   VAR_16.tex_coord = ((void*)0);
   VAR_16.lut_tex_coord = ((void*)0);

   VAR_15.width = VAR_3;
   VAR_15.height = VAR_3;
   VAR_15.rotation = VAR_11;
   VAR_15.scale_factor = VAR_12;




   VAR_15.coords = &VAR_16;
   VAR_15.matrix_data = VAR_4;
   VAR_15.texture = VAR_5;
   VAR_15.prim_type = VAR_0;
   VAR_15.pipeline.id = 0;

   if (VAR_2->xmb_shadows_enable)
   {
      FUNC_1(VAR_1, VAR_13[3] * 0.35f);

      VAR_16.color = VAR_1;
      VAR_15.x = VAR_6 + VAR_14;
      VAR_15.y = VAR_9 - VAR_7 - VAR_14;
      FUNC_0(&VAR_15, VAR_2);
   }

   VAR_16.color = (const float*)VAR_13;
   VAR_15.x = VAR_6;
   VAR_15.y = VAR_9 - VAR_7;
   FUNC_0(&VAR_15, VAR_2);
}
