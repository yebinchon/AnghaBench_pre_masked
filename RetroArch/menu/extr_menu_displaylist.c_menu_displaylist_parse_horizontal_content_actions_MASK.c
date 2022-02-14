
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int system ;
struct playlist_entry {char* path; } ;
struct TYPE_12__ {int kiosk_mode_enable; scalar_t__ quick_menu_show_download_thumbnails; scalar_t__ quick_menu_show_information; scalar_t__ quick_menu_show_reset_core_association; scalar_t__ quick_menu_show_set_core_association; scalar_t__ quick_menu_show_add_to_favorites; scalar_t__ playlist_entry_rename; } ;
struct TYPE_11__ {scalar_t__ playlist_entry_remove_enable; } ;
struct TYPE_13__ {TYPE_2__ bools; TYPE_1__ uints; } ;
typedef TYPE_3__ settings_t ;
typedef int playlist_t ;
struct TYPE_14__ {unsigned int rpl_entry_selection_ptr; char* deferred_path; } ;
typedef TYPE_4__ menu_handle_t ;
struct TYPE_15__ {int list; } ;
typedef TYPE_5__ menu_displaylist_info_t ;


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
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ FUNC_0 (char const*) ;
 TYPE_3__* FUNC_1 () ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,unsigned int) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (char const*) ;
 char* FUNC_8 (int ) ;
 char* FUNC_9 (char*) ;
 int * FUNC_10 () ;
 char* FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned int,struct playlist_entry const**) ;
 int FUNC_13 (int *,unsigned int,char const*,char const*) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (char const*) ;
 scalar_t__ FUNC_16 (char const*,char const*) ;

__attribute__((used)) static int FUNC_17(
      menu_handle_t *VAR_31,
      menu_displaylist_info_t *VAR_32)
{
   bool VAR_33 = 0;
   playlist_t *VAR_34 = FUNC_10();
   settings_t *VAR_35 = FUNC_1();
   const char *VAR_36 = FUNC_8(VAR_29);
   unsigned VAR_37 = VAR_31->rpl_entry_selection_ptr;
   const struct playlist_entry *VAR_38 = ((void*)0);

   if (VAR_34)
      FUNC_12(VAR_34, VAR_37, &VAR_38);

   VAR_33 = !FUNC_14(VAR_28, ((void*)0))
         && FUNC_16(VAR_31->deferred_path, VAR_36);

   if (VAR_33)
      FUNC_3(VAR_31, VAR_32);
   else
   {
      FUNC_5(VAR_32->list,
            FUNC_6(VAR_21),
            FUNC_6(VAR_11),
            VAR_11, VAR_2, 0, VAR_37);

      if (VAR_35->bools.playlist_entry_rename &&
            !VAR_35->bools.kiosk_mode_enable)
         FUNC_5(VAR_32->list,
               FUNC_6(VAR_19),
               FUNC_6(VAR_9),
               VAR_9,
               VAR_2, 0, VAR_37);

      if (!VAR_35->bools.kiosk_mode_enable)
      {
         bool VAR_39 = 0;

         if (VAR_35->uints.playlist_entry_remove_enable == VAR_26)
            VAR_39 = 1;
         else if (VAR_35->uints.playlist_entry_remove_enable == VAR_27)
         {
            char VAR_40[VAR_25];
            VAR_40[0] = '\0';

            FUNC_4(VAR_40, sizeof(VAR_40));

            if (!FUNC_15(VAR_40))
               VAR_39 = FUNC_16(VAR_40, "history") ||
                                      FUNC_16(VAR_40, "favorites") ||
                                      FUNC_16(VAR_40, "images_history") ||
                                      FUNC_16(VAR_40, "music_history") ||
                                      FUNC_16(VAR_40, "video_history");






            if (!VAR_39 && VAR_35->bools.quick_menu_show_information)
            {
               const char *VAR_41 = FUNC_11(VAR_34);

               if (!FUNC_15(VAR_41))
               {
                  const char *VAR_42 = FUNC_7(VAR_41);

                  if (!FUNC_15(VAR_42))
                     VAR_39 = FUNC_16(VAR_42, FUNC_2(VAR_1)) ||
                                            FUNC_16(VAR_42, FUNC_2(VAR_0));
               }
            }
         }

         if (VAR_39)
            FUNC_5(VAR_32->list,
                  FUNC_6(VAR_16),
                  FUNC_6(VAR_6),
                  VAR_6,
                  VAR_24, 0, 0);
      }

      if (VAR_35->bools.quick_menu_show_add_to_favorites)
      {
         FUNC_5(VAR_32->list,
               FUNC_6(VAR_13),
               FUNC_6(VAR_3),
               VAR_3, VAR_2, 0, 0);
      }

      if (VAR_35->bools.quick_menu_show_set_core_association && !VAR_35->bools.kiosk_mode_enable)
      {
         FUNC_5(VAR_32->list,
               FUNC_6(VAR_22),
               FUNC_6(VAR_12),
               VAR_12, VAR_2, 0, 0);
      }

      if (VAR_35->bools.quick_menu_show_reset_core_association && !VAR_35->bools.kiosk_mode_enable)
      {
         FUNC_5(VAR_32->list,
               FUNC_6(VAR_20),
               FUNC_6(VAR_10),
               VAR_10, VAR_2, 0, 0);
      }

      if (VAR_35->bools.quick_menu_show_information)
      {
         FUNC_5(VAR_32->list,
               FUNC_6(VAR_18),
               FUNC_6(VAR_8),
               VAR_8, VAR_23, 0, 0);
      }
   }
   return 0;
}
