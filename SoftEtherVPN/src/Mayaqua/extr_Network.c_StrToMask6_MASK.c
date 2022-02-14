
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int IP ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*) ;

bool FUNC_5(IP *VAR_0, char *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (VAR_1[0] == '/')
 {
  VAR_1++;
 }

 if (FUNC_2(VAR_1))
 {
  UINT VAR_2 = FUNC_4(VAR_1);

  if (VAR_2 <= 128)
  {
   FUNC_0(VAR_0, VAR_2);
   return 1;
  }
  else
  {
   return 0;
  }
 }
 else
 {
  if (FUNC_3(VAR_0, VAR_1) == 0)
  {
   return 0;
  }
  else
  {
   return FUNC_1(VAR_0);
  }
 }
}
