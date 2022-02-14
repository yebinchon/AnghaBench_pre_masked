
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int) ;

int FUNC_2(char *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_0(VAR_0 + VAR_2, "skin/", sizeof "skin/");
 return VAR_2 + sizeof("skin/") - 1;
}
