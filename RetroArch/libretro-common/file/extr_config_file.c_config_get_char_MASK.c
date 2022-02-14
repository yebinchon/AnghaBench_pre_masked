
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_entry_list {char* value; } ;
typedef int config_file_t ;


 struct config_entry_list* FUNC_0 (int *,char const*,int *) ;

bool FUNC_1(config_file_t *VAR_0, const char *VAR_1, char *VAR_2)
{
   const struct config_entry_list *VAR_3 = FUNC_0(VAR_0, VAR_1, ((void*)0));

   if (VAR_3)
   {
      if (VAR_3->value[0] && VAR_3->value[1])
         return 0;

      *VAR_2 = *VAR_3->value;
      return 1;
   }

   return 0;
}
