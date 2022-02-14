
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_entry_list {int value; } ;
typedef int config_file_t ;


 struct config_entry_list* FUNC_0 (int *,char const*,int *) ;
 size_t FUNC_1 (char*,int ,size_t) ;

bool FUNC_2(config_file_t *VAR_0, const char *VAR_1,
      char *VAR_2, size_t VAR_3)
{
   const struct config_entry_list *VAR_4 = FUNC_0(VAR_0, VAR_1, ((void*)0));

   if (VAR_4)
      return FUNC_1(VAR_2, VAR_4->value, VAR_3) < VAR_3;
   return 0;
}
