
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char** VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (char*,int *,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_3(char *VAR_3, int *VAR_4, int *VAR_5, char *VAR_6)
{
 int VAR_7;
 char *VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_2[VAR_7])
   continue;
  if (!FUNC_2(VAR_1[VAR_7], VAR_3, FUNC_1(VAR_3)))
   break;
  if (!FUNC_2(VAR_1[VAR_7], "next", FUNC_1("next")))
   return 0;
 }
 if (VAR_7 == VAR_0)
  return 0;
 VAR_2[VAR_7] = 1;
 VAR_8 = VAR_1[VAR_7] + FUNC_1(VAR_3);
 *VAR_5 = -1;
 if (*VAR_8 != ':')
  return ++VAR_7;
 VAR_8++;
 if ((*VAR_8 >= '0') && (*VAR_8 <= '9')) {
  *VAR_5 = FUNC_0(VAR_8, ((void*)0), 0);
 }
 return ++VAR_7;
}
