
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char*,char*,size_t) ;
 size_t FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char const*) ;

char* FUNC_5(char **VAR_0, const char *VAR_1)
{

   char *VAR_2 = ((void*)0);
   char *VAR_3 = ((void*)0);
   char *VAR_4 = ((void*)0);
   size_t VAR_5 = 0;


   if (!VAR_0 || FUNC_1(VAR_1))
      return ((void*)0);

   VAR_2 = *VAR_0;



   if (!VAR_2)
      return ((void*)0);


   VAR_3 = FUNC_4(VAR_2, VAR_1);

   if (VAR_3)
      VAR_5 = VAR_3 - VAR_2;
   else
      VAR_5 = FUNC_3(VAR_2);


   VAR_4 = (char *)FUNC_0((VAR_5 + 1) * sizeof(char));

   if (!VAR_4)
      return ((void*)0);


   FUNC_2(VAR_4, VAR_2, (VAR_5 + 1) * sizeof(char));
   VAR_4[VAR_5] = '\0';


   *VAR_0 = VAR_3 ? VAR_3 + FUNC_3(VAR_1) : ((void*)0);

   return VAR_4;
}
