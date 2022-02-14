
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct video_coords {int vertices; float const* color; int * lut_tex_coord; int * tex_coord; int * vertex; } ;
struct TYPE_8__ {int menu_mouse_enable; scalar_t__ video_fullscreen; } ;
struct TYPE_10__ {TYPE_1__ bools; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_9__ {scalar_t__ id; } ;
struct TYPE_11__ {float x; int y; float width; float height; uintptr_t texture; TYPE_2__ pipeline; int prim_type; int * matrix_data; struct video_coords* coords; } ;
typedef TYPE_4__ menu_display_ctx_draw_t ;
struct TYPE_12__ {int (* blend_end ) (int *) ;int (* blend_begin ) (int *) ;} ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 () ;
 TYPE_6__* VAR_1 ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(
      video_frame_info_t *VAR_3,
      float *VAR_4, float VAR_5, uintptr_t VAR_6,
      float VAR_7, float VAR_8, unsigned VAR_9, unsigned VAR_10)
{
   menu_display_ctx_draw_t VAR_11;
   struct video_coords VAR_12;
   settings_t *VAR_13 = FUNC_0();
   bool VAR_14 = VAR_13->bools.video_fullscreen ||
       !VAR_2;
   if (!VAR_13->bools.menu_mouse_enable || !VAR_14)
      return;

   VAR_12.vertices = 4;
   VAR_12.vertex = ((void*)0);
   VAR_12.tex_coord = ((void*)0);
   VAR_12.lut_tex_coord = ((void*)0);
   VAR_12.color = (const float*)VAR_4;

   if (VAR_1 && VAR_1->blend_begin)
      VAR_1->blend_begin(VAR_3);

   VAR_11.x = VAR_7 - (VAR_5 / 2);
   VAR_11.y = (int)VAR_10 - VAR_8 - (VAR_5 / 2);
   VAR_11.width = VAR_5;
   VAR_11.height = VAR_5;
   VAR_11.coords = &VAR_12;
   VAR_11.matrix_data = ((void*)0);
   VAR_11.texture = VAR_6;
   VAR_11.prim_type = VAR_0;
   VAR_11.pipeline.id = 0;

   FUNC_1(&VAR_11, VAR_3);

   if (VAR_1 && VAR_1->blend_end)
      VAR_1->blend_end(VAR_3);
}
