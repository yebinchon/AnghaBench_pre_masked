
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union string_list_elem_attr {int i; } ;
struct retro_core_option_value {char* value; char* label; } ;
struct retro_core_option_definition {char* key; char* desc; char* info; char* default_value; struct retro_core_option_value* values; } ;
struct core_option {int visible; size_t default_index; size_t index; TYPE_3__* vals; void* key; TYPE_3__* val_labels; void* info; void* desc; } ;
struct TYPE_6__ {int * conf; int * opts; } ;
typedef TYPE_2__ core_option_manager_t ;
typedef int config_file_t ;
struct TYPE_7__ {size_t size; TYPE_1__* elems; } ;
struct TYPE_5__ {char* data; } ;


 scalar_t__ FUNC_0 (int *,void*,char**) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (TYPE_3__*,char*,union string_list_elem_attr) ;
 void* FUNC_6 () ;

__attribute__((used)) static bool FUNC_7(
      core_option_manager_t *VAR_0, size_t VAR_1,
      const struct retro_core_option_definition *VAR_2,
      config_file_t *VAR_3)
{
   size_t VAR_4;
   union string_list_elem_attr VAR_5;
   size_t VAR_6 = 0;
   char *VAR_7 = ((void*)0);
   struct core_option *VAR_8 = (struct core_option*)&VAR_0->opts[VAR_1];
   const struct retro_core_option_value *VAR_9 = VAR_2->values;


   VAR_8->visible = 1;

   if (!FUNC_3(VAR_2->key))
      VAR_8->key = FUNC_2(VAR_2->key);

   if (!FUNC_3(VAR_2->desc))
      VAR_8->desc = FUNC_2(VAR_2->desc);

   if (!FUNC_3(VAR_2->info))
      VAR_8->info = FUNC_2(VAR_2->info);


   while (1)
   {
      if (!FUNC_3(VAR_9[VAR_6].value))
         VAR_6++;
      else
         break;
   }

   if (VAR_6 < 1)
      return 0;


   VAR_5.i = 0;
   VAR_8->vals = FUNC_6();
   VAR_8->val_labels = FUNC_6();

   if (!VAR_8->vals || !VAR_8->val_labels)
      return 0;


   VAR_8->default_index = 0;
   VAR_8->index = 0;


   for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
   {

      FUNC_5(VAR_8->vals, VAR_9[VAR_4].value, VAR_5);


      if (!FUNC_3(VAR_9[VAR_4].label))
         FUNC_5(VAR_8->val_labels, VAR_9[VAR_4].label, VAR_5);
      else
         FUNC_5(VAR_8->val_labels, VAR_9[VAR_4].value, VAR_5);


      if (!FUNC_3(VAR_2->default_value))
      {
         if (FUNC_4(VAR_2->default_value, VAR_9[VAR_4].value))
         {
            VAR_8->default_index = VAR_4;
            VAR_8->index = VAR_4;
         }
      }
   }


   if (FUNC_0(VAR_3 ? VAR_3 : VAR_0->conf, VAR_8->key, &VAR_7))
   {
      for (VAR_4 = 0; VAR_4 < VAR_8->vals->size; VAR_4++)
      {
         if (FUNC_4(VAR_8->vals->elems[VAR_4].data, VAR_7))
         {
            VAR_8->index = VAR_4;
            break;
         }
      }

      FUNC_1(VAR_7);
   }

   return 1;
}
