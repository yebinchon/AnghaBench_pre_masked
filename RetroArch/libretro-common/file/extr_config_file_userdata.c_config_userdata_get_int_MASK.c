
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_file_userdata {int conf; int * prefix; } ;
typedef int key ;


 int FUNC_0 (int ,char*,int*) ;
 int FUNC_1 (char*,int ,char const*,char,int) ;

int FUNC_2(void *VAR_0, const char *VAR_1,
      int *VAR_2, int VAR_3)
{
   bool VAR_4;
   char VAR_5[2][256];
   struct config_file_userdata *VAR_6 = (struct config_file_userdata*)VAR_0;

   FUNC_1(VAR_5[0], VAR_6->prefix[0], VAR_1, '_', sizeof(VAR_5[0]));
   FUNC_1(VAR_5[1], VAR_6->prefix[1], VAR_1, '_', sizeof(VAR_5[1]));

   VAR_4 = FUNC_0 (VAR_6->conf, VAR_5[0], VAR_2);
   VAR_4 = VAR_4 || FUNC_0(VAR_6->conf, VAR_5[1], VAR_2);

   if (!VAR_4)
      *VAR_2 = VAR_3;
   return VAR_4;
}
