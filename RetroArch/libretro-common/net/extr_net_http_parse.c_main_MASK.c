
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;
typedef int link ;


 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (char const*,char*,char*,int,int) ;

int FUNC_2(int VAR_0, char *VAR_1[])
{
   char VAR_2[1024];
   char VAR_3[1024];
   const char *VAR_4 = "<a href=\"http://www.test.com/somefile.zip\">Test</a>\n";

   VAR_2[0] = VAR_3[0] = '\0';

   FUNC_1(VAR_4, VAR_2, VAR_3, sizeof(VAR_2), sizeof(VAR_3));

   FUNC_0("link: %s\nname: %s\n", VAR_2, VAR_3);

   return 1;
}
