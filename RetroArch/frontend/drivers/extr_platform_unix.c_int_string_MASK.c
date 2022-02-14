
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char**,int ) ;

__attribute__((used)) static bool FUNC_1(char *VAR_0, int *VAR_1)
{
   char *VAR_2 = ((void*)0);
   if (!VAR_0)
      return 0;

   *VAR_1 = (int) FUNC_0(VAR_0, &VAR_2, 0);
   return ((*VAR_0 != '\0') && (*VAR_2 == '\0'));
}
