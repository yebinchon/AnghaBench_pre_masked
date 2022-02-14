
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct retro_subsystem_info {int dummy; } ;
struct TYPE_13__ {int menu_show_shutdown; int menu_show_reboot; int menu_show_restart_retroarch; int menu_show_help; int menu_show_configurations; int menu_show_information; int menu_content_show_netplay; int menu_show_online_updater; int menu_show_dump_disc; int menu_show_load_disc; int menu_content_show_history; int menu_show_load_content; int menu_show_load_core; } ;
struct TYPE_14__ {TYPE_2__ bools; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_12__ {struct retro_subsystem_info* data; } ;
struct TYPE_15__ {TYPE_1__ subsystem; int load_no_content; } ;
typedef TYPE_4__ rarch_system_info_t ;
typedef int menu_handle_t ;
struct TYPE_16__ {int need_push; int need_refresh; int list; } ;
typedef TYPE_5__ menu_displaylist_info_t ;
struct TYPE_17__ {int add_empty_entry; int enum_idx; int parse_type; TYPE_5__* info; int * data; } ;
typedef TYPE_6__ menu_displaylist_ctx_parse_entry_t ;
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
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (int ,char*,char*,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct retro_subsystem_info const*,TYPE_5__*) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 TYPE_4__* FUNC_11 () ;
 struct retro_subsystem_info* VAR_29 ;

__attribute__((used)) static int FUNC_12(void *VAR_30, void *VAR_31,
      menu_displaylist_info_t *VAR_32, unsigned VAR_33)
{
   menu_displaylist_ctx_parse_entry_t VAR_34;
   int VAR_35 = -1;
   core_info_list_t *VAR_36 = ((void*)0);
   menu_handle_t *VAR_37 = (menu_handle_t*)VAR_30;

   (void)VAR_31;

   switch (VAR_33)
   {
      case 129:
         {
            FUNC_7(VAR_0, VAR_32->list);

            FUNC_6(VAR_32->list,
                  FUNC_9(VAR_23),
                  FUNC_9(VAR_6),
                  VAR_6,
                  VAR_25, 0, 0);

            FUNC_1(&VAR_36);
            if (FUNC_2(VAR_36))
            {
               FUNC_6(VAR_32->list,
                     FUNC_9(VAR_22),
                     FUNC_9(VAR_4),
                     VAR_4,
                     VAR_25, 0, 0);
            }

            if (FUNC_4(VAR_32->list, 1) != 0)
               FUNC_6(VAR_32->list, "/",
                     FUNC_9(VAR_7),
                     VAR_7,
                     VAR_25, 0, 0);

            FUNC_6(VAR_32->list,
                  FUNC_9(VAR_24),
                  FUNC_9(VAR_13),
                  VAR_13,
                  VAR_25, 0, 0);

            VAR_32->need_push = 1;
            VAR_32->need_refresh = 1;
            VAR_35 = 0;
         }
         break;
      case 128:
         {
            settings_t *VAR_38 = FUNC_0();
            rarch_system_info_t *VAR_39 = FUNC_11();
            FUNC_7(VAR_0, VAR_32->list);

            VAR_34.data = VAR_37;
            VAR_34.info = VAR_32;
            VAR_34.parse_type = VAR_26;
            VAR_34.add_empty_entry = 0;

            if (FUNC_10(VAR_27, ((void*)0)))
            {
               if (!FUNC_10(VAR_28, ((void*)0)))
               {
                  VAR_34.enum_idx = VAR_2;
                  FUNC_5(&VAR_34);
               }
            }
            else
            {
               if (VAR_39->load_no_content)
               {
                  VAR_34.enum_idx = VAR_20;
                  FUNC_5(&VAR_34);
               }


               if (FUNC_3())

               {
                  if (VAR_38->bools.menu_show_load_core)
                  {
                     VAR_34.enum_idx = VAR_3;
                     FUNC_5(&VAR_34);
                  }
               }
            }

            if (VAR_38->bools.menu_show_load_content)
            {
               const struct retro_subsystem_info* VAR_40;

               VAR_34.enum_idx = VAR_11;
               FUNC_5(&VAR_34);


               if (VAR_39->subsystem.data)
                     VAR_40 = VAR_39->subsystem.data;

               else
                  VAR_40 = VAR_29;

               FUNC_8(VAR_40, VAR_32);
            }

            if (VAR_38->bools.menu_content_show_history)
            {
               VAR_34.enum_idx = VAR_10;
               FUNC_5(&VAR_34);
            }

            if (VAR_38->bools.menu_show_load_disc)
            {
               VAR_34.enum_idx = VAR_12;
               FUNC_5(&VAR_34);
            }

            if (VAR_38->bools.menu_show_dump_disc)
            {
               VAR_34.enum_idx = VAR_5;
               FUNC_5(&VAR_34);
            }
            if (VAR_38->bools.menu_show_information)
            {
               VAR_34.enum_idx = VAR_9;
               FUNC_5(&VAR_34);
            }

            if (VAR_38->bools.menu_show_configurations)
            {
               VAR_34.enum_idx = VAR_1;
               FUNC_5(&VAR_34);
            }

            if (VAR_38->bools.menu_show_help)
            {
               VAR_34.enum_idx = VAR_8;
               FUNC_5(&VAR_34);
            }


            if (VAR_38->bools.menu_show_restart_retroarch)
            {
               VAR_34.enum_idx = VAR_18;
               FUNC_5(&VAR_34);
            }

            VAR_34.enum_idx = VAR_16;
            FUNC_5(&VAR_34);
            VAR_32->need_push = 1;
            VAR_35 = 0;
         }
         break;
   }
   return VAR_35;
}
