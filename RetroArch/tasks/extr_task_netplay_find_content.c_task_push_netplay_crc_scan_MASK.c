
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


union string_list_elem_attr {int i; } ;
typedef int uint32_t ;
struct string_list {int dummy; } ;
struct TYPE_12__ {int path_content_history; int directory_playlist; } ;
struct TYPE_14__ {TYPE_1__ paths; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_15__ {char* content_crc; char* content_path; char* hostname; char* core_name; char* subsystem_name; int found; char* core_path; char* core_extensions; int title; int callback; int handler; struct TYPE_15__* state; int type; struct string_list* lpl_list; } ;
typedef TYPE_4__ retro_task_t ;
typedef TYPE_4__ netplay_crc_handle_t ;
struct TYPE_16__ {unsigned int count; TYPE_2__* list; } ;
typedef TYPE_6__ core_info_list_t ;
struct TYPE_13__ {char* core_name; char const* path; char const* supported_extensions; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 (TYPE_6__**) ;
 struct string_list* FUNC_3 (int ,int *,int,int,int,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_1 ;
 int FUNC_5 (char*,char*,char*) ;
 int FUNC_6 (char*,int,char*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (struct string_list*,int ,union string_list_elem_attr) ;
 int FUNC_12 (char*,char const*,int) ;
 TYPE_4__* FUNC_13 () ;
 int VAR_2 ;
 int FUNC_14 (TYPE_4__*) ;

bool FUNC_15(uint32_t VAR_3, char* VAR_4,
      const char *VAR_5, const char *VAR_6, const char *VAR_7)
{
   unsigned VAR_8;
   union string_list_elem_attr VAR_9;
   struct string_list *VAR_10 = ((void*)0);
   core_info_list_t *VAR_11 = ((void*)0);
   settings_t *VAR_12 = FUNC_1();
   retro_task_t *VAR_13 = FUNC_13();
   netplay_crc_handle_t *VAR_14 = (netplay_crc_handle_t*)
      FUNC_0(1, sizeof(*VAR_14));

   if (!VAR_13 || !VAR_14)
      goto error;

   VAR_14->content_crc[0] = '\0';
   VAR_14->content_path[0] = '\0';
   VAR_14->hostname[0] = '\0';
   VAR_14->core_name[0] = '\0';
   VAR_14->subsystem_name[0] = '\0';
   VAR_9.i = 0;

   FUNC_6(VAR_14->content_crc,
         sizeof(VAR_14->content_crc),
         "%08X|crc", VAR_3);

   FUNC_12(VAR_14->content_path,
         VAR_4, sizeof(VAR_14->content_path));
   FUNC_12(VAR_14->hostname,
         VAR_5, sizeof(VAR_14->hostname));
   FUNC_12(VAR_14->subsystem_name,
         VAR_7, sizeof(VAR_14->subsystem_name));
   FUNC_12(VAR_14->core_name,
         VAR_6, sizeof(VAR_14->core_name));

   VAR_10 = FUNC_3(VAR_12->paths.directory_playlist,
         ((void*)0), 1, 1, 1, 0);

   if (!VAR_10)
      goto error;

   VAR_14->lpl_list = VAR_10;

   FUNC_11(VAR_14->lpl_list,
         VAR_12->paths.path_content_history, VAR_9);
   VAR_14->found = 0;

   FUNC_2(&VAR_11);

   for (VAR_8 = 0; VAR_8 < VAR_11->count; VAR_8++)
   {






      if (FUNC_9(VAR_11->list[VAR_8].core_name, VAR_14->core_name))
      {
         FUNC_12(VAR_14->core_path,
               VAR_11->list[VAR_8].path, sizeof(VAR_14->core_path));

         if (FUNC_10(VAR_14->content_path, "N/A") &&
            !FUNC_8(VAR_11->list[VAR_8].supported_extensions))
         {
            FUNC_12(VAR_14->core_extensions,
                  VAR_11->list[VAR_8].supported_extensions,
                  sizeof(VAR_14->core_extensions));
         }
         break;
      }
   }



   VAR_13->type = VAR_0;
   VAR_13->state = VAR_14;
   VAR_13->handler = VAR_2;
   VAR_13->callback = VAR_1;
   VAR_13->title = FUNC_7("Looking for matching content...");

   FUNC_14(VAR_13);

   return 1;

error:
   if (VAR_14)
      FUNC_4(VAR_14);
   if (VAR_13)
      FUNC_4(VAR_13);

   return 0;
}
