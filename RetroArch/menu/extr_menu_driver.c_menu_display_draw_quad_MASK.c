
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct video_coords {int vertices; float* color; int * lut_tex_coord; int * tex_coord; int * vertex; } ;
struct TYPE_5__ {scalar_t__ id; } ;
struct TYPE_6__ {int x; int y; unsigned int width; unsigned int height; float scale_factor; float rotation; TYPE_1__ pipeline; int prim_type; int texture; int * matrix_data; struct video_coords* coords; } ;
typedef TYPE_2__ menu_display_ctx_draw_t ;
struct TYPE_7__ {int (* blend_end ) (int *) ;int (* blend_begin ) (int *) ;} ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(
      video_frame_info_t *VAR_3,
      int VAR_4, int VAR_5, unsigned VAR_6, unsigned VAR_7,
      unsigned VAR_8, unsigned VAR_9,
      float *VAR_10)
{
   menu_display_ctx_draw_t VAR_11;
   struct video_coords VAR_12;

   VAR_12.vertices = 4;
   VAR_12.vertex = ((void*)0);
   VAR_12.tex_coord = ((void*)0);
   VAR_12.lut_tex_coord = ((void*)0);
   VAR_12.color = VAR_10;

   if (VAR_1 && VAR_1->blend_begin)
      VAR_1->blend_begin(VAR_3);

   VAR_11.x = VAR_4;
   VAR_11.y = (int)VAR_9 - VAR_5 - (int)VAR_7;
   VAR_11.width = VAR_6;
   VAR_11.height = VAR_7;
   VAR_11.coords = &VAR_12;
   VAR_11.matrix_data = ((void*)0);
   VAR_11.texture = VAR_2;
   VAR_11.prim_type = VAR_0;
   VAR_11.pipeline.id = 0;
   VAR_11.scale_factor = 1.0f;
   VAR_11.rotation = 0.0f;

   FUNC_0(&VAR_11, VAR_3);

   if (VAR_1 && VAR_1->blend_end)
      VAR_1->blend_end(VAR_3);
}
