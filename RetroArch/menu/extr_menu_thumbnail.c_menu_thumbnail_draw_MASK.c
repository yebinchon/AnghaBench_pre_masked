
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ height; } ;
typedef TYPE_2__ video_frame_info_t ;
struct video_coords {int vertices; float const* color; int * lut_tex_coord; int * tex_coord; int * vertex; } ;
struct TYPE_16__ {scalar_t__ status; float alpha; int texture; scalar_t__ height; scalar_t__ width; } ;
typedef TYPE_3__ menu_thumbnail_t ;
struct TYPE_17__ {float rotation; float scale_x; float scale_y; float scale_z; int scale_enable; int * matrix; } ;
typedef TYPE_4__ menu_display_ctx_rotate_draw_t ;
struct TYPE_14__ {scalar_t__ id; } ;
struct TYPE_18__ {unsigned int width; unsigned int height; float scale_factor; float rotation; float x; float y; TYPE_1__ pipeline; int prim_type; int texture; int * matrix_data; struct video_coords* coords; } ;
typedef TYPE_5__ menu_display_ctx_draw_t ;
typedef int math_matrix_4x4 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_4 (float*,float) ;

void FUNC_5(
      video_frame_info_t *VAR_2, menu_thumbnail_t *VAR_3,
      float VAR_4, float VAR_5, unsigned VAR_6, unsigned VAR_7,
      float VAR_8, float VAR_9)
{

   if (!VAR_2 || !VAR_3 ||
       (VAR_6 < 1) || (VAR_7 < 1) || (VAR_8 <= 0.0f) || (VAR_9 <= 0.0f))
      return;


   if (VAR_3->status == VAR_1)
   {
      menu_display_ctx_rotate_draw_t VAR_10;
      menu_display_ctx_draw_t VAR_11;
      struct video_coords VAR_12;
      math_matrix_4x4 VAR_13;
      float VAR_14;
      float VAR_15;
      float VAR_16;
      float VAR_17;
      float VAR_18 = VAR_3->alpha * VAR_8;
      float VAR_19[16] = {
         1.0f, 1.0f, 1.0f, 1.0f,
         1.0f, 1.0f, 1.0f, 1.0f,
         1.0f, 1.0f, 1.0f, 1.0f,
         1.0f, 1.0f, 1.0f, 1.0f
      };


      if (VAR_18 <= 0.0f)
         return;
      else if (VAR_18 < 1.0f)
         FUNC_4(VAR_19, VAR_18);


      VAR_16 = (float)VAR_6 / (float)VAR_7;
      VAR_17 = (float)VAR_3->width / (float)VAR_3->height;

      if (VAR_17 > VAR_16)
      {
         VAR_14 = (float)VAR_6;
         VAR_15 = (float)VAR_3->height * (VAR_14 / (float)VAR_3->width);
      }
      else
      {
         VAR_15 = (float)VAR_7;
         VAR_14 = (float)VAR_3->width * (VAR_15 / (float)VAR_3->height);
      }






      VAR_14 *= VAR_9;
      VAR_15 *= VAR_9;

      FUNC_0(VAR_2);
      VAR_10.matrix = &VAR_13;
      VAR_10.rotation = 0.0f;
      VAR_10.scale_x = 1.0f;
      VAR_10.scale_y = 1.0f;
      VAR_10.scale_z = 1.0f;
      VAR_10.scale_enable = 0;

      FUNC_3(&VAR_10, VAR_2);


      VAR_12.vertices = 4;
      VAR_12.vertex = ((void*)0);
      VAR_12.tex_coord = ((void*)0);
      VAR_12.lut_tex_coord = ((void*)0);
      VAR_12.color = (const float*)VAR_19;

      VAR_11.width = (unsigned)VAR_14;
      VAR_11.height = (unsigned)VAR_15;
      VAR_11.scale_factor = 1.0f;
      VAR_11.rotation = 0.0f;
      VAR_11.coords = &VAR_12;
      VAR_11.matrix_data = &VAR_13;
      VAR_11.texture = VAR_3->texture;
      VAR_11.prim_type = VAR_0;
      VAR_11.pipeline.id = 0;


      VAR_11.x = VAR_4 + ((float)VAR_6 - VAR_14) / 2.0f;
      VAR_11.y = (float)VAR_2->height - VAR_5 - VAR_15 - ((float)VAR_7 - VAR_15) / 2.0f;


      FUNC_2(&VAR_11, VAR_2);
      FUNC_1(VAR_2);
   }
}
