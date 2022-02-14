
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char*,char*,float) ;
 int FUNC_2 (char*) ;

int FUNC_3(FILE *VAR_0, float VAR_1)
{
 char VAR_2[128];
 int VAR_3;

 FUNC_1(VAR_2, "%f", VAR_1);
 VAR_3 = FUNC_2(VAR_2);

 while(VAR_3-- > 1)
 {
  if (VAR_2[VAR_3] != '0' && VAR_2[VAR_3] != '.') break;
  if (VAR_2[VAR_3] == '.')
  {
   VAR_2[VAR_3] = 0;
   break;
  }
  VAR_2[VAR_3] = 0;
 }

 if (FUNC_0(VAR_0, "%s", VAR_2) < 0) return 0;
 return 1;
}
