
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ VAR_1 ;
 size_t FUNC_1 (char*) ;

BOOL FUNC_2(char *VAR_2)
{
 UINT VAR_3, VAR_4;
 if (VAR_2 == ((void*)0))
 {
  return VAR_0;
 }

 VAR_4 = FUNC_1(VAR_2);
 for (VAR_3 = 0;VAR_3 < VAR_4;VAR_3++)
 {
  if (FUNC_0(VAR_2[VAR_3]) == VAR_0)
  {
   return VAR_0;
  }
 }
 if (VAR_2[0] == ' ')
 {
  return VAR_0;
 }
 if (VAR_4 != 0)
 {
  if (VAR_2[VAR_4 - 1] == ' ')
  {
   return VAR_0;
  }
 }
 return VAR_1;
}
