
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*) ;
 char* FUNC_5 (char const*) ;
 size_t FUNC_6 (char*) ;

bool FUNC_7(const char *VAR_0)
{
   bool VAR_1 = 0;
   bool VAR_2 = 0;
   char *VAR_3 = ((void*)0);

   if (!(VAR_0 && *VAR_0))
      return 0;



   VAR_3 = FUNC_5(VAR_0);

   if (!VAR_3)
    return 0;

   FUNC_3(VAR_3);

   if (!*VAR_3 || !FUNC_4(VAR_3, VAR_0))
   {
      FUNC_0(VAR_3);
      return 0;
   }
   if (FUNC_1(VAR_3))
      VAR_2 = 1;
   else
   {
      VAR_1 = FUNC_7(VAR_3);

      if (VAR_1)
         VAR_2 = 1;
   }

   FUNC_0(VAR_3);

   if (VAR_2)
   {
      int VAR_4 = FUNC_2(VAR_0);


      if (VAR_4 == -2 && FUNC_1(VAR_0))
         return 1;

      return (VAR_4 == 0);
   }

   return VAR_1;
}
