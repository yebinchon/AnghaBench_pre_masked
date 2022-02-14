
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static char *FUNC_2(char *VAR_0)
{
 static char VAR_1[9];
 char *VAR_2 = VAR_1;
 FUNC_1(VAR_1, VAR_0, 8);
 VAR_1[8] = '\0';
 while (*VAR_2 && (!FUNC_0(*VAR_2)))
  VAR_2++;
 *VAR_2 = '\0';
 return VAR_1;
}
