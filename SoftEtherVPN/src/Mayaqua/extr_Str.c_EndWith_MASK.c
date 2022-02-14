
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;


 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*) ;

bool FUNC_2(char *VAR_0, char *VAR_1)
{
 UINT VAR_2;
 UINT VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }


 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = FUNC_1(VAR_1);
 if (VAR_2 < VAR_3)
 {
  return 0;
 }

 if (FUNC_0(VAR_0 + (VAR_2 - VAR_3), VAR_1) == 0)
 {
  return 1;
 }
 else
 {
  return 0;
 }
}
