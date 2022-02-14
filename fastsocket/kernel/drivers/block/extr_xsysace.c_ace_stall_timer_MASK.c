
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ace_device {int fsm_continue_flag; int lock; int stall_timer; int data_count; int fsm_iter_num; int fsm_task; int fsm_state; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ace_device*) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_2)
{
 struct ace_device *VAR_3 = (void *)VAR_2;
 unsigned long VAR_4;

 FUNC_1(VAR_3->dev,
   "kicking stalled fsm; state=%i task=%i iter=%i dc=%i\n",
   VAR_3->fsm_state, VAR_3->fsm_task, VAR_3->fsm_iter_num,
   VAR_3->data_count);
 FUNC_3(&VAR_3->lock, VAR_4);



 FUNC_2(&VAR_3->stall_timer, VAR_1 + VAR_0);


 VAR_3->fsm_continue_flag = 1;
 while (VAR_3->fsm_continue_flag)
  FUNC_0(VAR_3);

 FUNC_4(&VAR_3->lock, VAR_4);
}
