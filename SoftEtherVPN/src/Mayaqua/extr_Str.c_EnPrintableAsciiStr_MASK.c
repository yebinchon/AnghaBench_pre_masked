
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT ;


 int FUNC_0 (char) ;
 size_t FUNC_1 (char*) ;

void FUNC_2(char *VAR_0, char VAR_1)
{
 UINT VAR_2, VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_1(VAR_0);

 for (VAR_2 = 0;VAR_2 < VAR_3;VAR_2++)
 {
  char VAR_4 = VAR_0[VAR_2];

  if (FUNC_0(VAR_4) == 0)
  {
   VAR_0[VAR_2] = VAR_1;
  }
 }
}
