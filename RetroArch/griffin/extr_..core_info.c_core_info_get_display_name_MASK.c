
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int config_file_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int *,char*,char**) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,size_t) ;

bool FUNC_5(const char *VAR_0, char *VAR_1, size_t VAR_2)
{
   char *VAR_3 = ((void*)0);
   config_file_t *VAR_4 = FUNC_1(VAR_0);

   if (!VAR_4)
      return 0;

   if (FUNC_2(VAR_4, "display_name", &VAR_3))
   {
      FUNC_4(VAR_1, VAR_3, VAR_2);
      FUNC_3(VAR_3);
   }

   FUNC_0(VAR_4);
   return 1;
}
