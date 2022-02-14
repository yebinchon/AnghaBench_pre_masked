
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int PACK ;
typedef int ELEMENT ;
typedef int BUF ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

bool FUNC_3(BUF *VAR_1, PACK *VAR_2)
{
 UINT VAR_3, VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }


 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4 > VAR_0)
 {

  return 0;
 }


 for (VAR_3 = 0;VAR_3 < VAR_4;VAR_3++)
 {
  ELEMENT *VAR_5;
  VAR_5 = FUNC_2(VAR_1);
  if (FUNC_0(VAR_2, VAR_5) == 0)
  {

   return 0;
  }
 }

 return 1;
}
