
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {int system_timer; int user_timer; } ;
struct task_struct {int dummy; } ;
struct TYPE_2__ {int system_timer; int user_timer; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct task_struct*,int ) ;
 struct thread_info* FUNC_1 (struct task_struct*) ;

void FUNC_2(struct task_struct *VAR_1, struct task_struct *VAR_2)
{
 struct thread_info *VAR_3;

 FUNC_0(VAR_1, 0);
 VAR_3 = FUNC_1(VAR_1);
 VAR_3->user_timer = VAR_0.user_timer;
 VAR_3->system_timer = VAR_0.system_timer;
 VAR_3 = FUNC_1(VAR_2);
 VAR_0.user_timer = VAR_3->user_timer;
 VAR_0.system_timer = VAR_3->system_timer;
}
