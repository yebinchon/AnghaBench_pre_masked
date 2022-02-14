
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X ;
typedef scalar_t__ UINT ;
struct TYPE_3__ {int CaList; } ;
typedef TYPE_1__ CEDAR ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

bool FUNC_7(CEDAR *VAR_0, UINT VAR_1)
{
 bool VAR_2 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == 0)
 {
  return 0;
 }

 FUNC_4(VAR_0->CaList);
 {
  UINT VAR_3;

  for (VAR_3 = 0;VAR_3 < FUNC_3(VAR_0->CaList);VAR_3++)
  {
   X *VAR_4 = FUNC_2(VAR_0->CaList, VAR_3);

   if (FUNC_5(VAR_4) == VAR_1)
   {
    FUNC_0(VAR_0->CaList, VAR_4);
    FUNC_1(VAR_4);

    VAR_2 = 1;

    break;
   }
  }
 }
 FUNC_6(VAR_0->CaList);

 return VAR_2;
}
