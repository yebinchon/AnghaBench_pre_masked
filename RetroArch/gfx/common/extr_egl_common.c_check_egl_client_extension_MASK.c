
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,int ) ;
 size_t FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,size_t) ;
 int FUNC_4 (char const*,char*) ;

bool FUNC_5(const char *VAR_2)
{
   size_t VAR_3;
   const char *VAR_4 = FUNC_0(VAR_1, VAR_0);


   if (!VAR_4)
      return 0;

   VAR_3 = FUNC_2(VAR_2);
   while (*VAR_4 != '\0')
   {



      size_t VAR_5 = FUNC_1(VAR_4, " ");
      if (VAR_5 == VAR_3 && FUNC_3(VAR_4, VAR_2, VAR_3) == 0)
         return 1;
      VAR_4 += VAR_5;
      VAR_4 += FUNC_4(VAR_4, " ");
   }

   return 0;
}
