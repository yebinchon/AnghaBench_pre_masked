
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t VGuint ;
struct TYPE_4__ {float stroke_line_width; float stroke_miter_limit; float stroke_dash_phase; int stroke_dash_phase_reset; int scissoring; float* tile_fill_color; float* clear_color; int color_transform; float* color_transform_values; int masking; int filter_format_linear; int filter_format_pre; int filter_channel_mask; int pixel_layout; int blend_mode; void* stroke_paint; void* fill_paint; int rendering_quality; scalar_t__ scissor_rects_count; int image_mode; int image_quality; scalar_t__ stroke_dash_pattern_count; int stroke_join_style; int stroke_cap_style; int fill_rule; TYPE_3__* matrices; int matrix_mode; int * flush_callback; int * render_callback; int * shared_state; } ;
typedef TYPE_1__ VG_CLIENT_STATE_T ;
typedef int VG_CLIENT_SHARED_STATE_T ;
struct TYPE_5__ {int server; int client; } ;


 size_t FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

VG_CLIENT_STATE_T *FUNC_4(VG_CLIENT_SHARED_STATE_T *VAR_14)
{
   VGuint VAR_15;

   VG_CLIENT_STATE_T *VAR_16 = (VG_CLIENT_STATE_T *)FUNC_1(sizeof(VG_CLIENT_STATE_T), "VG_CLIENT_STATE_T");
   if (!VAR_16) {
      return ((void*)0);
   }

   FUNC_2(VAR_14);
   VAR_16->shared_state = VAR_14;

   VAR_16->render_callback = ((void*)0);
   VAR_16->flush_callback = ((void*)0);

   VAR_16->matrix_mode = VAR_10;
   for (VAR_15 = 0; VAR_15 != FUNC_0(VAR_16->matrices); ++VAR_15) {
      FUNC_3(&VAR_16->matrices[VAR_15].client);
      FUNC_3(&VAR_16->matrices[VAR_15].server);
   }

   VAR_16->fill_rule = VAR_5;
   VAR_16->stroke_line_width = 1.0f;
   VAR_16->stroke_cap_style = VAR_3;
   VAR_16->stroke_join_style = VAR_9;
   VAR_16->stroke_miter_limit = 4.0f;
   VAR_16->stroke_dash_pattern_count = 0;
   VAR_16->stroke_dash_phase = 0.0f;
   VAR_16->stroke_dash_phase_reset = 0;
   VAR_16->image_quality = VAR_7;
   VAR_16->image_mode = VAR_4;

   VAR_16->scissoring = 0;
   VAR_16->scissor_rects_count = 0;

   VAR_16->rendering_quality = VAR_13;

   VAR_16->fill_paint = VAR_8;
   VAR_16->stroke_paint = VAR_8;
   VAR_16->tile_fill_color[0] = 0.0f;
   VAR_16->tile_fill_color[1] = 0.0f;
   VAR_16->tile_fill_color[2] = 0.0f;
   VAR_16->tile_fill_color[3] = 0.0f;
   VAR_16->clear_color[0] = 0.0f;
   VAR_16->clear_color[1] = 0.0f;
   VAR_16->clear_color[2] = 0.0f;
   VAR_16->clear_color[3] = 0.0f;

   VAR_16->color_transform = 0;
   VAR_16->color_transform_values[0] = 1.0f;
   VAR_16->color_transform_values[1] = 1.0f;
   VAR_16->color_transform_values[2] = 1.0f;
   VAR_16->color_transform_values[3] = 1.0f;
   VAR_16->color_transform_values[4] = 0.0f;
   VAR_16->color_transform_values[5] = 0.0f;
   VAR_16->color_transform_values[6] = 0.0f;
   VAR_16->color_transform_values[7] = 0.0f;

   VAR_16->blend_mode = VAR_1;
   VAR_16->masking = 0;

   VAR_16->filter_format_linear = 0;
   VAR_16->filter_format_pre = 0;
   VAR_16->filter_channel_mask = VAR_12 | VAR_6 | VAR_2 | VAR_0;

   VAR_16->pixel_layout = VAR_11;

   return VAR_16;
}
