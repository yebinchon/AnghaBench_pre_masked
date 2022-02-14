
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int kiosk_mode_enable; scalar_t__ menu_show_core_updater; } ;
struct TYPE_8__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_9__ {int* list; int menu_list; scalar_t__ need_push_no_playlist_entries; scalar_t__ need_push; scalar_t__ need_clear; scalar_t__ need_refresh; scalar_t__ push_builtin_cores; scalar_t__ download_core; scalar_t__ need_sort; scalar_t__ need_entries_refresh; scalar_t__ need_navigation_clear; } ;
typedef TYPE_3__ menu_displaylist_info_t ;


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
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int*,int ,char*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int*) ;
 int FUNC_7 (int*,char*,char*,int ,int ,int ,int ) ;
 int FUNC_8 (size_t) ;
 int FUNC_9 (int ) ;
 char* VAR_17 ;
 char* VAR_18 ;
 char* VAR_19 ;
 int VAR_20 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int*,int ) ;

bool FUNC_12(menu_displaylist_info_t *VAR_21)
{
   size_t VAR_22 = 0;




   if (VAR_21->need_navigation_clear)
   {
      bool VAR_23 = 1;
      FUNC_3(VAR_14, &VAR_23);
   }

   if (VAR_21->need_entries_refresh)
   {
      bool VAR_24 = 0;
      FUNC_6(VAR_2, &VAR_24);
   }

   if (VAR_21->need_sort)
      FUNC_2(VAR_21->list);
   if (VAR_21->push_builtin_cores)
   {
   }

   if (!FUNC_10(VAR_17))
   {
      FUNC_7(VAR_21->list,
            VAR_19,
            VAR_18,
            VAR_20,
            VAR_0, 0, 0);
      FUNC_1(VAR_21->list, 0,
            VAR_17);

      VAR_20 = VAR_16;
      VAR_18[0] = '\0';
      VAR_19[0] = '\0';
      VAR_17[0] = '\0';
   }

   if (VAR_21->need_refresh)
      FUNC_6(VAR_1, VAR_21->list);

   if (VAR_21->need_clear)
      FUNC_8(VAR_22);

   if (VAR_21->need_push)
   {
      if (VAR_21->need_push_no_playlist_entries)
         FUNC_5(VAR_21->list,
               FUNC_9(
                  VAR_9),
               FUNC_9(
                  VAR_4),
               VAR_4,
               VAR_13, 0, 0);

      FUNC_4(VAR_21);
      FUNC_11(VAR_21->list, VAR_21->menu_list);
   }
   return 1;
}
