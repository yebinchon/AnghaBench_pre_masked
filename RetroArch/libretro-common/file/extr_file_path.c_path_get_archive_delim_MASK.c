
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char*) ;

const char *FUNC_2(const char *VAR_0)
{
   const char *VAR_1 = FUNC_0(VAR_0);
   const char *VAR_2 = ((void*)0);

   if (!VAR_1)
      return ((void*)0);


   VAR_2 = FUNC_1(VAR_1, ".zip#");

   if (!VAR_2)
      VAR_2 = FUNC_1(VAR_1, ".apk#");

   if (VAR_2)
      return VAR_2 + 4;


   VAR_2 = FUNC_1(VAR_1, ".7z#");

   if (VAR_2)
      return VAR_2 + 3;

   return ((void*)0);
}
