
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int TickList; } ;
typedef TYPE_1__ UINT64 ;
typedef scalar_t__ UINT ;
typedef TYPE_1__ INTERRUPT_MANAGER ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(INTERRUPT_MANAGER *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 for (VAR_1 = 0;VAR_1 < FUNC_2(VAR_0->TickList);VAR_1++)
 {
  UINT64 *VAR_2 = FUNC_1(VAR_0->TickList, VAR_1);

  FUNC_0(VAR_2);
 }

 FUNC_3(VAR_0->TickList);

 FUNC_0(VAR_0);
}
