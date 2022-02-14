
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X ;
typedef scalar_t__ UINT ;
struct TYPE_3__ {int CaList; } ;
typedef TYPE_1__ CEDAR ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ) ;
 int * FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(CEDAR *VAR_0, X *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_5(VAR_0->CaList);
 {
  UINT VAR_2;
  bool VAR_3 = 1;

  for (VAR_2 = 0;VAR_2 < FUNC_4(VAR_0->CaList);VAR_2++)
  {
   X *VAR_4 = FUNC_3(VAR_0->CaList, VAR_2);
   if (FUNC_1(VAR_4, VAR_1))
   {
    VAR_3 = 0;
    break;
   }
  }

  if (VAR_3)
  {
   FUNC_2(VAR_0->CaList, FUNC_0(VAR_1));
  }
 }
 FUNC_6(VAR_0->CaList);
}
