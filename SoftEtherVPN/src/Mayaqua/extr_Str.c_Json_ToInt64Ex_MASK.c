
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT64 ;
typedef size_t UINT ;



UINT64 FUNC_0(char *VAR_0, char **VAR_1, bool *VAR_2)
{
 UINT VAR_3;
 UINT64 VAR_4 = 0;
 if (VAR_2 != ((void*)0)) *VAR_2 = 1;

 if (VAR_0 == ((void*)0))
 {
  if (VAR_1 != ((void*)0))
  {
   *VAR_1 = ((void*)0);
  }
  return 0;
 }

 for (VAR_3 = 0;;VAR_3++)
 {
  char VAR_5 = VAR_0[VAR_3];
  if (VAR_1 != ((void*)0))
  {
   *VAR_1 = &VAR_0[VAR_3];
  }
  if (VAR_5 == 0)
  {
   break;
  }
  if ('0' <= VAR_5 && VAR_5 <= '9')
  {
   VAR_4 = VAR_4 * (UINT64)10 + (UINT64)(VAR_5 - '0');
   if (VAR_2 != ((void*)0)) *VAR_2 = 0;
  }
  else
  {
   break;
  }
 }

 return VAR_4;
}
