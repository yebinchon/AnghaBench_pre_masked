
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;
 size_t FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (char*,char) ;

int FUNC_6(const char * VAR_0)
{
   int VAR_1;
   int VAR_2 = 0;

   if (!VAR_0)
      return 0;

   char VAR_3[FUNC_4(VAR_0)+1];
   FUNC_3(VAR_3, VAR_0);

   VAR_1 = FUNC_4(VAR_3)-1;
   while(VAR_3[VAR_1] == '/')
   {
      VAR_3[VAR_1] = '\0';
      VAR_1--;
   }

   if (FUNC_0(VAR_3))
      return 1;

   {
      char VAR_4[FUNC_4(VAR_3)+2];
      size_t VAR_5 = FUNC_3(VAR_4, VAR_3);
      char * VAR_6 = FUNC_5(VAR_4, '/');

      if (!VAR_6)
      {
         struct stat VAR_7;

         VAR_4[VAR_5] = '/';
         VAR_4[VAR_5+1] = '\0';

         if (FUNC_2(VAR_4, &VAR_7) == 0)
            return 1;

         return 0;
      }

      VAR_6++;
      VAR_6[0] = '\0';

      VAR_2 = FUNC_6(VAR_4);
   }

   if (!VAR_2)
      return 0;

   if (FUNC_1(VAR_3, 0777) == -1)
      return 0;

   return 1;
}
