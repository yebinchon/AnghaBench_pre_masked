
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT ;


 int FUNC_0 (char) ;
 int FUNC_1 (char*,size_t,char*) ;
 size_t FUNC_2 (char*) ;

void FUNC_3(char *VAR_0, UINT VAR_1, char *VAR_2)
{
 UINT VAR_3;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0, VAR_1, VAR_2);
 for (VAR_3 = 0;VAR_3 < FUNC_2(VAR_0);VAR_3++)
 {
  if (FUNC_0(VAR_0[VAR_3]) == 0)
  {
   VAR_0[VAR_3] = '_';
  }
 }
}
