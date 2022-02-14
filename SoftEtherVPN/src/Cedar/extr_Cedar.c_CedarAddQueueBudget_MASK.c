
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int QueueBudgetLock; scalar_t__ QueueBudget; } ;
typedef TYPE_1__ CEDAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(CEDAR *VAR_0, int VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == 0)
 {
  return;
 }

 FUNC_0(VAR_0->QueueBudgetLock);
 {
  int VAR_2 = (int)VAR_0->QueueBudget;
  VAR_2 += VAR_1;
  VAR_0->QueueBudget = (UINT)VAR_2;
 }
 FUNC_1(VAR_0->QueueBudgetLock);
}
