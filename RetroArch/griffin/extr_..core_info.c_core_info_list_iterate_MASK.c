
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int config_file_t ;


 int VAR_0 ;
 int * FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char*,char const*,char*,size_t) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,size_t) ;
 char* FUNC_7 (char*,char) ;

__attribute__((used)) static config_file_t *FUNC_8(
      const char *VAR_1,
      const char *VAR_2)
{
   size_t VAR_3 = VAR_0 * sizeof(char);
   char *VAR_4 = ((void*)0);
   char *VAR_5 = ((void*)0);
   config_file_t *VAR_6 = ((void*)0);

   if (!VAR_1)
      return ((void*)0);

   VAR_4 = (char*)FUNC_4(VAR_3);

   VAR_4[0] = '\0';

   FUNC_1(VAR_4,
         VAR_1,
         VAR_3);
   FUNC_6(VAR_4, ".info", VAR_3);

   VAR_5 = (char*)FUNC_4(VAR_3);
   FUNC_2(VAR_5,
         VAR_2,
         VAR_4, VAR_3);
   FUNC_3(VAR_4);
   VAR_4 = ((void*)0);

   if (FUNC_5(VAR_5))
      VAR_6 = FUNC_0(VAR_5);
   FUNC_3(VAR_5);

   return VAR_6;
}
