
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {float menu_wallpaper_opacity; float menu_framebuffer_opacity; scalar_t__ libretro_running; int height; int width; } ;
typedef TYPE_4__ video_frame_info_t ;
struct TYPE_15__ {int active; int * backend_data; scalar_t__ id; } ;
struct TYPE_19__ {int vertex_count; float* color; scalar_t__ texture; TYPE_1__ pipeline; int * tex_coord; int * vertex; int prim_type; int * matrix_data; int * coords; int height; int width; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_5__ menu_display_ctx_draw_t ;
struct TYPE_17__ {int list_background; } ;
struct TYPE_16__ {scalar_t__ bg; } ;
struct TYPE_20__ {TYPE_3__ colors; TYPE_2__ textures; } ;
typedef TYPE_6__ materialui_handle_t ;
typedef int draw_color ;


 int VAR_0 ;
 int FUNC_0 (float*,int ,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*,int,float) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_5(materialui_handle_t *VAR_2, video_frame_info_t *VAR_3)
{
   menu_display_ctx_draw_t VAR_4;
   bool VAR_5 = 0;
   float VAR_6 = 1.0f;
   float VAR_7[16] = {
      1.0f, 1.0f, 1.0f, 1.0f,
      1.0f, 1.0f, 1.0f, 1.0f,
      1.0f, 1.0f, 1.0f, 1.0f,
      1.0f, 1.0f, 1.0f, 1.0f
   };


   VAR_4.x = 0;
   VAR_4.y = 0;
   VAR_4.width = VAR_3->width;
   VAR_4.height = VAR_3->height;
   VAR_4.coords = ((void*)0);
   VAR_4.matrix_data = ((void*)0);
   VAR_4.prim_type = VAR_0;
   VAR_4.vertex = ((void*)0);
   VAR_4.tex_coord = ((void*)0);
   VAR_4.vertex_count = 4;
   VAR_4.pipeline.id = 0;
   VAR_4.pipeline.active = 0;
   VAR_4.pipeline.backend_data = ((void*)0);
   VAR_4.color = VAR_7;

   if (VAR_2->textures.bg && !VAR_3->libretro_running)
   {
      VAR_4.texture = VAR_2->textures.bg;



      VAR_5 = 1;
      VAR_6 = VAR_3->menu_wallpaper_opacity;
   }
   else
   {
      VAR_4.texture = VAR_1;


      FUNC_0(VAR_7, VAR_2->colors.list_background, sizeof(VAR_7));




      if (VAR_3->libretro_running)
      {
         VAR_5 = 1;
         VAR_6 = VAR_3->menu_framebuffer_opacity;
      }
   }


   FUNC_1(VAR_3);
   FUNC_4(&VAR_4, VAR_3, VAR_5, VAR_6);
   FUNC_3(&VAR_4, VAR_3);
   FUNC_2(VAR_3);
}
