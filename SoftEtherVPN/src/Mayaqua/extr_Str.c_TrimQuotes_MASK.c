
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;

void FUNC_2(char *VAR_0)
{
 UINT VAR_1 = 0;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 == 0)
 {
  return;
 }

 if (VAR_0[VAR_1 - 1] == '\"')
 {
  VAR_0[VAR_1 - 1] = 0;
 }

 if (VAR_0[0] == '\"')
 {
  FUNC_0(VAR_0, VAR_0 + 1, VAR_1);
 }
}
