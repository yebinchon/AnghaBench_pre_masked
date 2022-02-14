
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int namebuf ;


 int FUNC_0 (int,char*,char*,int) ;
 scalar_t__ FUNC_1 (char*,char const*) ;

int FUNC_2(int VAR_0, const char *VAR_1)
{
 char VAR_2[128];
 FUNC_0(VAR_0, "name", VAR_2, sizeof(VAR_2));
 if(FUNC_1(VAR_2, VAR_1) == 0) return 1;
 return 0;
}
