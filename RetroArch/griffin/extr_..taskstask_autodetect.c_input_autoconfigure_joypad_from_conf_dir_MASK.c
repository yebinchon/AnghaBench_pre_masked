
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct string_list {size_t size; TYPE_1__* elems; } ;
typedef int retro_task_t ;
typedef int path ;
typedef int config_file_t ;
typedef int best_path ;
struct TYPE_7__ {char* autoconfig_directory; } ;
typedef TYPE_2__ autoconfig_params_t ;
struct TYPE_6__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 struct string_list* FUNC_3 (char*,int ,char*) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (int *,TYPE_2__*,int *) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct string_list*) ;
 int FUNC_9 (char*,int ,int) ;

__attribute__((used)) static bool FUNC_10(
      autoconfig_params_t *VAR_3, retro_task_t *VAR_4)
{
   size_t VAR_5;
   char VAR_6[VAR_2];
   char VAR_7[VAR_2];
   int VAR_8 = 0;
   int VAR_9 = -1;
   int VAR_10 = 0;
   config_file_t *VAR_11 = ((void*)0);
   struct string_list *VAR_12 = ((void*)0);

   VAR_7[0] = '\0';
   VAR_6[0] = '\0';

   FUNC_4(VAR_6, sizeof(VAR_6),
         VAR_0);

   VAR_12 = FUNC_3(VAR_6, VAR_1, "cfg");

   if (!VAR_12 || !VAR_12->size)
   {
      if (VAR_12)
      {
         FUNC_8(VAR_12);
         VAR_12 = ((void*)0);
      }
      if (!FUNC_7(VAR_3->autoconfig_directory))
         VAR_12 = FUNC_3(VAR_3->autoconfig_directory,
               VAR_1, "cfg");
   }

   if (!VAR_12)
   {
      FUNC_0("[Autoconf]: No profiles found.\n");
      return 0;
   }

   FUNC_0("[Autoconf]: %d profiles found.\n", (int)VAR_12->size);

   for (VAR_5 = 0; VAR_5 < VAR_12->size; VAR_5++)
   {
      int VAR_13;
      config_file_t *VAR_14 = FUNC_2(VAR_12->elems[VAR_5].data);

      if (!VAR_14)
         continue;

      VAR_13 = FUNC_6(VAR_14, VAR_3);

      if (VAR_13 >= VAR_10)
      {
         VAR_9 = (int)VAR_5;
         VAR_10 = VAR_13;
         if (VAR_11)
            FUNC_1(VAR_11);
         FUNC_9(VAR_7, VAR_12->elems[VAR_5].data, sizeof(VAR_7));
         VAR_11 = ((void*)0);
         VAR_11 = VAR_14;
      }
      else
         FUNC_1(VAR_14);
   }

   if (VAR_9 >= 0 && VAR_10 > 0 && VAR_11)
   {
      FUNC_0("[Autoconf]: selected configuration: %s\n", VAR_7);
      FUNC_5(VAR_11, VAR_3, VAR_4);
      VAR_8 = 1;
   }

   if (VAR_11)
      FUNC_1(VAR_11);

   FUNC_8(VAR_12);

   if (VAR_8 == 0)
      return 0;
   return 1;
}
