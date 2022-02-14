
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT ;


 size_t FUNC_0 (char*) ;
 char FUNC_1 (char) ;
 char FUNC_2 (char) ;

void FUNC_3(char *VAR_0, UINT VAR_1)
{
 UINT VAR_2, VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_0(VAR_0);

 for (VAR_2 = 0;VAR_2 < VAR_3;VAR_2++)
 {
  char VAR_4 = VAR_0[VAR_2];

  if (VAR_1 & 0x01)
  {
   VAR_4 = FUNC_2(VAR_4);
  }
  else
  {
   VAR_4 = FUNC_1(VAR_4);
  }

  VAR_0[VAR_2] = VAR_4;

  VAR_1 = VAR_1 / 2;
 }
}
