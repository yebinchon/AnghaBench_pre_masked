
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_entry_list {int value; } ;
typedef int config_file_t ;


 struct config_entry_list* FUNC_0 (int *,char const*,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int *,int) ;

bool FUNC_2(config_file_t *VAR_1, const char *VAR_2, unsigned *VAR_3)
{
   const struct config_entry_list *VAR_4 = FUNC_0(VAR_1, VAR_2, ((void*)0));
   VAR_0 = 0;

   if (VAR_4)
   {
      unsigned VAR_5 = (unsigned)FUNC_1(VAR_4->value, ((void*)0), 16);

      if (VAR_0 == 0)
      {
         *VAR_3 = VAR_5;
         return 1;
      }
   }

   return 0;
}
