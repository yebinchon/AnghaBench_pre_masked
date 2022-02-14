
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* VAR_0 ;
 char* FUNC_2 (char*,char) ;

void FUNC_3(char *VAR_1)
{
 char *VAR_2;

 VAR_2 = FUNC_2(VAR_0, '\n');
 if (VAR_2)
  *VAR_2 = 0;
 if (VAR_1)
  FUNC_1(VAR_1);
 if (*VAR_0)
  FUNC_1(VAR_0);
 FUNC_1("");
 FUNC_0("Reboot failed!");
}
