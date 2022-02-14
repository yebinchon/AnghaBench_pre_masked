
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct config_entry_list {int * value; int * key; } ;
struct TYPE_4__ {struct config_entry_list* entries; } ;
typedef TYPE_1__ config_file_t ;


 struct config_entry_list* FUNC_0 (TYPE_1__*,char const*,struct config_entry_list**) ;
 int FUNC_1 (int *) ;

void FUNC_2(config_file_t *VAR_0, const char *VAR_1)
{
   struct config_entry_list *VAR_2 = VAR_0->entries;
   struct config_entry_list *VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_2);

   if (!VAR_3)
      return;

   VAR_3->key = ((void*)0);
   VAR_3->value = ((void*)0);
   FUNC_1(VAR_3->key);
   FUNC_1(VAR_3->value);
}
