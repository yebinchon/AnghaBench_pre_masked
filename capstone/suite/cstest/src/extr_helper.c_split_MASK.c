
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 (char**,int) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*) ;

char **FUNC_6(char *VAR_0, char *VAR_1, int *VAR_2)
{
 char **VAR_3;
 char *VAR_4, *VAR_5;
 int VAR_6;

 VAR_6 = 0;
 VAR_5 = VAR_0;
 VAR_3 = ((void*)0);

 while ((VAR_4 = FUNC_5(VAR_5, VAR_1)) != ((void*)0)) {
  VAR_3 = (char **)FUNC_2(VAR_3, sizeof(char *) * (VAR_6 + 1));
  VAR_3[VAR_6] = (char *)FUNC_0(1, sizeof(char) * (int)(VAR_4 - VAR_5 + 10));
  FUNC_1(VAR_3[VAR_6], VAR_5, VAR_4 - VAR_5);
  VAR_3[VAR_6][VAR_4 - VAR_5] = '\0';
  VAR_5 = VAR_4 + FUNC_4(VAR_1);
  VAR_6 ++;
 }

 if (FUNC_4(VAR_5) > 0) {
  VAR_3 = (char **)FUNC_2(VAR_3, sizeof(char *) * (VAR_6 + 1));
  VAR_3[VAR_6] = FUNC_3(VAR_5);
  VAR_6 ++;
 }

 *VAR_2 = VAR_6;
 return VAR_3;
}
