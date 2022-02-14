
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT64 ;
typedef size_t UINT ;


 size_t FUNC_0 (char*) ;

UINT64 FUNC_1(char *VAR_0)
{
 UINT VAR_1, VAR_2;
 UINT64 VAR_3 = 0;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_1 = FUNC_0(VAR_0);
 for (VAR_2 = 0;VAR_2 < VAR_1;VAR_2++)
 {
  char VAR_4 = VAR_0[VAR_2];
  if (VAR_4 != ',')
  {
   if ('0' <= VAR_4 && VAR_4 <= '9')
   {
    VAR_3 = VAR_3 * (UINT64)10 + (UINT64)(VAR_4 - '0');
   }
   else
   {
    break;
   }
  }
 }

 return VAR_3;
}
