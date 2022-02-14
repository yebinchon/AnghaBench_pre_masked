
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 char* FUNC_0 (int) ;

char *FUNC_1(char VAR_0, UINT VAR_1)
{
 UINT VAR_2;
 char *VAR_3 = FUNC_0(VAR_1 + 1);

 for (VAR_2 = 0;VAR_2 < VAR_1;VAR_2++)
 {
  VAR_3[VAR_2] = VAR_0;
 }

 VAR_3[VAR_1] = 0;

 return VAR_3;
}
