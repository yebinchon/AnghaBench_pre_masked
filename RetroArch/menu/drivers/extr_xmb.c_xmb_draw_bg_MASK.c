
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int xmb_handle_t ;
struct TYPE_18__ {int libretro_running; int menu_shader_pipeline; scalar_t__ xmb_color_theme; float menu_wallpaper_opacity; int height; int width; } ;
typedef TYPE_2__ video_frame_info_t ;
struct TYPE_17__ {scalar_t__ id; int active; } ;
struct TYPE_19__ {uintptr_t texture; unsigned int width; unsigned int height; float* color; int vertex_count; TYPE_1__ pipeline; int prim_type; int * tex_coord; int * vertex; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_3__ menu_display_ctx_draw_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;





 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int,float) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_6 (float*,float) ;
 int FUNC_7 (int ,int ) ;
 void* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_10(
      xmb_handle_t *VAR_9,
      video_frame_info_t *VAR_10,
      unsigned VAR_11,
      unsigned VAR_12,
      float VAR_13,
      uintptr_t VAR_14,
      float *VAR_15,
      float *VAR_16)
{
   menu_display_ctx_draw_t VAR_17;

   bool VAR_18 = VAR_10->libretro_running;

   VAR_17.x = 0;
   VAR_17.y = 0;
   VAR_17.texture = VAR_14;
   VAR_17.width = VAR_11;
   VAR_17.height = VAR_12;
   VAR_17.color = &VAR_15[0];
   VAR_17.vertex = ((void*)0);
   VAR_17.tex_coord = ((void*)0);
   VAR_17.vertex_count = 4;
   VAR_17.prim_type = VAR_0;
   VAR_17.pipeline.id = 0;
   VAR_17.pipeline.active = FUNC_9(VAR_10);

   FUNC_0(VAR_10);
   FUNC_7(VAR_10->width, VAR_10->height);
   {
      uintptr_t VAR_19 = VAR_17.texture;

      if (VAR_10->xmb_color_theme != VAR_8)
         VAR_17.color = FUNC_8(VAR_10);

      if (VAR_18)
         FUNC_6(VAR_17.color, VAR_15[3]);
      else
         FUNC_6(VAR_17.color, VAR_16[3]);

      if (VAR_10->xmb_color_theme != VAR_8)
         FUNC_4(&VAR_17, VAR_10);

      {
         float VAR_20 = VAR_10->menu_wallpaper_opacity;
         bool VAR_21 = 0;

         VAR_17.texture = VAR_19;
         FUNC_6(VAR_17.color, VAR_16[3]);

         if (VAR_17.texture)
            VAR_17.color = &VAR_16[0];

         if (VAR_18 || VAR_10->xmb_color_theme == VAR_8)
            VAR_21 = 1;

         FUNC_3(&VAR_17, VAR_10, VAR_21, VAR_20);
      }
   }

   FUNC_2(&VAR_17, VAR_10);
   FUNC_1(VAR_10);
}
