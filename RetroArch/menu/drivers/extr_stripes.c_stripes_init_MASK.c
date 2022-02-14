
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {void* selection_buf_old; int depth; int old_depth; size_t system_tab_end; void* horizontal_list; int * tabs; scalar_t__ alpha; scalar_t__ textures_arrow_alpha; scalar_t__ categories_x_pos; scalar_t__ x; scalar_t__ categories_active_idx_old; scalar_t__ categories_active_idx; } ;
typedef TYPE_3__ stripes_handle_t ;
struct TYPE_8__ {int kiosk_mode_enable; scalar_t__ menu_content_show_add; scalar_t__ menu_content_show_netplay; scalar_t__ menu_content_show_video; scalar_t__ menu_content_show_music; scalar_t__ menu_content_show_images; scalar_t__ menu_content_show_history; scalar_t__ menu_content_show_favorites; scalar_t__ menu_content_show_settings; } ;
struct TYPE_7__ {float menu_scale_factor; } ;
struct TYPE_10__ {TYPE_2__ bools; TYPE_1__ floats; } ;
typedef TYPE_4__ settings_t ;
typedef void menu_handle_t ;
typedef void file_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int,int) ;
 TYPE_4__* FUNC_1 () ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (int ,int *) ;
 double FUNC_9 (float,double) ;
 int FUNC_10 (void*,int) ;
 int FUNC_11 (TYPE_3__*) ;
 int* VAR_10 ;
 int FUNC_12 (unsigned int*,unsigned int*) ;

__attribute__((used)) static void *FUNC_13(void **VAR_11, bool VAR_12)
{
   unsigned VAR_13, VAR_14;
   int VAR_15;
   stripes_handle_t *VAR_16 = ((void*)0);
   settings_t *VAR_17 = FUNC_1();
   menu_handle_t *VAR_18 = (menu_handle_t*)FUNC_0(1, sizeof(*VAR_18));
   float VAR_19 = VAR_17->floats.menu_scale_factor * 100.0f;




   if (VAR_19 < 100)
   {

      VAR_10[0] = -0.03 * VAR_19 + 4.083;

      VAR_10[1] = -0.03 * VAR_19 + 3.95;

      VAR_10[2] = -0.02 * VAR_19 + 3.033;

      VAR_10[3] = -0.014 * VAR_19 + 2.416;

      VAR_10[4] = -0.03 * VAR_19 + 3.916;

      VAR_10[5] = -0.06 * VAR_19 + 6.933;

      VAR_10[6] = -0.028 * VAR_19 + 3.866;

      VAR_10[7] = 134.179 * FUNC_9(VAR_19, -1.0778);

      for (VAR_15 = 0; VAR_15 < 8; VAR_15++)
         if (VAR_10[VAR_15] < 1)
            VAR_10[VAR_15] = 1;
   }

   if (!VAR_18)
      goto error;

   if (!FUNC_5(VAR_12))
      goto error;

   FUNC_12(&VAR_13, &VAR_14);

   VAR_16 = (stripes_handle_t*)FUNC_0(1, sizeof(stripes_handle_t));

   if (!VAR_16)
      goto error;

   *VAR_11 = VAR_16;

   VAR_16->selection_buf_old = (file_list_t*)FUNC_0(1, sizeof(file_list_t));

   if (!VAR_16->selection_buf_old)
      goto error;

   VAR_16->categories_active_idx = 0;
   VAR_16->categories_active_idx_old = 0;
   VAR_16->x = 0;
   VAR_16->categories_x_pos = 0;
   VAR_16->textures_arrow_alpha = 0;
   VAR_16->depth = 1;
   VAR_16->old_depth = 1;
   VAR_16->alpha = 0;

   VAR_16->system_tab_end = 0;
   VAR_16->tabs[VAR_16->system_tab_end] = VAR_5;
   if (VAR_17->bools.menu_content_show_settings && !VAR_17->bools.kiosk_mode_enable)
      VAR_16->tabs[++VAR_16->system_tab_end] = VAR_8;
   if (VAR_17->bools.menu_content_show_favorites)
      VAR_16->tabs[++VAR_16->system_tab_end] = VAR_2;
   if (VAR_17->bools.menu_content_show_history)
      VAR_16->tabs[++VAR_16->system_tab_end] = VAR_3;




   if (VAR_17->bools.menu_content_show_music)
      VAR_16->tabs[++VAR_16->system_tab_end] = VAR_6;
   FUNC_8(VAR_0, ((void*)0));





   FUNC_7(VAR_13);
   FUNC_6(VAR_14);

   FUNC_4();

   VAR_16->horizontal_list = (file_list_t*)FUNC_0(1, sizeof(file_list_t));

   if (VAR_16->horizontal_list)
      FUNC_11(VAR_16);

   return VAR_18;

error:
   if (VAR_18)
      FUNC_3(VAR_18);

   if (VAR_16)
   {
      if (VAR_16->selection_buf_old)
         FUNC_3(VAR_16->selection_buf_old);
      VAR_16->selection_buf_old = ((void*)0);
      if (VAR_16->horizontal_list)
      {
         FUNC_10(VAR_16->horizontal_list, 0);
         FUNC_2(VAR_16->horizontal_list);
      }
      VAR_16->horizontal_list = ((void*)0);
   }
   return ((void*)0);
}
