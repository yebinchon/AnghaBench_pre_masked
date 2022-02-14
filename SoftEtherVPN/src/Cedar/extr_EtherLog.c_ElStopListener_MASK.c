
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {int Listener; int AdminThreadList; int AdminSockList; int Cedar; } ;
typedef int THREAD ;
typedef int SOCK ;
typedef TYPE_1__ EL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **) ;
 int VAR_0 ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int ** FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int ) ;

void FUNC_13(EL *VAR_1)
{
 UINT VAR_2;
 THREAD **VAR_3;
 SOCK **VAR_4;
 UINT VAR_5, VAR_6;

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_9(VAR_1->Cedar);

 FUNC_4(VAR_1->AdminThreadList);
 {
  VAR_3 = FUNC_10(VAR_1->AdminThreadList);
  VAR_5 = FUNC_3(VAR_1->AdminThreadList);
  FUNC_0(VAR_1->AdminThreadList);

  VAR_4 = FUNC_10(VAR_1->AdminSockList);
  VAR_6 = FUNC_3(VAR_1->AdminSockList);
  FUNC_0(VAR_1->AdminSockList);
 }
 FUNC_11(VAR_1->AdminThreadList);

 for (VAR_2 = 0;VAR_2 < VAR_6;VAR_2++)
 {
  FUNC_1(VAR_4[VAR_2]);
  FUNC_7(VAR_4[VAR_2]);
 }

 for (VAR_2 = 0;VAR_2 < VAR_5;VAR_2++)
 {
  FUNC_12(VAR_3[VAR_2], VAR_0);
  FUNC_8(VAR_3[VAR_2]);
 }

 FUNC_2(VAR_3);
 FUNC_2(VAR_4);

 FUNC_5(VAR_1->AdminSockList);
 FUNC_5(VAR_1->AdminThreadList);

 FUNC_6(VAR_1->Listener);
}
