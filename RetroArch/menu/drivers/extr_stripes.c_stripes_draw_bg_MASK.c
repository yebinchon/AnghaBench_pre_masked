
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct video_coords {int vertices; float* color; int * lut_tex_coord; int * tex_coord; int * vertex; } ;
typedef int stripes_handle_t ;
struct TYPE_4__ {scalar_t__ id; } ;
struct TYPE_5__ {unsigned int width; unsigned int height; TYPE_1__ pipeline; int prim_type; int texture; int * matrix_data; struct video_coords* coords; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_2__ menu_display_ctx_draw_t ;


 int FUNC_0 (double,double,double,float*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(
      stripes_handle_t *VAR_2,
      video_frame_info_t *VAR_3,
      unsigned VAR_4,
      unsigned VAR_5)
{
   menu_display_ctx_draw_t VAR_6;
   struct video_coords VAR_7;

   float VAR_8[3];
   FUNC_0(0.0,0.5,0.5, &VAR_8[0]) ;
   float VAR_9[16] = {
      VAR_8[0], VAR_8[1], VAR_8[2], 1,
      VAR_8[0], VAR_8[1], VAR_8[2], 1,
      VAR_8[0], VAR_8[1], VAR_8[2], 1,
      VAR_8[0], VAR_8[1], VAR_8[2], 1,
   };

   VAR_7.vertices = 4;
   VAR_7.vertex = ((void*)0);
   VAR_7.tex_coord = ((void*)0);
   VAR_7.lut_tex_coord = ((void*)0);
   VAR_7.color = &VAR_9[0];

   VAR_6.x = 0;
   VAR_6.y = 0;
   VAR_6.width = VAR_4;
   VAR_6.height = VAR_5;
   VAR_6.coords = &VAR_7;
   VAR_6.matrix_data = ((void*)0);
   VAR_6.texture = VAR_1;
   VAR_6.prim_type = VAR_0;
   VAR_6.pipeline.id = 0;

   FUNC_1(VAR_3);
   FUNC_3(&VAR_6, VAR_3);
   FUNC_2(VAR_3);
}
