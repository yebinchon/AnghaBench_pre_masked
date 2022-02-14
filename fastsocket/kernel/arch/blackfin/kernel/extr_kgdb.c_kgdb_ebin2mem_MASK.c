
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;

int FUNC_1(char *VAR_0, char *VAR_1, int VAR_2)
{
 char *VAR_3, *VAR_4;
 int VAR_5;

 VAR_3 = VAR_4 = VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
  if (*VAR_3 == 0x7d)
   *VAR_4 = *(++VAR_3) ^ 0x20;
  else
   *VAR_4 = *VAR_3;
  VAR_4++;
  VAR_3++;
 }

 return FUNC_0(VAR_1, VAR_0, VAR_2);
}
