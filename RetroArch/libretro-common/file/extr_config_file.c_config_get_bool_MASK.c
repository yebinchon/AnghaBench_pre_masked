
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_entry_list {int value; } ;
typedef int config_file_t ;


 struct config_entry_list* FUNC_0 (int *,char const*,int *) ;
 scalar_t__ FUNC_1 (int ,char*) ;

bool FUNC_2(config_file_t *VAR_0, const char *VAR_1, bool *VAR_2)
{
   const struct config_entry_list *VAR_3 = FUNC_0(VAR_0, VAR_1, ((void*)0));

   if (VAR_3)
   {
      if (FUNC_1(VAR_3->value, "true"))
         *VAR_2 = 1;
      else if (FUNC_1(VAR_3->value, "1"))
         *VAR_2 = 1;
      else if (FUNC_1(VAR_3->value, "false"))
         *VAR_2 = 0;
      else if (FUNC_1(VAR_3->value, "0"))
         *VAR_2 = 0;
      else
         return 0;
   }

   return VAR_3 != ((void*)0);
}
