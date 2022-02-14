
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef size_t UINT ;


 int FUNC_0 (char*,size_t,char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 size_t FUNC_2 (char*) ;

void FUNC_3(char *VAR_1, UINT VAR_2)
{
 char VAR_3[VAR_0];
 UINT VAR_4, VAR_5;

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_3, sizeof(VAR_3));

 VAR_5 = FUNC_2(VAR_3);
 for (VAR_4 = 0;VAR_4 < VAR_5;VAR_4++)
 {
  if (VAR_3[VAR_4] == '.')
  {
   VAR_3[VAR_4] = 0;
  }
 }

 FUNC_0(VAR_1, VAR_2, VAR_3);
}
