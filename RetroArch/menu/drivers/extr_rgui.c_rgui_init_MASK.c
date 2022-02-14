
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct video_viewport {int full_height; int full_width; } ;
struct TYPE_12__ {int menu_rgui_extended_ascii; int menu_rgui_shadows; int menu_rgui_border_filler_enable; int menu_rgui_border_filler_thickness_enable; int menu_rgui_background_filler_thickness_enable; } ;
struct TYPE_11__ {scalar_t__ menu_rgui_particle_effect; int menu_rgui_aspect_ratio_lock; } ;
struct TYPE_13__ {TYPE_2__ bools; TYPE_1__ uints; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_14__ {char* menu_title; char* menu_sublabel; int aspect_update_pending; char* theme_preset_path; scalar_t__ particle_effect; int ignore_resize_events; int thumbnail_load_pending; int show_fs_thumbnail; int pointer; scalar_t__ thumbnail_load_trigger_time; scalar_t__ left_thumbnail_queue_size; scalar_t__ thumbnail_queue_size; int thumbnail_path_data; int window_height; int window_width; int last_height; int last_width; int extended_ascii_enable; int shadow_enable; int border_enable; int border_thickness; int bg_thickness; scalar_t__ scroll_y; int menu_aspect_ratio_lock; int content_video_settings; scalar_t__ widgets_supported; } ;
typedef TYPE_4__ rgui_t ;
typedef int menu_input_pointer_t ;
typedef void menu_handle_t ;
struct TYPE_15__ {int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 (void*) ;
 int VAR_3 ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int ,size_t*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_11 () ;
 TYPE_7__ VAR_6 ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 () ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (TYPE_4__*,int) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 () ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct video_viewport*) ;

__attribute__((used)) static void *FUNC_21(void **VAR_7, bool VAR_8)
{
   unsigned VAR_9;
   size_t VAR_10;
   struct video_viewport VAR_11;
   rgui_t *VAR_12 = ((void*)0);
   settings_t *VAR_13 = FUNC_1();
   menu_handle_t *VAR_14 = (menu_handle_t*)FUNC_0(1, sizeof(*VAR_14));

   if (!VAR_14)
      return ((void*)0);

   VAR_12 = (rgui_t*)FUNC_0(1, sizeof(rgui_t));

   if (!VAR_12)
      goto error;

   *VAR_7 = VAR_12;
   VAR_12->menu_title[0] = '\0';
   VAR_12->menu_sublabel[0] = '\0';


   FUNC_18();


   FUNC_13(&VAR_12->content_video_settings);




   VAR_12->menu_aspect_ratio_lock = VAR_13->uints.menu_rgui_aspect_ratio_lock;
   VAR_12->aspect_update_pending = 0;
   if (!FUNC_16(VAR_12, 0))
      goto error;


   VAR_9 = VAR_0 * 2;
   FUNC_6(VAR_9);


   VAR_12->theme_preset_path[0] = '\0';
   FUNC_10(VAR_12, VAR_13);

   VAR_10 = 0;
   FUNC_7(VAR_1, &VAR_10);
   VAR_12->scroll_y = 0;

   FUNC_14();

   VAR_12->bg_thickness = VAR_13->bools.menu_rgui_background_filler_thickness_enable;
   VAR_12->border_thickness = VAR_13->bools.menu_rgui_border_filler_thickness_enable;
   VAR_12->border_enable = VAR_13->bools.menu_rgui_border_filler_enable;
   VAR_12->shadow_enable = VAR_13->bools.menu_rgui_shadows;
   VAR_12->particle_effect = VAR_13->uints.menu_rgui_particle_effect;
   VAR_12->extended_ascii_enable = VAR_13->bools.menu_rgui_extended_ascii;

   VAR_12->last_width = VAR_6.width;
   VAR_12->last_height = VAR_6.height;


   FUNC_20(&VAR_11);
   VAR_12->window_width = VAR_11.full_width;
   VAR_12->window_height = VAR_11.full_height;
   VAR_12->ignore_resize_events = 0;


   if (VAR_12->particle_effect != VAR_2)
      FUNC_15(VAR_12);


   FUNC_17(
         VAR_13->bools.menu_rgui_shadows, VAR_13->bools.menu_rgui_extended_ascii);

   VAR_12->thumbnail_path_data = FUNC_8();
   if (!VAR_12->thumbnail_path_data)
      goto error;

   VAR_12->thumbnail_queue_size = 0;
   VAR_12->left_thumbnail_queue_size = 0;
   VAR_12->thumbnail_load_pending = 0;
   VAR_12->thumbnail_load_trigger_time = 0;

   VAR_12->show_fs_thumbnail = 0;




   FUNC_3(&VAR_12->pointer, 0, sizeof(menu_input_pointer_t));

   return VAR_14;

error:
   FUNC_12();
   FUNC_11();
   FUNC_19(&VAR_3);
   FUNC_19(&VAR_5);
   FUNC_19(&VAR_4);
   if (VAR_14)
      FUNC_2(VAR_14);
   return ((void*)0);
}
