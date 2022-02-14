
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct config_entry_list {int readonly; struct config_entry_list* next; } ;
struct TYPE_4__ {struct config_entry_list* tail; struct config_entry_list* entries; } ;
typedef TYPE_1__ config_file_t ;



__attribute__((used)) static void FUNC_0(config_file_t *VAR_0, config_file_t *VAR_1)
{
   struct config_entry_list *VAR_2 = VAR_1->entries;
   if (VAR_0->entries)
   {
      struct config_entry_list *VAR_3 = VAR_0->entries;
      while (VAR_3->next)
         VAR_3 = VAR_3->next;


      while (VAR_2)
      {
         VAR_2->readonly = 1;
         VAR_2 = VAR_2->next;
      }
      VAR_3->next = VAR_1->entries;
   }
   else
   {

      while (VAR_2)
      {
         VAR_2->readonly = 1;
         VAR_2 = VAR_2->next;
      }
      VAR_0->entries = VAR_1->entries;
   }

   VAR_1->entries = ((void*)0);


   if (VAR_0->entries)
   {
      struct config_entry_list *VAR_4 =
         (struct config_entry_list*)VAR_0->entries;

      while (VAR_4->next)
         VAR_4 = VAR_4->next;
      VAR_0->tail = VAR_4;
   }
   else
      VAR_0->tail = ((void*)0);
}
