
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_include_list {struct config_include_list* path; struct config_include_list* next; scalar_t__ includes; struct config_include_list* key; struct config_include_list* value; struct config_include_list* entries; } ;
struct config_entry_list {struct config_entry_list* path; struct config_entry_list* next; scalar_t__ includes; struct config_entry_list* key; struct config_entry_list* value; struct config_entry_list* entries; } ;
typedef struct config_include_list config_file_t ;


 int FUNC_0 (struct config_include_list*) ;

void FUNC_1(config_file_t *VAR_0)
{
   struct config_include_list *VAR_1 = ((void*)0);
   struct config_entry_list *VAR_2 = ((void*)0);
   if (!VAR_0)
      return;

   VAR_2 = VAR_0->entries;
   while (VAR_2)
   {
      struct config_entry_list *VAR_3 = ((void*)0);
      if (VAR_2->key)
         FUNC_0(VAR_2->key);
      if (VAR_2->value)
         FUNC_0(VAR_2->value);

      VAR_2->value = ((void*)0);
      VAR_2->key = ((void*)0);

      VAR_3 = VAR_2;
      VAR_2 = VAR_2->next;

      if (VAR_3)
         FUNC_0(VAR_3);
   }

   VAR_1 = (struct config_include_list*)VAR_0->includes;
   while (VAR_1)
   {
      struct config_include_list *VAR_4 = ((void*)0);
      if (VAR_1->path)
         FUNC_0(VAR_1->path);
      VAR_4 = (struct config_include_list*)VAR_1;
      VAR_1 = VAR_1->next;
      if (VAR_4)
         FUNC_0(VAR_4);
   }

   if (VAR_0->path)
      FUNC_0(VAR_0->path);
   FUNC_0(VAR_0);
}
