
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct config_file_entry {int next; int value; int key; } ;
struct config_entry_list {int next; int value; int key; } ;
struct TYPE_3__ {struct config_entry_list* entries; } ;
typedef TYPE_1__ config_file_t ;



bool FUNC_0(config_file_t *VAR_0,
      struct config_file_entry *VAR_1)
{
   const struct config_entry_list *VAR_2 = VAR_0->entries;

   if (!VAR_2)
      return 0;

   VAR_1->key = VAR_2->key;
   VAR_1->value = VAR_2->value;
   VAR_1->next = VAR_2->next;
   return 1;
}
