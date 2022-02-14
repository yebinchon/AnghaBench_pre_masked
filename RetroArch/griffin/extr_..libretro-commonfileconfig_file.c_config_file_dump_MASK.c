
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct config_include_list {char* path; struct config_include_list* next; } ;
struct config_entry_list {char* key; char* value; struct config_entry_list* next; int readonly; } ;
struct TYPE_3__ {struct config_entry_list* entries; struct config_include_list* includes; } ;
typedef TYPE_1__ config_file_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*,...) ;
 struct config_entry_list* FUNC_1 (struct config_entry_list*,int ) ;

void FUNC_2(config_file_t *VAR_1, FILE *VAR_2, bool VAR_3)
{
   struct config_entry_list *VAR_4 = ((void*)0);
   struct config_include_list *VAR_5 = VAR_1->includes;

   while (VAR_5)
   {
      FUNC_0(VAR_2, "#include \"%s\"\n", VAR_5->path);
      VAR_5 = VAR_5->next;
   }

   if (VAR_3)
      VAR_4 = FUNC_1((struct config_entry_list*)
            VAR_1->entries, VAR_0);
   else
      VAR_4 = (struct config_entry_list*)VAR_1->entries;

   VAR_1->entries = VAR_4;

   while (VAR_4)
   {
      if (!VAR_4->readonly && VAR_4->key)
         FUNC_0(VAR_2, "%s = \"%s\"\n", VAR_4->key, VAR_4->value);
      VAR_4 = VAR_4->next;
   }
}
