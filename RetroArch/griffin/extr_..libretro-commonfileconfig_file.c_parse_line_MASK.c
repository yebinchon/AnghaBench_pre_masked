
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct config_entry_list {char* key; void* value; } ;
struct TYPE_4__ {scalar_t__ include_depth; } ;
typedef TYPE_1__ config_file_t ;
typedef int config_file_cb_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,char*,int *) ;
 void* FUNC_2 (char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (char*,size_t) ;
 int VAR_1 ;
 char* FUNC_9 (char*) ;
 char* FUNC_10 (char*,char*) ;

__attribute__((used)) static bool FUNC_11(config_file_t *VAR_2,
      struct config_entry_list *VAR_3, char *VAR_4, config_file_cb_t *VAR_5)
{
   char *VAR_6 = ((void*)0);
   char *VAR_7 = ((void*)0);
   size_t VAR_8 = 8;
   size_t VAR_9 = 0;
   char *VAR_10 = FUNC_9(VAR_4);


   if (VAR_10 == VAR_4)
   {
      VAR_10++;
      if (FUNC_10(VAR_10, "include ") == VAR_10)
      {
         char *VAR_11 = VAR_10 + FUNC_0("include ");
         char *VAR_12 = FUNC_2(VAR_11, 0);

         if (!VAR_12)
            return 0;

         if (VAR_2->include_depth >= VAR_0)
            FUNC_3(VAR_1, "!!! #include depth exceeded for config. Might be a cycle.\n");
         else
            FUNC_1(VAR_2, VAR_12, VAR_5);
         FUNC_4(VAR_12);
      }
   }


   while (FUNC_6((int)*VAR_4))
      VAR_4++;

   VAR_6 = (char*)FUNC_7(9);

   while (FUNC_5((int)*VAR_4))
   {
      if (VAR_9 == VAR_8)
      {
         VAR_8 *= 2;
         VAR_7 = (char*)FUNC_8(VAR_6, VAR_8 + 1);

         if (!VAR_7)
         {
            FUNC_4(VAR_6);
            return 0;
         }

         VAR_6 = VAR_7;
      }

      VAR_6[VAR_9++] = *VAR_4++;
   }
   VAR_6[VAR_9] = '\0';
   VAR_3->key = VAR_6;

   VAR_3->value = FUNC_2(VAR_4, 1);

   if (!VAR_3->value)
   {
      VAR_3->key = ((void*)0);
      FUNC_4(VAR_6);
      return 0;
   }

   return 1;
}
