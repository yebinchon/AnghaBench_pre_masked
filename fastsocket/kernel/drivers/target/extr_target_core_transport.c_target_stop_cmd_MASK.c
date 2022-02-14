
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int transport_state; int t_state_lock; int task_stop_comp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct se_cmd*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

bool FUNC_4(struct se_cmd *VAR_2, unsigned long *VAR_3)
{
 bool VAR_4 = 0;

 if (VAR_2->transport_state & VAR_0) {
  VAR_2->transport_state |= VAR_1;
  FUNC_2(&VAR_2->t_state_lock, *VAR_3);

  FUNC_0("cmd %p waiting to complete\n", VAR_2);
  FUNC_3(&VAR_2->task_stop_comp);
  FUNC_0("cmd %p stopped successfully\n", VAR_2);

  FUNC_1(&VAR_2->t_state_lock, *VAR_3);
  VAR_2->transport_state &= ~VAR_1;
  VAR_2->transport_state &= ~VAR_0;
  VAR_4 = 1;
 }

 return VAR_4;
}
