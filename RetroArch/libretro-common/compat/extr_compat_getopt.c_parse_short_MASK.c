
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,scalar_t__) ;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_1 (char const*,char) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, char * const *VAR_3)
{
   bool VAR_4, VAR_5, VAR_6;
   const char *VAR_7 = ((void*)0);
   char VAR_8 = VAR_3[0][1];

   if (VAR_8 == ':')
      return '?';

   VAR_7 = FUNC_1(VAR_2, VAR_8);
   if (!VAR_7)
      return '?';

   VAR_4 = VAR_3[0][2];
   VAR_5 = VAR_7[1] == ':';



   VAR_6 = VAR_4 && VAR_5;

   if (VAR_5)
   {
      if (VAR_6)
      {
         VAR_0 = VAR_3[0] + 2;
         VAR_1++;
      }
      else
      {
         VAR_0 = VAR_3[1];
         VAR_1 += 2;
      }

      return VAR_0 ? VAR_7[0] : '?';
   }

   if (VAR_6)
   {



      FUNC_0(&VAR_3[0][1], &VAR_3[0][2], FUNC_2(&VAR_3[0][2]) + 1);
      return VAR_7[0];
   }

   VAR_1++;
   return VAR_7[0];
}
