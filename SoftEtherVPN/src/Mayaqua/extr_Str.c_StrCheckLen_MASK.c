
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

bool FUNC_1(char *VAR_1, UINT VAR_2)
{
 UINT VAR_3 = 0;
 UINT VAR_4;

 if (VAR_1 == ((void*)0))
 {
  return 0;
 }


 FUNC_0(VAR_0);

 for (VAR_4 = 0;;VAR_4++)
 {
  if (VAR_1[VAR_4] == '\0')
  {
   return 1;
  }
  VAR_3++;
  if (VAR_3 > VAR_2)
  {
   return 0;
  }
 }
}
