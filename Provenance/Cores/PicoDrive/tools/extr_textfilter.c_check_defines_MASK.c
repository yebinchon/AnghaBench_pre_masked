
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(const char **VAR_0, int VAR_1, char *VAR_2)
{
 int VAR_3, VAR_4;

 while (FUNC_0(*VAR_2)) VAR_2++;
 VAR_4 = FUNC_2(VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  if (VAR_2[VAR_3] == ' ' || VAR_2[VAR_3] == '\r' || VAR_2[VAR_3] == '\n') break;
 VAR_2[VAR_3] = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
 {
  if (FUNC_1(VAR_0[VAR_3], VAR_2) == 0)
   return 1;
 }

 return 0;
}
