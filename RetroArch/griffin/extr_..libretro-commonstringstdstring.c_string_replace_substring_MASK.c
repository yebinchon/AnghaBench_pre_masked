
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char*,char const*) ;
 char* FUNC_3 (char const*) ;
 size_t FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,char const*) ;

char *FUNC_6(const char *VAR_0,
      const char *VAR_1, const char *VAR_2)
{
   size_t VAR_3, VAR_4, VAR_5, VAR_6;
   const char *VAR_7 = ((void*)0);
   const char *VAR_8 = ((void*)0);
   char *VAR_9 = ((void*)0);
   char *VAR_10 = ((void*)0);



   if (!VAR_1 || !VAR_2)
      return FUNC_3(VAR_0);

   VAR_4 = FUNC_4(VAR_1);
   VAR_5 = FUNC_4(VAR_2);
   VAR_3 = 0;
   VAR_7 = VAR_0;

   while ((VAR_7 = FUNC_5(VAR_7, VAR_1)))
   {
      VAR_7 += VAR_4;
      VAR_3++;
   }

   VAR_6 = FUNC_4(VAR_0) - VAR_4*VAR_3 + VAR_5*VAR_3;
   VAR_9 = (char *)FUNC_0(VAR_6+1);

   if (!VAR_9)
      return ((void*)0);

   VAR_10 = VAR_9;
   VAR_7 = VAR_0;
   VAR_8 = VAR_0;

   while ((VAR_7 = FUNC_5(VAR_7, VAR_1)))
   {
      FUNC_1(VAR_10, VAR_8, VAR_7-VAR_8);
      VAR_10 += VAR_7-VAR_8;
      FUNC_1(VAR_10, VAR_2, VAR_5);
      VAR_10 += VAR_5;
      VAR_7 += VAR_4;
      VAR_8 = VAR_7;
   }
   FUNC_2(VAR_10, VAR_8);

   return VAR_9;
}
