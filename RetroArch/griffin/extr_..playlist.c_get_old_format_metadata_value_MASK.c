
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*,char*,size_t) ;

__attribute__((used)) static void FUNC_2(
      char *VAR_0, char *VAR_1, size_t VAR_2)
{
   char *VAR_3 = ((void*)0);
   char *VAR_4 = ((void*)0);

   VAR_3 = FUNC_0(VAR_0, '\"');

   if (!VAR_3)
      return;

   VAR_3++;
   VAR_4 = FUNC_0(VAR_3, '\"');

   if (!VAR_4)
      return;

   *VAR_4 = '\0';
   FUNC_1(VAR_1, VAR_3, VAR_2);
}
