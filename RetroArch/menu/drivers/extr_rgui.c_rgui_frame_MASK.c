
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


struct TYPE_21__ {scalar_t__ width; scalar_t__ height; } ;
typedef TYPE_4__ video_frame_info_t ;
struct TYPE_20__ {scalar_t__ menu_rgui_background_filler_thickness_enable; scalar_t__ menu_rgui_border_filler_thickness_enable; scalar_t__ menu_rgui_border_filler_enable; scalar_t__ menu_rgui_shadows; scalar_t__ menu_rgui_extended_ascii; scalar_t__ menu_pointer_enable; scalar_t__ menu_mouse_enable; int network_on_demand_thumbnails; } ;
struct TYPE_19__ {scalar_t__ menu_rgui_particle_effect; scalar_t__ menu_rgui_color_theme; scalar_t__ menu_rgui_aspect_ratio; scalar_t__ menu_rgui_aspect_ratio_lock; int menu_rgui_thumbnail_delay; } ;
struct TYPE_18__ {int path_rgui_theme_preset; } ;
struct TYPE_22__ {TYPE_3__ bools; TYPE_2__ uints; TYPE_1__ paths; } ;
typedef TYPE_5__ settings_t ;
struct TYPE_17__ {scalar_t__ type; scalar_t__ active; } ;
struct TYPE_23__ {scalar_t__ bg_thickness; int bg_modified; int force_redraw; scalar_t__ border_thickness; scalar_t__ border_enable; scalar_t__ shadow_enable; scalar_t__ particle_effect; scalar_t__ extended_ascii_enable; scalar_t__ color_theme; scalar_t__ menu_aspect_ratio; int ignore_resize_events; scalar_t__ menu_aspect_ratio_lock; scalar_t__ window_width; scalar_t__ window_height; int thumbnail_load_trigger_time; TYPE_15__ pointer; scalar_t__ show_fs_thumbnail; scalar_t__ thumbnail_load_pending; int menu_video_settings; int content_video_settings; int theme_preset_path; } ;
typedef TYPE_6__ rgui_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_15__*) ;
 int FUNC_3 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,int ) ;
 int FUNC_6 (TYPE_6__*,int) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (TYPE_6__*,int *,int) ;
 int FUNC_9 (TYPE_6__*) ;
 scalar_t__ FUNC_10 (int ,int ,int) ;

__attribute__((used)) static void FUNC_11(void *VAR_4, video_frame_info_t *VAR_5)
{
   rgui_t *VAR_6 = (rgui_t*)VAR_4;
   settings_t *VAR_7 = FUNC_0();

   if (VAR_7->bools.menu_rgui_background_filler_thickness_enable != VAR_6->bg_thickness)
   {
      VAR_6->bg_thickness = VAR_7->bools.menu_rgui_background_filler_thickness_enable;
      VAR_6->bg_modified = 1;
      VAR_6->force_redraw = 1;
   }

   if (VAR_7->bools.menu_rgui_border_filler_thickness_enable != VAR_6->border_thickness)
   {
      VAR_6->border_thickness = VAR_7->bools.menu_rgui_border_filler_thickness_enable;
      VAR_6->bg_modified = 1;
      VAR_6->force_redraw = 1;
   }

   if (VAR_7->bools.menu_rgui_border_filler_enable != VAR_6->border_enable)
   {
      VAR_6->border_enable = VAR_7->bools.menu_rgui_border_filler_enable;
      VAR_6->bg_modified = 1;
      VAR_6->force_redraw = 1;
   }

   if (VAR_7->bools.menu_rgui_shadows != VAR_6->shadow_enable)
   {
      FUNC_7(
            VAR_7->bools.menu_rgui_shadows, VAR_7->bools.menu_rgui_extended_ascii);

      VAR_6->shadow_enable = VAR_7->bools.menu_rgui_shadows;
      VAR_6->bg_modified = 1;
      VAR_6->force_redraw = 1;
   }

   if (VAR_7->uints.menu_rgui_particle_effect != VAR_6->particle_effect)
   {
      VAR_6->particle_effect = VAR_7->uints.menu_rgui_particle_effect;

      if (VAR_6->particle_effect != VAR_2)
         FUNC_4(VAR_6);

      VAR_6->force_redraw = 1;
   }

   if (VAR_6->particle_effect != VAR_2)
      VAR_6->force_redraw = 1;

   if (VAR_7->bools.menu_rgui_extended_ascii != VAR_6->extended_ascii_enable)
   {
      FUNC_7(
            VAR_7->bools.menu_rgui_shadows, VAR_7->bools.menu_rgui_extended_ascii);

      VAR_6->extended_ascii_enable = VAR_7->bools.menu_rgui_extended_ascii;
      VAR_6->force_redraw = 1;
   }

   if (VAR_7->uints.menu_rgui_color_theme != VAR_6->color_theme)
   {
      FUNC_3(VAR_6, VAR_7);
   }
   else if (VAR_7->uints.menu_rgui_color_theme == VAR_3)
   {
      if (FUNC_10(VAR_7->paths.path_rgui_theme_preset, VAR_6->theme_preset_path, sizeof(VAR_6->theme_preset_path)))
      {
         FUNC_3(VAR_6, VAR_7);
      }
   }
   if (VAR_7->uints.menu_rgui_aspect_ratio != VAR_6->menu_aspect_ratio)
   {
      FUNC_6(VAR_6, 1);






      VAR_6->ignore_resize_events = 0;
   }


   if (VAR_7->uints.menu_rgui_aspect_ratio_lock != VAR_6->menu_aspect_ratio_lock)
   {
      VAR_6->menu_aspect_ratio_lock = VAR_7->uints.menu_rgui_aspect_ratio_lock;

      if (VAR_7->uints.menu_rgui_aspect_ratio_lock == VAR_1)
      {
         FUNC_8(VAR_6, &VAR_6->content_video_settings, 1);
      }
      else
      {
         FUNC_9(VAR_6);
         FUNC_8(VAR_6, &VAR_6->menu_video_settings, 1);




         VAR_6->ignore_resize_events = 0;
      }
   }



   if ((VAR_6->window_width != VAR_5->width) ||
       (VAR_6->window_height != VAR_5->height))
   {
      if ((VAR_7->uints.menu_rgui_aspect_ratio_lock != VAR_1) &&
          !VAR_6->ignore_resize_events)
      {
         FUNC_9(VAR_6);
         FUNC_8(VAR_6, &VAR_6->menu_video_settings, 1);
      }

      VAR_6->window_width = VAR_5->width;
      VAR_6->window_height = VAR_5->height;
   }


   if (VAR_6->thumbnail_load_pending)
   {




      if ((FUNC_1() - VAR_6->thumbnail_load_trigger_time) >=
          (VAR_7->uints.menu_rgui_thumbnail_delay * 1000 * (VAR_6->show_fs_thumbnail ? 1.5f : 1.0f)))
         FUNC_5(VAR_6, VAR_7->bools.network_on_demand_thumbnails);
   }


   if (VAR_7->bools.menu_mouse_enable || VAR_7->bools.menu_pointer_enable)
   {
      FUNC_2(&VAR_6->pointer);


      if ((VAR_6->pointer.type != VAR_0) && VAR_6->pointer.active)
         VAR_6->force_redraw = 1;
   }
   else
      VAR_6->pointer.type = VAR_0;
}
