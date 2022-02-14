
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (char*,int,int *) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_4(FILE *VAR_0, const char *VAR_1)
{
 char VAR_2[128], *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1);

 while (!FUNC_0(VAR_0))
 {
  VAR_3 = FUNC_1(VAR_2, sizeof(VAR_2), VAR_0);
  if (VAR_3 == ((void*)0)) break;

  if (VAR_2[0] != '[') continue;
  if (FUNC_3(VAR_2 + 1, VAR_1, VAR_4) == 0 && VAR_2[VAR_4+1] == ']')
   return 1;
 }

 return 0;
}
