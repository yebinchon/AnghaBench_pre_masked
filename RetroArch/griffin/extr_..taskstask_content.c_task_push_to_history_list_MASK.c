
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int subsystem_name ;
struct string_list {int dummy; } ;
struct retro_system_info {char* library_name; } ;
struct playlist_entry {char* path; char* label; char* core_path; char* core_name; char* crc32; char* db_name; char* subsystem_ident; char* subsystem_name; struct string_list* subsystem_roms; int member_0; } ;
struct TYPE_13__ {scalar_t__ history_list_enable; } ;
struct TYPE_14__ {TYPE_2__ bools; } ;
typedef TYPE_3__ settings_t ;
typedef int playlist_t ;
struct TYPE_15__ {int rpl_entry_selection_ptr; } ;
typedef TYPE_4__ menu_handle_t ;
struct TYPE_12__ {char const* label; } ;
struct TYPE_16__ {TYPE_1__ name; } ;
typedef TYPE_5__ global_t ;
struct TYPE_17__ {char* display_name; } ;
typedef TYPE_6__ core_info_t ;
struct TYPE_18__ {int * image_history; int * music_history; int * video_history; int * content_history; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct playlist_entry*) ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 (int*,int*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (TYPE_6__**) ;
 int FUNC_5 (char*) ;
 TYPE_9__ VAR_5 ;
 TYPE_5__* FUNC_6 () ;
 scalar_t__ FUNC_7 (size_t) ;
 int FUNC_8 (int ,int *) ;
 TYPE_4__* FUNC_9 () ;
 char* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,size_t,int) ;
 int * FUNC_14 () ;
 int FUNC_15 (int *,int ,char const**) ;
 int FUNC_16 (int *,int ,char const**) ;
 int FUNC_17 (int *,int ,char*,char const*) ;
 struct retro_system_info* FUNC_18 () ;
 scalar_t__ FUNC_19 (char const*) ;
 int FUNC_20 (char*,char const*,size_t) ;

__attribute__((used)) static void FUNC_21(
      bool VAR_6,
      bool VAR_7)
{
   bool VAR_8 = 0;
   bool VAR_9 = 0;

   FUNC_2(&VAR_8, &VAR_9);


   if (VAR_9 || VAR_8)
   {
      size_t VAR_10 = VAR_0 * sizeof(char);
      char *VAR_11 = (char*)FUNC_7(VAR_10);
      const char *VAR_12 = FUNC_10(VAR_2);
      struct retro_system_info *VAR_13 = FUNC_18();

      VAR_11[0] = '\0';

      if (!FUNC_19(VAR_12))
         FUNC_20(VAR_11, VAR_12, VAR_10);



      if (!VAR_6 && !FUNC_19(VAR_11))
         FUNC_13(VAR_11, VAR_10, 1);







      if (VAR_13 && !FUNC_19(VAR_11))
      {
         const char *VAR_14 = ((void*)0);
         const char *VAR_15 = ((void*)0);
         const char *VAR_16 = ((void*)0);
         const char *VAR_17 = ((void*)0);
         const char *VAR_18 = ((void*)0);
         playlist_t *VAR_19 = VAR_5.content_history;
         settings_t *VAR_20 = FUNC_1();
         global_t *VAR_21 = FUNC_6();

         switch (FUNC_12(VAR_11))
         {
            case 129:





               break;
            case 128:
               VAR_19 = VAR_5.music_history;
               VAR_15 = "musicplayer";
               VAR_14 = "builtin";
               break;
            case 130:





               break;
            default:
            {
               core_info_t *VAR_22 = ((void*)0);



               FUNC_4(&VAR_22);


               VAR_14 = FUNC_10(VAR_3);

               if (VAR_22)
                  VAR_15 = VAR_22->display_name;

               if (FUNC_19(VAR_15))
                  VAR_15 = VAR_13->library_name;
               break;
            }
         }

         if (VAR_21 && !FUNC_19(VAR_21->name.label))
            VAR_16 = VAR_21->name.label;

         if (
              VAR_20 && VAR_20->bools.history_list_enable
               && VAR_19)
         {
            char VAR_23[VAR_0];
            struct playlist_entry VAR_24 = {0};

            VAR_23[0] = '\0';

            FUNC_3(FUNC_10(VAR_4), VAR_23, sizeof(VAR_23));


            VAR_24.path = (char*)VAR_11;
            VAR_24.label = (char*)VAR_16;
            VAR_24.core_path = (char*)VAR_14;
            VAR_24.core_name = (char*)VAR_15;
            VAR_24.crc32 = (char*)VAR_17;
            VAR_24.db_name = (char*)VAR_18;
            VAR_24.subsystem_ident = (char*)FUNC_10(VAR_4);
            VAR_24.subsystem_name = (char*)VAR_23;
            VAR_24.subsystem_roms = (struct string_list*)FUNC_11();

            FUNC_0(
                  VAR_19, &VAR_24);
         }
      }

      FUNC_5(VAR_11);
   }
}
