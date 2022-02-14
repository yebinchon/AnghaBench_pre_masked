
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct config_entry_list {int readonly; struct config_entry_list* next; void* value; void* key; } ;
struct TYPE_4__ {struct config_entry_list* last; struct config_entry_list* entries; scalar_t__ guaranteed_no_duplicates; } ;
typedef TYPE_1__ config_file_t ;


 struct config_entry_list* FUNC_0 (TYPE_1__*,char const*,struct config_entry_list**) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (char const*) ;

void FUNC_4(config_file_t *VAR_0, const char *VAR_1, const char *VAR_2)
{
   struct config_entry_list *VAR_3 = (VAR_0->guaranteed_no_duplicates && VAR_0->last) ? VAR_0->last : VAR_0->entries;
   struct config_entry_list *VAR_4 = VAR_0->guaranteed_no_duplicates?((void*)0):FUNC_0(VAR_0, VAR_1, &VAR_3);

   if (VAR_4 && !VAR_4->readonly)
   {
      if (VAR_4->value)
         FUNC_1(VAR_4->value);
      VAR_4->value = FUNC_3(VAR_2);
      return;
   }

   if (!VAR_2)
      return;

   VAR_4 = (struct config_entry_list*)FUNC_2(sizeof(*VAR_4));
   if (!VAR_4)
      return;

   VAR_4->readonly = 0;
   VAR_4->key = FUNC_3(VAR_1);
   VAR_4->value = FUNC_3(VAR_2);
   VAR_4->next = ((void*)0);

   if (VAR_3)
      VAR_3->next = VAR_4;
   else
      VAR_0->entries = VAR_4;

   VAR_0->last = VAR_4;
}
