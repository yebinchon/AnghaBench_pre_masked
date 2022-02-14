
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct retro_subsystem_info {int dummy; } ;
struct TYPE_15__ {int menu_show_shutdown; int menu_show_reboot; int menu_show_quit_retroarch; int menu_show_restart_retroarch; int menu_show_help; int kiosk_mode_enable; int menu_show_configurations; int menu_show_information; int menu_content_show_settings; int menu_show_online_updater; int desktop_menu_enable; int menu_show_dump_disc; int menu_show_load_disc; int menu_show_load_content; int menu_show_load_core; } ;
struct TYPE_14__ {int kiosk_mode_password; int menu_content_show_settings_password; } ;
struct TYPE_16__ {TYPE_3__ bools; TYPE_2__ paths; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_13__ {struct retro_subsystem_info* data; } ;
struct TYPE_17__ {TYPE_1__ subsystem; int load_no_content; } ;
typedef TYPE_5__ rarch_system_info_t ;
typedef int menu_handle_t ;
struct TYPE_18__ {int need_push; int need_refresh; int list; } ;
typedef TYPE_6__ menu_displaylist_info_t ;
struct TYPE_19__ {int add_empty_entry; int enum_idx; int parse_type; TYPE_6__* info; int * data; } ;
typedef TYPE_7__ menu_displaylist_ctx_parse_entry_t ;
typedef int core_info_list_t ;




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
 TYPE_4__* FUNC_0 () ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (int ,char*,char*,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct retro_subsystem_info const*,TYPE_6__*) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 TYPE_5__* FUNC_11 () ;
 int FUNC_12 (int ) ;
 struct retro_subsystem_info* VAR_35 ;

__attribute__((used)) static int FUNC_13(void *VAR_36, void *VAR_37,
      menu_displaylist_info_t *VAR_38, unsigned VAR_39)
{
   menu_displaylist_ctx_parse_entry_t VAR_40;
   int VAR_41 = -1;
   core_info_list_t *VAR_42 = ((void*)0);
   menu_handle_t *VAR_43 = (menu_handle_t*)VAR_36;

   switch (VAR_39)
   {
      case 129:
         {
            settings_t *VAR_44 = FUNC_0();

            FUNC_7(VAR_0, VAR_38->list);

            FUNC_6(VAR_38->list,
                  FUNC_9(VAR_27),
                  FUNC_9(VAR_7),
                  VAR_7,
                  VAR_31, 0, 0);

            FUNC_1(&VAR_42);
            if (FUNC_2(VAR_42))
            {
               FUNC_6(VAR_38->list,
                     FUNC_9(VAR_26),
                     FUNC_9(VAR_5),
                     VAR_5,
                     VAR_31, 0, 0);
            }
            if (FUNC_4(VAR_38->list, 1) != 0)
               FUNC_6(VAR_38->list, "/",
                     FUNC_9(VAR_8),
                     VAR_8,
                     VAR_31, 0, 0);

            if (!VAR_44->bools.kiosk_mode_enable)
            {
               FUNC_6(VAR_38->list,
                     FUNC_9(VAR_28),
                     FUNC_9(VAR_14),
                     VAR_14,
                     VAR_31, 0, 0);
            }

            VAR_38->need_push = 1;
            VAR_38->need_refresh = 1;
            VAR_41 = 0;
         }
         break;
      case 128:
         {
            settings_t *VAR_45 = FUNC_0();
            rarch_system_info_t *VAR_46 = FUNC_11();
            FUNC_7(VAR_0, VAR_38->list);

            VAR_40.data = VAR_43;
            VAR_40.info = VAR_38;
            VAR_40.parse_type = VAR_32;
            VAR_40.add_empty_entry = 0;

            if (FUNC_10(VAR_33, ((void*)0)))
            {
               if (!FUNC_10(VAR_34, ((void*)0)))
               {
                  VAR_40.enum_idx = VAR_3;
                  FUNC_5(&VAR_40);
               }
            }
            else
            {
               if (VAR_46->load_no_content)
               {
                  VAR_40.enum_idx = VAR_22;
                  FUNC_5(&VAR_40);
               }


               if (FUNC_3())

               {
                  if (VAR_45->bools.menu_show_load_core)
                  {
                     VAR_40.enum_idx = VAR_4;
                     FUNC_5(&VAR_40);
                  }
               }
            }

            if (VAR_45->bools.menu_show_load_content)
            {
               const struct retro_subsystem_info* VAR_47;

               VAR_40.enum_idx = VAR_11;
               FUNC_5(&VAR_40);

               if (VAR_46->subsystem.data)
                     VAR_47 = VAR_46->subsystem.data;

               else
                  VAR_47 = VAR_35;

               FUNC_8(VAR_47, VAR_38);
            }

            if (VAR_45->bools.menu_show_load_disc)
            {
               VAR_40.enum_idx = VAR_12;
               FUNC_5(&VAR_40);
            }

            if (VAR_45->bools.menu_show_dump_disc)
            {
               VAR_40.enum_idx = VAR_6;
               FUNC_5(&VAR_40);
            }

            VAR_40.enum_idx = VAR_1;
            FUNC_5(&VAR_40);
            if (!VAR_45->bools.menu_content_show_settings && !FUNC_12(VAR_45->paths.menu_content_show_settings_password))
            {
               VAR_40.enum_idx = VAR_30;
               FUNC_5(&VAR_40);
            }

            if (VAR_45->bools.kiosk_mode_enable && !FUNC_12(VAR_45->paths.kiosk_mode_password))
            {
               VAR_40.enum_idx = VAR_13;
               FUNC_5(&VAR_40);
            }

            if (VAR_45->bools.menu_show_information)
            {
               VAR_40.enum_idx = VAR_10;
               FUNC_5(&VAR_40);
            }
            if (VAR_45->bools.menu_show_configurations && !VAR_45->bools.kiosk_mode_enable)
            {
               VAR_40.enum_idx = VAR_2;
               FUNC_5(&VAR_40);
            }

            if (VAR_45->bools.menu_show_help)
            {
               VAR_40.enum_idx = VAR_9;
               FUNC_5(&VAR_40);
            }


            if (VAR_45->bools.menu_show_restart_retroarch)
            {
               VAR_40.enum_idx = VAR_19;
               FUNC_5(&VAR_40);
            }

            if (VAR_45->bools.menu_show_quit_retroarch)
            {
               VAR_40.enum_idx = VAR_17;
               FUNC_5(&VAR_40);
            }

            if (VAR_45->bools.menu_show_reboot)
            {
               VAR_40.enum_idx = VAR_18;
               FUNC_5(&VAR_40);
            }

            if (VAR_45->bools.menu_show_shutdown)
            {
               VAR_40.enum_idx = VAR_21;
               FUNC_5(&VAR_40);
            }

            VAR_38->need_push = 1;
            VAR_41 = 0;
         }
         break;
   }
   return VAR_41;
}
