
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (char*,char) ;

int FUNC_2(char *VAR_0, char *VAR_1, int VAR_2)
{
 char *VAR_3;
 int VAR_4;





 VAR_3 = VAR_1 + VAR_2;

 VAR_4 = FUNC_0(VAR_3, VAR_0, VAR_2);
 if (!VAR_4) {
  while (VAR_2 > 0) {
   VAR_1 = FUNC_1(VAR_1, *VAR_3);
   VAR_3++;
   VAR_2--;
  }

  *VAR_1 = 0;
 }

 return VAR_4;
}
