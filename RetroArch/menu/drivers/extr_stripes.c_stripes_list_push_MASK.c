
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct retro_subsystem_info {char* desc; int num_roms; } ;
struct TYPE_14__ {int menu_show_reboot; int menu_show_quit_retroarch; int menu_show_help; int kiosk_mode_enable; int menu_show_configurations; int menu_show_restart_retroarch; int menu_show_information; int menu_content_show_settings; int menu_show_online_updater; int menu_show_load_content; int menu_show_load_core; } ;
struct TYPE_12__ {int kiosk_mode_password; int menu_content_show_settings_password; } ;
struct TYPE_15__ {TYPE_3__ bools; TYPE_1__ paths; } ;
typedef TYPE_4__ settings_t ;
typedef int s ;
struct TYPE_13__ {int size; struct retro_subsystem_info* data; } ;
struct TYPE_16__ {TYPE_2__ subsystem; int load_no_content; } ;
typedef TYPE_5__ rarch_system_info_t ;
typedef int menu_handle_t ;
struct TYPE_17__ {int need_push; int need_refresh; int list; } ;
typedef TYPE_6__ menu_displaylist_info_t ;
struct TYPE_18__ {int add_empty_entry; int enum_idx; int parse_type; TYPE_6__* info; int * data; } ;
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
 TYPE_4__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (int ,char*,char*,int ,int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (int ,int *) ;
 TYPE_5__* FUNC_12 () ;
 int FUNC_13 (char*,int,char*,char*,char*) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(void *VAR_34, void *VAR_35,
      menu_displaylist_info_t *VAR_36, unsigned VAR_37)
{
   menu_displaylist_ctx_parse_entry_t VAR_38;
   int VAR_39 = -1;
   int VAR_40 = 0;
   core_info_list_t *VAR_41 = ((void*)0);
   menu_handle_t *VAR_42 = (menu_handle_t*)VAR_34;

   switch (VAR_37)
   {
      case 129:
         {
            settings_t *VAR_43 = FUNC_0();

            FUNC_9(VAR_0, VAR_36->list);

            FUNC_8(VAR_36->list,
                  FUNC_10(VAR_24),
                  FUNC_10(VAR_7),
                  VAR_7,
                  VAR_29, 0, 0);

            FUNC_3(&VAR_41);
            if (FUNC_4(VAR_41))
            {
               FUNC_8(VAR_36->list,
                     FUNC_10(VAR_23),
                     FUNC_10(VAR_6),
                     VAR_6,
                     VAR_29, 0, 0);
            }
            if (FUNC_6(VAR_36->list, 1) != 0)
               FUNC_8(VAR_36->list, "/",
                     FUNC_10(VAR_8),
                     VAR_8,
                     VAR_29, 0, 0);

            if (!VAR_43->bools.kiosk_mode_enable)
            {
               FUNC_8(VAR_36->list,
                     FUNC_10(VAR_25),
                     FUNC_10(VAR_13),
                     VAR_13,
                     VAR_29, 0, 0);
            }

            VAR_36->need_push = 1;
            VAR_36->need_refresh = 1;
            VAR_39 = 0;
         }
         break;
      case 128:
         {
            settings_t *VAR_44 = FUNC_0();
            rarch_system_info_t *VAR_45 = FUNC_12();
            FUNC_9(VAR_0, VAR_36->list);

            VAR_38.data = VAR_42;
            VAR_38.info = VAR_36;
            VAR_38.parse_type = VAR_30;
            VAR_38.add_empty_entry = 0;

            if (FUNC_11(VAR_32, ((void*)0)))
            {
               if (!FUNC_11(VAR_33, ((void*)0)))
               {
                  VAR_38.enum_idx = VAR_4;
                  FUNC_7(&VAR_38);
               }
            }
            else
            {
               if (VAR_45->load_no_content)
               {
                  VAR_38.enum_idx = VAR_19;
                  FUNC_7(&VAR_38);
               }


               if (FUNC_5())

               {
                  if (VAR_44->bools.menu_show_load_core)
                  {
                     VAR_38.enum_idx = VAR_5;
                     FUNC_7(&VAR_38);
                  }
               }
            }

            if (VAR_44->bools.menu_show_load_content)
            {
               const struct retro_subsystem_info* VAR_46 = ((void*)0);

               VAR_38.enum_idx = VAR_11;
               FUNC_7(&VAR_38);

               VAR_46 = VAR_45->subsystem.data;

               if (VAR_46)
               {
                  for (VAR_40 = 0; VAR_40 < VAR_45->subsystem.size; VAR_40++, VAR_46++)
                  {
                     char VAR_47[VAR_31];
                     if (FUNC_1() == VAR_40)
                     {
                        if (FUNC_2() < VAR_46->num_roms)
                        {
                           FUNC_13(VAR_47, sizeof(VAR_47),
                                 "Load %s %s",
                                 VAR_46->desc,
                                 VAR_40 == FUNC_1()
                                 ? "\u2605" : " ");
                           FUNC_8(VAR_36->list,
                                 VAR_47,
                                 FUNC_10(VAR_20),
                                 VAR_20,
                                 VAR_27 + VAR_40, 0, 0);
                        }
                        else
                        {
                           FUNC_13(VAR_47, sizeof(VAR_47),
                                 "Start %s %s",
                                 VAR_46->desc,
                                 VAR_40 == FUNC_1()
                                 ? "\u2605" : " ");
                           FUNC_8(VAR_36->list,
                                 VAR_47,
                                 FUNC_10(VAR_21),
                                 VAR_21,
                                 VAR_28, 0, 0);
                        }
                     }
                     else
                     {
                        FUNC_13(VAR_47, sizeof(VAR_47),
                              "Load %s %s",
                              VAR_46->desc,
                              VAR_40 == FUNC_1()
                              ? "\u2605" : " ");
                        FUNC_8(VAR_36->list,
                              VAR_47,
                              FUNC_10(VAR_20),
                              VAR_20,
                              VAR_27 + VAR_40, 0, 0);
                     }
                  }
               }
            }

            VAR_38.enum_idx = VAR_1;
            FUNC_7(&VAR_38);
            if (!VAR_44->bools.menu_content_show_settings && !FUNC_14(VAR_44->paths.menu_content_show_settings_password))
            {
               VAR_38.enum_idx = VAR_26;
               FUNC_7(&VAR_38);
            }

            if (VAR_44->bools.kiosk_mode_enable && !FUNC_14(VAR_44->paths.kiosk_mode_password))
            {
               VAR_38.enum_idx = VAR_12;
               FUNC_7(&VAR_38);
            }

            if (VAR_44->bools.menu_show_information)
            {
               VAR_38.enum_idx = VAR_10;
               FUNC_7(&VAR_38);
            }


            if (VAR_44->bools.menu_show_restart_retroarch)
            {
               VAR_38.enum_idx = VAR_17;
               FUNC_7(&VAR_38);
            }


            if (VAR_44->bools.menu_show_configurations && !VAR_44->bools.kiosk_mode_enable)
            {
               VAR_38.enum_idx = VAR_2;
               FUNC_7(&VAR_38);
            }

            if (VAR_44->bools.menu_show_help)
            {
               VAR_38.enum_idx = VAR_9;
               FUNC_7(&VAR_38);
            }


            if (VAR_44->bools.menu_show_quit_retroarch)
            {
               VAR_38.enum_idx = VAR_15;
               FUNC_7(&VAR_38);
            }


            if (VAR_44->bools.menu_show_reboot)
            {
               VAR_38.enum_idx = VAR_16;
               FUNC_7(&VAR_38);
            }

            VAR_38.enum_idx = VAR_18;
            FUNC_7(&VAR_38);
            VAR_36->need_push = 1;
            VAR_39 = 0;
         }
         break;
   }
   return VAR_39;
}
