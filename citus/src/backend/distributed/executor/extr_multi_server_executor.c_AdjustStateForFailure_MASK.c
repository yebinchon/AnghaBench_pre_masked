
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nodeCount; int currentNodeIndex; int failureCount; } ;
typedef TYPE_1__ TaskExecution ;


 int FUNC_0 (int) ;

void
FUNC_1(TaskExecution *VAR_0)
{
 int VAR_1 = VAR_0->nodeCount - 1;
 FUNC_0(VAR_1 >= 0);

 if (VAR_0->currentNodeIndex < VAR_1)
 {
  VAR_0->currentNodeIndex++;
 }
 else
 {
  VAR_0->currentNodeIndex = 0;
 }

 VAR_0->failureCount++;
}
