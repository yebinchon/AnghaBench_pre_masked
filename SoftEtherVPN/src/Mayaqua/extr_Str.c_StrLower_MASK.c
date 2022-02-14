
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT ;


 size_t FUNC_0 (char*) ;
 char FUNC_1 (char) ;

void FUNC_2(char *VAR_0)
{
 UINT VAR_1, VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_1 = FUNC_0(VAR_0);
 for (VAR_2 = 0;VAR_2 < VAR_1;VAR_2++)
 {
  VAR_0[VAR_2] = FUNC_1(VAR_0[VAR_2]);
 }
}
