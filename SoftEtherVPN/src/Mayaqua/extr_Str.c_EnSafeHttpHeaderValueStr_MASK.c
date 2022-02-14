
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT ;


 int FUNC_0 (char*,char*,size_t) ;
 size_t FUNC_1 (char*) ;

void FUNC_2(char *VAR_0, char VAR_1)
{
 UINT VAR_2 = 0;
 UINT VAR_3 = 0;


 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_2 = FUNC_1(VAR_0);
 while (VAR_3 < VAR_2)
 {
  if (VAR_0[VAR_3] == '\r' || VAR_0[VAR_3] == '\n')
  {
   if (VAR_1 == ' ')
   {
    FUNC_0(&VAR_0[VAR_3], &VAR_0[VAR_3 + 1], VAR_2 - VAR_3);
   }
   else
   {
    VAR_0[VAR_3] = VAR_1;
   }
  }
  else if (VAR_0[VAR_3] == '\\')
  {
   if (VAR_0[VAR_3 + 1] == 'r' || VAR_0[VAR_3 + 1] == 'n')
   {
    if (VAR_1 == ' ')
    {
     FUNC_0(&VAR_0[VAR_3], &VAR_0[VAR_3 + 2], VAR_2 - VAR_3);
     VAR_3--;
    }
    else
    {
     VAR_0[VAR_3] = VAR_0[VAR_3 + 1] = VAR_1;
     VAR_3++;
    }
   }
  }
  VAR_3++;
 }
}
