
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {scalar_t__ system_timer; } ;
struct task_struct {int dummy; } ;
typedef scalar_t__ __u64 ;
struct TYPE_2__ {scalar_t__ system_timer; int steal_timer; scalar_t__ last_update_timer; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct task_struct*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 struct thread_info* FUNC_2 (struct task_struct*) ;

void FUNC_3(struct task_struct *VAR_1)
{
 struct thread_info *VAR_2 = FUNC_2(VAR_1);
 __u64 VAR_3, VAR_4;

 VAR_3 = VAR_0.last_update_timer;
 VAR_0.last_update_timer = FUNC_1();
 VAR_0.system_timer += VAR_3 - VAR_0.last_update_timer;

 VAR_4 = VAR_0.system_timer - VAR_2->system_timer;
 VAR_0.steal_timer -= VAR_4;
 VAR_2->system_timer = VAR_0.system_timer;
 FUNC_0(VAR_1, 0, VAR_4, VAR_4);
}
