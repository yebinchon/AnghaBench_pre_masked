
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;

void FUNC_2(char *VAR_0)
{
 char *VAR_1 = VAR_0;
 char *VAR_2;

 while (*VAR_1 == ' ' || *VAR_1 == '\t' || *VAR_1 == '\r' || *VAR_1 == '\n')
  VAR_1++;


 if (*VAR_1 == '\0') {

  *VAR_0 = '\0';
  return;
 }

 VAR_2 = VAR_0 + FUNC_1(VAR_0);



 do
  VAR_2--;
 while (*VAR_2 == ' ' || *VAR_2 == '\t' || *VAR_2 == '\r' || *VAR_2 == '\n');



 *++VAR_2 = '\0';


 FUNC_0(VAR_0, VAR_1, VAR_2 + 1 - VAR_1);
}
