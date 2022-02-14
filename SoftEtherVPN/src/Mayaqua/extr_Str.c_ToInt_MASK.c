
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 int FUNC_0 (char*,int *,int ) ;

UINT FUNC_1(char *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }


 while (1)
 {
  if (*VAR_0 != '0')
  {
   break;
  }
  if ((*(VAR_0 + 1) == 'x') || (*(VAR_0 + 1) == 'X'))
  {
   break;
  }
  VAR_0++;
 }

 return (UINT)FUNC_0(VAR_0, ((void*)0), 0);
}
