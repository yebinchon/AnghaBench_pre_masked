
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct string_list {size_t size; TYPE_1__* elems; } ;
struct TYPE_9__ {unsigned int firmware_count; int supports_no_game; int database_match_archive_member; void* path; void* display_name; int * config_data; void* required_hw_api; void* required_hw_api_list; void* notes; void* note_list; void* databases; void* databases_list; void* categories; void* categories_list; void* licenses; void* licenses_list; void* permissions; void* permissions_list; void* authors; void* authors_list; void* supported_extensions; void* supported_extensions_list; void* system_manufacturer; void* system_id; void* systemname; void* core_name; void* display_version; } ;
typedef TYPE_2__ core_info_t ;
struct TYPE_10__ {int count; TYPE_2__* list; } ;
typedef TYPE_3__ core_info_list_t ;
typedef int config_file_t ;
struct TYPE_8__ {char const* data; } ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int *,char*,int*) ;
 scalar_t__ FUNC_2 (int *,char*,char**) ;
 int FUNC_3 (int *,char*,unsigned int*) ;
 int FUNC_4 (TYPE_3__*) ;
 int * FUNC_5 (char const*,char const*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (struct string_list*,char const*,char const*,int,int,int,int) ;
 int FUNC_9 (char*) ;
 char const* FUNC_10 (void*) ;
 void* FUNC_11 (char const*) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (struct string_list*) ;
 struct string_list* FUNC_14 () ;
 void* FUNC_15 (void*,char*) ;
 int FUNC_16 (struct string_list*) ;

__attribute__((used)) static core_info_list_t *FUNC_17(const char *VAR_0,
      const char *VAR_1,
      const char *VAR_2,
      bool VAR_3)
{
   size_t VAR_4;
   core_info_t *VAR_5 = ((void*)0);
   core_info_list_t *VAR_6 = ((void*)0);
   const char *VAR_7 = VAR_1;
   struct string_list *VAR_8 = FUNC_14();
   bool VAR_9 = FUNC_8(VAR_8, VAR_0, VAR_2,
         0, VAR_3, 0, 0);
   if (!VAR_9)
   {
      FUNC_13(VAR_8);
      return ((void*)0);
   }


   if (!VAR_8)
      return ((void*)0);

   VAR_6 = (core_info_list_t*)FUNC_0(1, sizeof(*VAR_6));
   if (!VAR_6)
   {
      FUNC_13(VAR_8);
      return ((void*)0);
   }

   VAR_5 = (core_info_t*)FUNC_0(VAR_8->size, sizeof(*VAR_5));
   if (!VAR_5)
   {
      FUNC_4(VAR_6);
      FUNC_13(VAR_8);
      return ((void*)0);
   }

   VAR_6->list = VAR_5;
   VAR_6->count = VAR_8->size;

   for (VAR_4 = 0; VAR_4 < VAR_8->size; VAR_4++)
   {
      const char *VAR_10 = VAR_8->elems[VAR_4].data;
      config_file_t *VAR_11 = FUNC_5(VAR_10,
            VAR_7);

      if (VAR_11)
      {
         char *VAR_12 = ((void*)0);

         if (FUNC_2(VAR_11, "display_name", &VAR_12)
               && !FUNC_12(VAR_12))
         {
            VAR_5[VAR_4].display_name = FUNC_11(VAR_12);
            FUNC_9(VAR_12);
            VAR_12 = ((void*)0);
         }
         if (FUNC_2(VAR_11, "display_version", &VAR_12)
               && !FUNC_12(VAR_12))
         {
            VAR_5[VAR_4].display_version = FUNC_11(VAR_12);
            FUNC_9(VAR_12);
            VAR_12 = ((void*)0);
         }
         if (FUNC_2(VAR_11, "corename", &VAR_12)
               && !FUNC_12(VAR_12))
         {
            VAR_5[VAR_4].core_name = FUNC_11(VAR_12);
            FUNC_9(VAR_12);
            VAR_12 = ((void*)0);
         }

         if (FUNC_2(VAR_11, "systemname", &VAR_12)
               && !FUNC_12(VAR_12))
         {
            VAR_5[VAR_4].systemname = FUNC_11(VAR_12);
            FUNC_9(VAR_12);
            VAR_12 = ((void*)0);
         }

         if (FUNC_2(VAR_11, "systemid", &VAR_12)
               && !FUNC_12(VAR_12))
         {
            VAR_5[VAR_4].system_id = FUNC_11(VAR_12);
            FUNC_9(VAR_12);
            VAR_12 = ((void*)0);
         }

         if (FUNC_2(VAR_11, "manufacturer", &VAR_12)
               && !FUNC_12(VAR_12))
         {
            VAR_5[VAR_4].system_manufacturer = FUNC_11(VAR_12);
            FUNC_9(VAR_12);
            VAR_12 = ((void*)0);
         }

         {
            unsigned VAR_13 = 0;
            FUNC_3(VAR_11, "firmware_count", &VAR_13);
            VAR_5[VAR_4].firmware_count = VAR_13;
         }

         if (FUNC_2(VAR_11, "supported_extensions", &VAR_12)
               && !FUNC_12(VAR_12))
         {
            VAR_5[VAR_4].supported_extensions = FUNC_11(VAR_12);
            VAR_5[VAR_4].supported_extensions_list =
               FUNC_15(VAR_5[VAR_4].supported_extensions, "|");

            FUNC_9(VAR_12);
            VAR_12 = ((void*)0);
         }

         if (FUNC_2(VAR_11, "authors", &VAR_12)
               && !FUNC_12(VAR_12))
         {
            VAR_5[VAR_4].authors = FUNC_11(VAR_12);
            VAR_5[VAR_4].authors_list =
               FUNC_15(VAR_5[VAR_4].authors, "|");

            FUNC_9(VAR_12);
            VAR_12 = ((void*)0);
         }

         if (FUNC_2(VAR_11, "permissions", &VAR_12)
               && !FUNC_12(VAR_12))
         {
            VAR_5[VAR_4].permissions = FUNC_11(VAR_12);
            VAR_5[VAR_4].permissions_list =
               FUNC_15(VAR_5[VAR_4].permissions, "|");

            FUNC_9(VAR_12);
            VAR_12 = ((void*)0);
         }

         if (FUNC_2(VAR_11, "license", &VAR_12)
               && !FUNC_12(VAR_12))
         {
            VAR_5[VAR_4].licenses = FUNC_11(VAR_12);
            VAR_5[VAR_4].licenses_list =
               FUNC_15(VAR_5[VAR_4].licenses, "|");

            FUNC_9(VAR_12);
            VAR_12 = ((void*)0);
         }

         if (FUNC_2(VAR_11, "categories", &VAR_12)
               && !FUNC_12(VAR_12))
         {
            VAR_5[VAR_4].categories = FUNC_11(VAR_12);
            VAR_5[VAR_4].categories_list =
               FUNC_15(VAR_5[VAR_4].categories, "|");

            FUNC_9(VAR_12);
            VAR_12 = ((void*)0);
         }

         if (FUNC_2(VAR_11, "database", &VAR_12)
               && !FUNC_12(VAR_12))
         {
            VAR_5[VAR_4].databases = FUNC_11(VAR_12);
            VAR_5[VAR_4].databases_list =
               FUNC_15(VAR_5[VAR_4].databases, "|");

            FUNC_9(VAR_12);
            VAR_12 = ((void*)0);
         }

         if (FUNC_2(VAR_11, "notes", &VAR_12)
               && !FUNC_12(VAR_12))
         {
            VAR_5[VAR_4].notes = FUNC_11(VAR_12);
            VAR_5[VAR_4].note_list = FUNC_15(VAR_5[VAR_4].notes, "|");

            FUNC_9(VAR_12);
            VAR_12 = ((void*)0);
         }

         if (FUNC_2(VAR_11, "required_hw_api", &VAR_12)
               && !FUNC_12(VAR_12))
         {
            VAR_5[VAR_4].required_hw_api = FUNC_11(VAR_12);
            VAR_5[VAR_4].required_hw_api_list = FUNC_15(VAR_5[VAR_4].required_hw_api, "|");

            FUNC_9(VAR_12);
            VAR_12 = ((void*)0);
         }

         if (VAR_12)
            FUNC_9(VAR_12);
         VAR_12 = ((void*)0);

         {
            bool VAR_14 = 0;
            if (FUNC_1(VAR_11, "supports_no_game",
                     &VAR_14))
               VAR_5[VAR_4].supports_no_game = VAR_14;

            if (FUNC_1(VAR_11, "database_match_archive_member",
                     &VAR_14))
               VAR_5[VAR_4].database_match_archive_member = VAR_14;
         }

         VAR_5[VAR_4].config_data = VAR_11;
      }

      if (!FUNC_12(VAR_10))
         VAR_5[VAR_4].path = FUNC_11(VAR_10);

      if (!VAR_5[VAR_4].display_name)
         VAR_5[VAR_4].display_name =
            FUNC_11(FUNC_10(VAR_5[VAR_4].path));
   }

   if (VAR_6)
   {
      FUNC_6(VAR_6);
      FUNC_7(VAR_6);
   }

   FUNC_13(VAR_8);
   return VAR_6;
}
