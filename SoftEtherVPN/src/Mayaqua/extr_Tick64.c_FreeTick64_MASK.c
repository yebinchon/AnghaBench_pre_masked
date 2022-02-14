
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {int Halt; int TickLock; int AdjustTime; int Thread; } ;
typedef TYPE_1__ ADJUST_TIME ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 int * VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_9()
{
 UINT VAR_3;
 if (VAR_2 == ((void*)0))
 {

  return;
 }


 VAR_2->Halt = 1;
 FUNC_7(VAR_1);
 FUNC_8(VAR_2->Thread, VAR_0);
 FUNC_6(VAR_2->Thread);


 for (VAR_3 = 0;VAR_3 < FUNC_3(VAR_2->AdjustTime);VAR_3++)
 {
  ADJUST_TIME *VAR_4 = FUNC_2(VAR_2->AdjustTime, VAR_3);
  FUNC_1(VAR_4);
 }
 FUNC_5(VAR_2->AdjustTime);
 FUNC_0(VAR_2->TickLock);
 FUNC_1(VAR_2);
 VAR_2 = ((void*)0);

 FUNC_4(VAR_1);
 VAR_1 = ((void*)0);
}
