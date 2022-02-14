
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct retro_variable {char* key; char* value; } ;
struct core_option {int visible; size_t index; TYPE_3__* vals; void* key; scalar_t__ default_index; int val_labels; void* desc; } ;
struct TYPE_7__ {int * conf; int * opts; } ;
typedef TYPE_2__ core_option_manager_t ;
typedef int config_file_t ;
struct TYPE_8__ {size_t size; TYPE_1__* elems; } ;
struct TYPE_6__ {int data; } ;


 scalar_t__ FUNC_0 (int *,void*,char**) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (char const*,char*) ;
 char* FUNC_7 (char*,char*) ;

__attribute__((used)) static bool FUNC_8(
      core_option_manager_t *VAR_0, size_t VAR_1,
      const struct retro_variable *VAR_2,
      config_file_t *VAR_3)
{
   const char *VAR_4 = ((void*)0);
   char *VAR_5 = ((void*)0);
   char *VAR_6 = ((void*)0);
   char *VAR_7 = ((void*)0);
   struct core_option *VAR_8 = (struct core_option*)&VAR_0->opts[VAR_1];


   VAR_8->visible = 1;

   if (!FUNC_3(VAR_2->key))
      VAR_8->key = FUNC_2(VAR_2->key);
   if (!FUNC_3(VAR_2->value))
      VAR_5 = FUNC_2(VAR_2->value);

   if (!FUNC_3(VAR_5))
      VAR_6 = FUNC_7(VAR_5, "; ");

   if (!VAR_6)
      goto error;

   *VAR_6 = '\0';

   if (!FUNC_3(VAR_5))
      VAR_8->desc = FUNC_2(VAR_5);

   VAR_4 = VAR_6 + 2;
   VAR_8->vals = FUNC_6(VAR_4, "|");

   if (!VAR_8->vals)
      goto error;



   VAR_8->val_labels = FUNC_5(VAR_8->vals);

   if (!VAR_8->val_labels)
      goto error;



   VAR_8->default_index = 0;
   VAR_8->index = 0;


   if (FUNC_0(VAR_3 ? VAR_3 : VAR_0->conf, VAR_8->key, &VAR_7))
   {
      size_t VAR_9;

      for (VAR_9 = 0; VAR_9 < VAR_8->vals->size; VAR_9++)
      {
         if (FUNC_4(VAR_8->vals->elems[VAR_9].data, VAR_7))
         {
            VAR_8->index = VAR_9;
            break;
         }
      }

      FUNC_1(VAR_7);
   }

   FUNC_1(VAR_5);

   return 1;

error:
   FUNC_1(VAR_5);
   return 0;
}
