
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct string_list {unsigned int size; TYPE_1__* elems; } ;
struct retro_system_info {char* library_name; } ;
typedef int retro_task_t ;
struct TYPE_10__ {char* subsystem_name; char* content_path; char* core_path; char* core_name; int * hostname; scalar_t__ current; scalar_t__ contentless; } ;
typedef TYPE_2__ netplay_crc_handle_t ;
struct TYPE_11__ {int member_0; } ;
typedef TYPE_3__ content_ctx_info_t ;
struct TYPE_9__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;
 struct retro_system_info* FUNC_8 () ;
 int FUNC_9 (int ,int,int,int,int *,int ,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (struct string_list*) ;
 struct string_list* FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,TYPE_3__*,int ,int *,int *) ;
 int FUNC_15 (char*,int *,TYPE_3__*,int ,int *,int *) ;
 int FUNC_16 (int *,TYPE_3__*,int ,int *,int *) ;
 int FUNC_17 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_18(retro_task_t *VAR_8,
      void *VAR_9,
      void *VAR_10, const char *VAR_11)
{
   netplay_crc_handle_t *VAR_12 = (netplay_crc_handle_t*)VAR_9;
   content_ctx_info_t VAR_13 = {0};

   if (!VAR_12)
      return;

   FUNC_5(VAR_7);

   if (!FUNC_10(VAR_12->subsystem_name) && !FUNC_11(VAR_12->subsystem_name, "N/A"))
   {
      content_ctx_info_t VAR_14 = {0};
      struct string_list *VAR_15 = FUNC_13(VAR_12->content_path, "|");
      unsigned VAR_16 = 0;

      FUNC_15(VAR_12->core_path, ((void*)0),
            &VAR_14, VAR_3, ((void*)0), ((void*)0));
      FUNC_3();
      if (!FUNC_4(VAR_12->subsystem_name))
         FUNC_0("[Lobby] Subsystem not found in implementation\n");

      for (VAR_16 = 0; VAR_16 < VAR_15->size; VAR_16++)
         FUNC_2(VAR_15->elems[VAR_16].data);
      FUNC_16(
         ((void*)0), &VAR_14,
         VAR_3, ((void*)0), ((void*)0));
      FUNC_12(VAR_15);
      return;
   }


   if (!FUNC_10(VAR_12->core_path) && !FUNC_10(VAR_12->content_path)
      && !VAR_12->contentless && !VAR_12->current)
   {
      struct retro_system_info *VAR_17 = FUNC_8();

      FUNC_0("[Lobby] Loading core %s with content file %s\n",
         VAR_12->core_path, VAR_12->content_path);

      FUNC_1(VAR_1, VAR_12->hostname);

      if (VAR_17 && FUNC_11(VAR_17->library_name, VAR_12->core_name))
         FUNC_14(
               VAR_12->content_path, &VAR_13,
               VAR_3, ((void*)0), ((void*)0));
      else
      {
         FUNC_15(VAR_12->core_path, ((void*)0),
               &VAR_13, VAR_3, ((void*)0), ((void*)0));
         FUNC_14(
               VAR_12->content_path, &VAR_13,
               VAR_3, ((void*)0), ((void*)0));
      }

   }
   else


   if (!FUNC_10(VAR_12->core_path) && !FUNC_10(VAR_12->content_path)
      && VAR_12->contentless)
   {
      content_ctx_info_t VAR_18 = {0};
      struct retro_system_info *VAR_19 = FUNC_8();

      FUNC_0("[Lobby] Loading contentless core %s\n", VAR_12->core_path);

      FUNC_1(VAR_1, VAR_12->hostname);

      if (!FUNC_11(VAR_19->library_name, VAR_12->core_name))
         FUNC_15(VAR_12->core_path, ((void*)0),
               &VAR_18, VAR_3, ((void*)0), ((void*)0));

      FUNC_17(&VAR_18);
   }

   else if (!FUNC_10(VAR_12->core_path) && !FUNC_10(VAR_12->content_path)
      && VAR_12->current)
   {
      FUNC_0("[Lobby] Loading core %s with current content\n", VAR_12->core_path);
      FUNC_1(VAR_0, VAR_12->hostname);
      FUNC_1(VAR_2, ((void*)0));
   }

   else
   {
      FUNC_0("[Lobby] Couldn't find a suitable %s\n",
         FUNC_10(VAR_12->content_path) ? "content file" : "core");
      FUNC_9(
            FUNC_7(VAR_4),
            1, 480, 1,
            ((void*)0), VAR_6, VAR_5);
   }

   FUNC_6(VAR_12);
}
