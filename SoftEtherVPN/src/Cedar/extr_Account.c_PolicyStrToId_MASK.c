
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,char*) ;

UINT FUNC_2(char *VAR_2)
{
 UINT VAR_3;

 if (VAR_2 == ((void*)0))
 {
  return VAR_0;
 }

 for (VAR_3 = 0;VAR_3 < VAR_1;VAR_3++)
 {
  if (FUNC_1(FUNC_0(VAR_3), VAR_2))
  {
   return VAR_3;
  }
 }

 return VAR_0;
}
