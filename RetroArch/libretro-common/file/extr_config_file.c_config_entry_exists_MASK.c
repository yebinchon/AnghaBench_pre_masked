
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct config_entry_list {struct config_entry_list* next; int key; } ;
struct TYPE_3__ {struct config_entry_list* entries; } ;
typedef TYPE_1__ config_file_t ;


 scalar_t__ FUNC_0 (char const*,int ) ;

bool FUNC_1(config_file_t *VAR_0, const char *VAR_1)
{
   struct config_entry_list *VAR_2 = VAR_0->entries;

   while (VAR_2)
   {
      if (FUNC_0(VAR_1, VAR_2->key))
         return 1;
      VAR_2 = VAR_2->next;
   }

   return 0;
}
