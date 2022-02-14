
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int system_name ;
struct playlist_entry {char const* path; char const* label; char const* core_name; } ;
struct TYPE_10__ {char const* menu_driver; } ;
struct TYPE_9__ {scalar_t__ playlist_show_inline_core_name; } ;
struct TYPE_8__ {int playlist_show_sublabels; } ;
struct TYPE_11__ {TYPE_3__ arrays; TYPE_2__ uints; TYPE_1__ bools; } ;
typedef TYPE_4__ settings_t ;
typedef int playlist_t ;
typedef int menu_entry_label ;
struct TYPE_12__ {char const* path; int need_push_no_playlist_entries; int count; int list; } ;
typedef TYPE_5__ menu_displaylist_info_t ;
typedef int lpl_basename ;
typedef int label_spacer ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 char const* VAR_6 ;
 int VAR_7 ;
 char const* VAR_8 ;
 TYPE_4__* FUNC_0 () ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*,char const*,int) ;
 void FUNC_4 (char*) ;
 void FUNC_5 (char*) ;
 void FUNC_6 (char*) ;
 void FUNC_7 (char*) ;
 void FUNC_8 (char*) ;
 void FUNC_9 (char*) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (int ,char*,char const*,int ,int ,int ,unsigned int) ;
 int FUNC_12 (int *,unsigned int,struct playlist_entry const**) ;
 int FUNC_13 (int *) ;
 size_t FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (char const*) ;
 scalar_t__ FUNC_16 (char const*,char*) ;
 int FUNC_17 (char*,char*,int) ;
 int FUNC_18 (char*,char const*,int) ;
 void FUNC_19 (char*) ;

__attribute__((used)) static int FUNC_20(menu_displaylist_info_t *VAR_9,
      playlist_t *VAR_10, const char *VAR_11, bool VAR_12)
{
   unsigned VAR_13;
   char VAR_14[VAR_7];
   size_t VAR_15 = FUNC_14(VAR_10);
   settings_t *VAR_16 = FUNC_0();
   bool VAR_17 = 0;
   void (*VAR_18)(char*);

   VAR_14[0] = '\0';

   if (VAR_15 == 0)
      goto error;


   if (!FUNC_16(VAR_16->arrays.menu_driver, "ozone") &&
       !VAR_16->bools.playlist_show_sublabels &&
       ((VAR_16->uints.playlist_show_inline_core_name == VAR_4) ||
        (!VAR_12 && !(VAR_16->uints.playlist_show_inline_core_name == VAR_5))))
   {
      VAR_17 = 1;



      if (FUNC_16(VAR_16->arrays.menu_driver, "rgui"))
         FUNC_18(VAR_14, VAR_8, sizeof(VAR_14));
      else
         FUNC_18(VAR_14, VAR_6, sizeof(VAR_14));
   }
   if (FUNC_16(VAR_11, "history") ||
       FUNC_16(VAR_11, "favorites") ||
       FUNC_16(VAR_11, "images_history") ||
       FUNC_16(VAR_11, "music_history") ||
       FUNC_16(VAR_11, "video_history"))
   {
      char VAR_19[15];
      VAR_19[0] = '\0';

      FUNC_18(VAR_19, VAR_11, sizeof(VAR_19));
      FUNC_10(VAR_19, sizeof(VAR_19));
   }
   else if (!FUNC_15(VAR_9->path))
   {
      char VAR_20[VAR_3];
      VAR_20[0] = '\0';

      FUNC_2(VAR_20, VAR_9->path, sizeof(VAR_20));
      FUNC_10(VAR_20, sizeof(VAR_20));
   }


   FUNC_1(VAR_9->list, VAR_15);

   switch (FUNC_13(VAR_10))
   {
      case 129 :
         VAR_18 = &FUNC_8;
         break;
      case 130 :
         VAR_18 = &FUNC_7;
         break;
      case 128 :
         VAR_18 = &FUNC_9;
         break;
      case 133 :
         VAR_18 = &FUNC_4;
         break;
      case 132 :
         VAR_18 = &FUNC_5;
         break;
      case 131 :
         VAR_18 = &FUNC_6;
         break;
      default :
         VAR_18 = ((void*)0);
   }

   for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++)
   {
      char VAR_21[VAR_3];
      const struct playlist_entry *VAR_22 = ((void*)0);

      VAR_21[0] = '\0';


      FUNC_12(VAR_10, VAR_13, &VAR_22);

      if (!FUNC_15(VAR_22->path))
      {






         if (FUNC_15(VAR_22->label))
            FUNC_3(VAR_21, VAR_22->path, sizeof(VAR_21));
         else
            FUNC_18(VAR_21, VAR_22->label, sizeof(VAR_21));

         if (VAR_18)
            (*VAR_18)(VAR_21);

         if (VAR_17)
         {
            if (!FUNC_15(VAR_22->core_name) && !FUNC_16(VAR_22->core_name, "DETECT"))
            {
               FUNC_17(VAR_21, VAR_14, sizeof(VAR_21));
               FUNC_17(VAR_21, VAR_22->core_name, sizeof(VAR_21));
            }
         }

         FUNC_11(VAR_9->list, VAR_21, VAR_22->path,
               VAR_2, VAR_1, 0, VAR_13);
      }
      else
      {
         if (VAR_22->core_name)
            FUNC_18(VAR_21, VAR_22->core_name, sizeof(VAR_21));

         FUNC_11(VAR_9->list, VAR_21, VAR_11,
               VAR_2, VAR_0, 0, VAR_13);
      }

      VAR_9->count++;
   }

   return 0;

error:
   VAR_9->need_push_no_playlist_entries = 1;
   return 0;
}
