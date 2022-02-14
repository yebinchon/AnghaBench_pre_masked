
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int*,char*,int*,int*,...) ;

__attribute__((used)) static int FUNC_1(char *VAR_0,
 int *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4)
{
 char VAR_5;


 if (FUNC_0(VAR_0, "%03d%c%02d#%d",
  VAR_1, &VAR_5, VAR_2, VAR_4) == 4)
  *VAR_3 = 0;
 else
 if (FUNC_0(VAR_0, "%03d%c%02d^%02d#%d",
  VAR_1, &VAR_5, VAR_2, VAR_3, VAR_4) != 5)
  return -1;

 return 0;
}
