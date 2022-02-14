
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int menu_show_advanced_settings; scalar_t__ quick_menu_show_information; scalar_t__ cheevos_enable; int kiosk_mode_enable; scalar_t__ quick_menu_show_save_game_overrides; scalar_t__ quick_menu_show_save_core_overrides; scalar_t__ quick_menu_show_shaders; scalar_t__ quick_menu_show_cheats; scalar_t__ quick_menu_show_controls; scalar_t__ menu_show_latency; scalar_t__ menu_show_rewind; scalar_t__ menu_show_video_layout; scalar_t__ menu_show_overlays; scalar_t__ quick_menu_show_options; scalar_t__ quick_menu_show_start_streaming; scalar_t__ quick_menu_show_start_recording; scalar_t__ quick_menu_show_add_to_favorites; scalar_t__ quick_menu_show_undo_save_load_state; scalar_t__ quick_menu_show_save_load_state; scalar_t__ quick_menu_show_take_screenshot; scalar_t__ quick_menu_show_close_content; scalar_t__ quick_menu_show_restart_content; scalar_t__ quick_menu_show_resume_content; } ;
struct TYPE_11__ {int record_driver; } ;
struct TYPE_13__ {TYPE_3__ bools; TYPE_2__ arrays; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_10__ {scalar_t__ get_num_images; } ;
struct TYPE_14__ {TYPE_1__ disk_control_cb; } ;
typedef TYPE_5__ rarch_system_info_t ;
typedef int menu_handle_t ;
struct TYPE_15__ {int list; } ;
typedef TYPE_6__ menu_displaylist_info_t ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 TYPE_4__* FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int VAR_66 ;
 int FUNC_5 () ;
 TYPE_5__* FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 () ;

__attribute__((used)) static int FUNC_10(
      menu_handle_t *VAR_67,
      menu_displaylist_info_t *VAR_68)
{
   settings_t *VAR_69 = FUNC_0();

   if (!FUNC_4(VAR_65, ((void*)0)))
   {



      rarch_system_info_t *VAR_70 = FUNC_6();

      if (VAR_69->bools.quick_menu_show_resume_content)
         FUNC_2(VAR_68->list,
               FUNC_3(VAR_49),
               FUNC_3(VAR_21),
               VAR_21,
               VAR_60, 0, 0);

      if (VAR_69->bools.quick_menu_show_restart_content)
         FUNC_2(VAR_68->list,
               FUNC_3(VAR_48),
               FUNC_3(VAR_20),
               VAR_20,
               VAR_60, 0, 0);

      if (VAR_69->bools.quick_menu_show_close_content)
         FUNC_2(VAR_68->list,
               FUNC_3(VAR_31),
               FUNC_3(VAR_3),
               VAR_3,
               VAR_57, 0, 0);

      if (VAR_69->bools.quick_menu_show_take_screenshot)
      {
         FUNC_2(VAR_68->list,
               FUNC_3(VAR_53),
               FUNC_3(VAR_26),
               VAR_26,
               VAR_62, 0, 0);
      }

      if (VAR_69->bools.quick_menu_show_save_load_state)
      {
         FUNC_1(VAR_68->list,
               VAR_25, VAR_64, 1);

         FUNC_2(VAR_68->list,
               FUNC_3(VAR_51),
               FUNC_3(VAR_23),
               VAR_23,
               VAR_61, 0, 0);



         {
            FUNC_2(VAR_68->list,
                  FUNC_3(VAR_38),
                  FUNC_3(VAR_10),
                  VAR_10,
                  VAR_59, 0, 0);
         }
      }

      if (VAR_69->bools.quick_menu_show_save_load_state &&
          VAR_69->bools.quick_menu_show_undo_save_load_state)
      {



         {
            FUNC_2(VAR_68->list,
                  FUNC_3(VAR_54),
                  FUNC_3(VAR_27),
                  VAR_27,
                  VAR_59, 0, 0);
         }

         FUNC_2(VAR_68->list,
               FUNC_3(VAR_55),
               FUNC_3(VAR_28),
               VAR_28,
               VAR_59, 0, 0);
      }

      if (VAR_69->bools.quick_menu_show_add_to_favorites)
      {
         FUNC_2(VAR_68->list,
               FUNC_3(VAR_30),
               FUNC_3(VAR_2),
               VAR_2, VAR_0, 0, 0);
      }

      if (FUNC_8(VAR_69->arrays.record_driver, "null"))
      {
         if (!FUNC_5())
         {
            if (VAR_69->bools.quick_menu_show_start_recording && !VAR_69->bools.kiosk_mode_enable)
            {
               FUNC_2(VAR_68->list,
                     FUNC_3(VAR_44),
                     FUNC_3(VAR_16),
                     VAR_16, VAR_56, 0, 0);
            }

            if (VAR_69->bools.quick_menu_show_start_streaming && !VAR_69->bools.kiosk_mode_enable)
            {
               FUNC_2(VAR_68->list,
                     FUNC_3(VAR_45),
                     FUNC_3(VAR_17),
                     VAR_17, VAR_56, 0, 0);
            }
         }
         else
         {
            if (FUNC_7())
               FUNC_2(VAR_68->list,
                     FUNC_3(VAR_47),
                     FUNC_3(VAR_19),
                     VAR_19, VAR_56, 0, 0);
            else
               FUNC_2(VAR_68->list,
                     FUNC_3(VAR_46),
                     FUNC_3(VAR_18),
                     VAR_18, VAR_56, 0, 0);
         }
      }

      if (VAR_69->bools.quick_menu_show_options && !VAR_69->bools.kiosk_mode_enable)
      {
         FUNC_2(VAR_68->list,
               FUNC_3(VAR_34),
               FUNC_3(VAR_6),
               VAR_6,
               VAR_56, 0, 0);
      }

      if (VAR_69->bools.menu_show_overlays && !VAR_69->bools.kiosk_mode_enable)
      {
         FUNC_2(VAR_68->list,
               FUNC_3(VAR_41),
               FUNC_3(VAR_13),
               VAR_13,
               VAR_56, 0, 0);
      }
      if (VAR_69->bools.menu_show_rewind && !VAR_69->bools.kiosk_mode_enable)
      {
         FUNC_2(VAR_68->list,
               FUNC_3(VAR_50),
               FUNC_3(VAR_22),
               VAR_22,
               VAR_56, 0, 0);
      }

      if (VAR_69->bools.menu_show_latency && !VAR_69->bools.kiosk_mode_enable)
      {
         FUNC_2(VAR_68->list,
               FUNC_3(VAR_37),
               FUNC_3(VAR_9),
               VAR_9,
               VAR_56, 0, 0);
      }
      if (VAR_69->bools.quick_menu_show_controls && !VAR_69->bools.kiosk_mode_enable)
      {
         FUNC_2(VAR_68->list,
               FUNC_3(VAR_33),
               FUNC_3(VAR_5),
               VAR_5,
               VAR_56, 0, 0);
      }

      if (VAR_69->bools.quick_menu_show_cheats)
      {
         FUNC_2(VAR_68->list,
               FUNC_3(VAR_32),
               FUNC_3(VAR_4),
               VAR_4,
               VAR_56, 0, 0);
      }

      if ((!FUNC_4(VAR_65, ((void*)0)))
            && VAR_70->disk_control_cb.get_num_images)
         FUNC_2(VAR_68->list,
               FUNC_3(VAR_35),
               FUNC_3(VAR_7),
               VAR_7,
               VAR_58, 0, 0);
      if ((VAR_69->bools.quick_menu_show_save_core_overrides ||
         VAR_69->bools.quick_menu_show_save_game_overrides) &&
         !VAR_69->bools.kiosk_mode_enable)
      {
         FUNC_2(VAR_68->list,
            FUNC_3(VAR_43),
            FUNC_3(VAR_15),
            VAR_15,
            VAR_56, 0, 0);
      }
      if (VAR_69->bools.quick_menu_show_information)
      {
         FUNC_2(VAR_68->list,
               FUNC_3(VAR_36),
               FUNC_3(VAR_8),
               VAR_8,
               VAR_56, 0, 0);
      }
   }
   else
      FUNC_2(VAR_68->list,
            FUNC_3(VAR_40),
            FUNC_3(VAR_12),
            VAR_12,
            VAR_63, 0, 0);
   return 0;
}
