
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int queue_lock; int FreeCommands; int CommandWaitQueue; } ;
typedef TYPE_1__ DAC960_Controller_T ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(DAC960_Controller_T *VAR_0)
{
  FUNC_2(&VAR_0->queue_lock);
  FUNC_0(VAR_0->CommandWaitQueue, VAR_0->FreeCommands);
  FUNC_1(&VAR_0->queue_lock);
}
