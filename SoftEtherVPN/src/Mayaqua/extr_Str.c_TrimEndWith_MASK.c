
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,scalar_t__,char*) ;
 scalar_t__ FUNC_3 (char*) ;

bool FUNC_4(char *VAR_0, UINT VAR_1, char *VAR_2, char *VAR_3)
{
 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  FUNC_0(VAR_0, VAR_1);
  return 0;
 }

 FUNC_2(VAR_0, VAR_1, VAR_2);

 if (FUNC_1(VAR_2, VAR_3))
 {
  UINT VAR_4 = FUNC_3(VAR_2);
  UINT VAR_5 = FUNC_3(VAR_3);

  if (VAR_4 >= VAR_5)
  {
   VAR_0[VAR_4 - VAR_5] = 0;
  }

  return 1;
 }

 return 0;
}
