
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int namebuf ;


 int FUNC_0 (int,char*,char*,int) ;
 scalar_t__ FUNC_1 (char*,char*) ;

int FUNC_2(int VAR_0, char *VAR_1)
{
 int VAR_2;

 static char VAR_3[128];
 VAR_2 = FUNC_0(VAR_0, "name", VAR_3, sizeof(VAR_3));
 if (VAR_2 == -1) return 0;
 if(FUNC_1(VAR_3, VAR_1) == 0) return 1;
 return 0;
}
