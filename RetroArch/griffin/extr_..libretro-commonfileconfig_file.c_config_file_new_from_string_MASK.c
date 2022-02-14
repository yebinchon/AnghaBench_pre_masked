
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {size_t size; TYPE_1__* elems; } ;
struct config_file {int guaranteed_no_duplicates; struct config_entry_list* tail; struct config_entry_list* entries; int * path; scalar_t__ include_depth; int * includes; int * last; } ;
struct config_entry_list {int readonly; struct config_entry_list* next; int * value; int * key; } ;
typedef struct config_file config_file_t ;
struct TYPE_2__ {char* data; } ;


 int FUNC_0 (struct config_file*) ;
 int FUNC_1 (struct config_entry_list*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct config_file*,struct config_entry_list*,char*,int *) ;
 int * FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (struct string_list*) ;
 struct string_list* FUNC_7 (char const*,char*) ;

config_file_t *FUNC_8(const char *VAR_0,
      const char *VAR_1)
{
   size_t VAR_2;
   struct string_list *VAR_3 = ((void*)0);
   struct config_file *VAR_4 = (struct config_file*)FUNC_2(sizeof(*VAR_4));
   if (!VAR_4)
      return ((void*)0);

   if (!VAR_0)
      return VAR_4;

   VAR_4->path = ((void*)0);
   VAR_4->entries = ((void*)0);
   VAR_4->tail = ((void*)0);
   VAR_4->last = ((void*)0);
   VAR_4->includes = ((void*)0);
   VAR_4->include_depth = 0;
   VAR_4->guaranteed_no_duplicates = 0 ;

   if (!FUNC_5(VAR_1))
      VAR_4->path = FUNC_4(VAR_1);

   VAR_3 = FUNC_7(VAR_0, "\n");
   if (!VAR_3)
      return VAR_4;

   for (VAR_2 = 0; VAR_2 < VAR_3->size; VAR_2++)
   {
      struct config_entry_list *VAR_5 = (struct config_entry_list*)
         FUNC_2(sizeof(*VAR_5));
      char *VAR_6 = VAR_3->elems[VAR_2].data;

      if (!VAR_5)
      {
         FUNC_6(VAR_3);
         FUNC_0(VAR_4);
         return ((void*)0);
      }

      VAR_5->readonly = 0;
      VAR_5->key = ((void*)0);
      VAR_5->value = ((void*)0);
      VAR_5->next = ((void*)0);

      if (VAR_6 && VAR_4)
      {
         if (*VAR_6 && FUNC_3(VAR_4, VAR_5, VAR_6, ((void*)0)))
         {
            if (VAR_4->entries)
               VAR_4->tail->next = VAR_5;
            else
               VAR_4->entries = VAR_5;

            VAR_4->tail = VAR_5;
         }
      }

      if (VAR_5 != VAR_4->tail)
         FUNC_1(VAR_5);
   }

   FUNC_6(VAR_3);

   return VAR_4;
}
