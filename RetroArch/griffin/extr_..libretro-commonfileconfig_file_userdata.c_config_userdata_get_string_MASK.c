
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_file_userdata {int conf; int * prefix; } ;
typedef int key ;


 scalar_t__ FUNC_0 (int ,char*,char**) ;
 int FUNC_1 (char*,int ,char const*,char,int) ;
 char* FUNC_2 (char const*) ;

int FUNC_3(void *VAR_0, const char *VAR_1,
      char **VAR_2, const char *VAR_3)
{
   char VAR_4[2][256];
   struct config_file_userdata *VAR_5 = (struct config_file_userdata*)VAR_0;
   char *VAR_6 = ((void*)0);
   FUNC_1(VAR_4[0], VAR_5->prefix[0], VAR_1, '_', sizeof(VAR_4[0]));
   FUNC_1(VAR_4[1], VAR_5->prefix[1], VAR_1, '_', sizeof(VAR_4[1]));

   if ( FUNC_0(VAR_5->conf, VAR_4[0], &VAR_6) ||
         FUNC_0(VAR_5->conf, VAR_4[1], &VAR_6))
   {
      *VAR_2 = VAR_6;
      return 1;
   }

   *VAR_2 = FUNC_2(VAR_3);
   return 0;
}
