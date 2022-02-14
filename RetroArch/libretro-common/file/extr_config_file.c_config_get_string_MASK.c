
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_entry_list {int value; } ;
typedef int config_file_t ;


 struct config_entry_list* FUNC_0 (int *,char const*,int *) ;
 char* FUNC_1 (int ) ;

bool FUNC_2(config_file_t *VAR_0, const char *VAR_1, char **VAR_2)
{
   const struct config_entry_list *VAR_3 = FUNC_0(VAR_0, VAR_1, ((void*)0));

   if (!VAR_3)
      return 0;

   *VAR_2 = FUNC_1(VAR_3->value);
   return 1;
}
