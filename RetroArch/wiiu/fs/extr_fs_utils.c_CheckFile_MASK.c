
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int dirnoslash ;


 int FUNC_0 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_1 (char*,struct stat*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char) ;

int FUNC_5(const char * VAR_0)
{
   struct stat VAR_1;
   char *VAR_2 = ((void*)0);

   if (!VAR_0)
      return 0;

   char VAR_3[FUNC_3(VAR_0)+2];

   FUNC_0(VAR_3, sizeof(VAR_3), "%s", VAR_0);

   while(VAR_3[FUNC_3(VAR_3)-1] == '/')
      VAR_3[FUNC_3(VAR_3)-1] = '\0';

   VAR_2 = FUNC_4(VAR_3, '/');
   if (!VAR_2)
      FUNC_2(VAR_3, "/");

   if (FUNC_1(VAR_3, &VAR_1) == 0)
      return 1;

   return 0;
}
