
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef int UINT ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,char*) ;

bool FUNC_2(char *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return 0;
 }

 for (VAR_2 = 1;VAR_2 < 128;VAR_2++)
 {
  char VAR_3[VAR_0];

  FUNC_0(VAR_3, sizeof(VAR_3), VAR_2);

  if (FUNC_1(VAR_1, VAR_3) == 0)
  {
   return 1;
  }
 }

 return 0;
}
