
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT ;



void FUNC_0(char *VAR_0)
{
 UINT VAR_1;
 for(VAR_1 = 0; VAR_0[VAR_1] ; VAR_1++) {
  if(VAR_0[VAR_1] == '<')
   VAR_0[VAR_1] = '(';
  else if(VAR_0[VAR_1] == '>')
   VAR_0[VAR_1] = ')';
 }
}
