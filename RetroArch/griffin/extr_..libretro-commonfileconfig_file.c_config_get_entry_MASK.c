
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct config_entry_list {int key; struct config_entry_list* next; } ;
struct TYPE_3__ {struct config_entry_list* entries; } ;
typedef TYPE_1__ config_file_t ;


 scalar_t__ FUNC_0 (char const*,int ) ;

__attribute__((used)) static struct config_entry_list *FUNC_1(
      const config_file_t *VAR_0,
      const char *VAR_1, struct config_entry_list **VAR_2)
{
   struct config_entry_list *VAR_3 = ((void*)0);
   struct config_entry_list *VAR_4 = VAR_2 ? *VAR_2 : ((void*)0);

   for (VAR_3 = VAR_0->entries; VAR_3; VAR_3 = VAR_3->next)
   {
      if (FUNC_0(VAR_1, VAR_3->key))
         return VAR_3;

      VAR_4 = VAR_3;
   }

   if (VAR_2)
      *VAR_2 = VAR_4;

   return ((void*)0);
}
