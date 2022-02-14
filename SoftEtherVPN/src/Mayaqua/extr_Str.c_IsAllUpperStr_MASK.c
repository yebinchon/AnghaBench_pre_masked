
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT ;


 size_t FUNC_0 (char*) ;

bool FUNC_1(char *VAR_0)
{
 UINT VAR_1, VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_0(VAR_0);

 for (VAR_1 = 0;VAR_1 < VAR_2;VAR_1++)
 {
  char VAR_3 = VAR_0[VAR_1];

  if ((VAR_3 >= '0' && VAR_3 <= '9') ||
   (VAR_3 >= 'A' && VAR_3 <= 'Z'))
  {
  }
  else
  {
   return 0;
  }
 }

 return 1;
}
