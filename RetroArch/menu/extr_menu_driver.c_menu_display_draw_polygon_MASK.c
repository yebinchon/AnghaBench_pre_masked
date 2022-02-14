
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct video_coords {int vertices; float* vertex; float* color; int * lut_tex_coord; int * tex_coord; } ;
struct TYPE_5__ {scalar_t__ id; } ;
struct TYPE_6__ {unsigned int width; unsigned int height; float scale_factor; float rotation; TYPE_1__ pipeline; int prim_type; int texture; int * matrix_data; struct video_coords* coords; scalar_t__ y; scalar_t__ x; } ;
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
      int VAR_4, int VAR_5,
      int VAR_6, int VAR_7,
      int VAR_8, int VAR_9,
      int VAR_10, int VAR_11,
      unsigned VAR_12, unsigned VAR_13,
      float *VAR_14)
{
   menu_display_ctx_draw_t VAR_15;
   struct video_coords VAR_16;

   float VAR_17[8];

   VAR_17[0] = VAR_4 / (float)VAR_12;
   VAR_17[1] = VAR_5 / (float)VAR_13;
   VAR_17[2] = VAR_6 / (float)VAR_12;
   VAR_17[3] = VAR_7 / (float)VAR_13;
   VAR_17[4] = VAR_8 / (float)VAR_12;
   VAR_17[5] = VAR_9 / (float)VAR_13;
   VAR_17[6] = VAR_10 / (float)VAR_12;
   VAR_17[7] = VAR_11 / (float)VAR_13;

   VAR_16.vertices = 4;
   VAR_16.vertex = &VAR_17[0];
   VAR_16.tex_coord = ((void*)0);
   VAR_16.lut_tex_coord = ((void*)0);
   VAR_16.color = VAR_14;

   if (VAR_1 && VAR_1->blend_begin)
      VAR_1->blend_begin(VAR_3);

   VAR_15.x = 0;
   VAR_15.y = 0;
   VAR_15.width = VAR_12;
   VAR_15.height = VAR_13;
   VAR_15.coords = &VAR_16;
   VAR_15.matrix_data = ((void*)0);
   VAR_15.texture = VAR_2;
   VAR_15.prim_type = VAR_0;
   VAR_15.pipeline.id = 0;
   VAR_15.scale_factor = 1.0f;
   VAR_15.rotation = 0.0f;

   FUNC_0(&VAR_15, VAR_3);

   if (VAR_1 && VAR_1->blend_end)
      VAR_1->blend_end(VAR_3);
}
