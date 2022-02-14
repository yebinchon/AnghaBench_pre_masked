
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_file_entry {struct config_entry_list* next; int value; int key; } ;
struct config_entry_list {struct config_entry_list* next; int value; int key; } ;



bool FUNC_0(struct config_file_entry *VAR_0)
{
   const struct config_entry_list *VAR_1 = VAR_0->next;

   if (!VAR_1)
      return 0;

   VAR_0->key = VAR_1->key;
   VAR_0->value = VAR_1->value;
   VAR_0->next = VAR_1->next;
   return 1;
}
