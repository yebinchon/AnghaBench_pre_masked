
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static bool FUNC_4(char *VAR_0,
      const char **VAR_1, const size_t VAR_2)
{
   unsigned VAR_3;
   char VAR_4[32];
   char VAR_5[32];

   FUNC_2(VAR_4, VAR_0, 32);
   FUNC_1(VAR_4);

   for (VAR_3 = 0; VAR_3 < (unsigned)VAR_2; VAR_3++)
   {
      FUNC_2(VAR_5, VAR_1[VAR_3], 32);
      FUNC_1(VAR_5);

      if (FUNC_0(VAR_4,
               VAR_5, FUNC_3(VAR_5)))
         return 1;
   }

   return 0;
}
