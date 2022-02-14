
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
struct TYPE_3__ {int TickList; } ;
typedef TYPE_1__ INTERRUPT_MANAGER ;


 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,scalar_t__*) ;
 int FUNC_4 (int ) ;

void FUNC_5(INTERRUPT_MANAGER *VAR_0, UINT64 VAR_1)
{

 if (VAR_1 == 0)
 {
  return;
 }

 FUNC_2(VAR_0->TickList);
 {
  if (FUNC_3(VAR_0->TickList, &VAR_1) == ((void*)0))
  {
   FUNC_1(VAR_0->TickList, FUNC_0(&VAR_1, sizeof(UINT64)));
  }
 }
 FUNC_4(VAR_0->TickList);
}
