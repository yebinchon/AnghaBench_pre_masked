
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int LIST ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char*) ;
 int* FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (char*,int,char*) ;
 int FUNC_5 (char*,int) ;

void FUNC_6(char *VAR_1, UINT VAR_2, LIST *VAR_3, char *VAR_4)
{
 UINT VAR_5;
 FUNC_0(VAR_1, VAR_2);

 if (VAR_3 == ((void*)0))
 {
  return;
 }
 if (FUNC_1(VAR_4))
 {
  VAR_4 = ", ";
 }

 for (VAR_5 = 0;VAR_5 < FUNC_3(VAR_3);VAR_5++)
 {
  char VAR_6[VAR_0];
  UINT *VAR_7 = FUNC_2(VAR_3, VAR_5);

  FUNC_5(VAR_6, *VAR_7);

  FUNC_4(VAR_1, VAR_2, VAR_6);

  if (VAR_5 != (FUNC_3(VAR_3) - 1))
  {
   FUNC_4(VAR_1, VAR_2, VAR_4);
  }
 }
}
