
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(char *VAR_0)
{
 int VAR_1 = FUNC_4(VAR_0);
 char *VAR_2 = VAR_0;

 while ((VAR_2 = FUNC_3(VAR_2, '\r')))
 {
  FUNC_1(VAR_2, VAR_2 + 1, VAR_1 - (VAR_2 - VAR_0) + 1);
 }
 if (FUNC_4(VAR_0) > 0)
 {
  VAR_2 = VAR_0 + FUNC_4(VAR_0) - 1;
  while (VAR_2 >= VAR_0 && FUNC_0(*VAR_2)) { *VAR_2 = 0; VAR_2--; }
 }
 FUNC_2(VAR_0, "\n");
}
