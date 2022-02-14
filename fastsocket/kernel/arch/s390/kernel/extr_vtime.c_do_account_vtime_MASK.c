
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {scalar_t__ system_timer; scalar_t__ user_timer; } ;
struct task_struct {int dummy; } ;
typedef scalar_t__ s64 ;
typedef scalar_t__ __u64 ;
struct TYPE_2__ {scalar_t__ steal_timer; scalar_t__ system_timer; scalar_t__ user_timer; scalar_t__ last_update_clock; scalar_t__ last_update_timer; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct task_struct*,int,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct task_struct*,scalar_t__,scalar_t__) ;
 struct thread_info* FUNC_3 (struct task_struct*) ;

__attribute__((used)) static void FUNC_4(struct task_struct *VAR_1, int VAR_2)
{
 struct thread_info *VAR_3 = FUNC_3(VAR_1);
 __u64 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_4 = VAR_0.last_update_timer;
 VAR_5 = VAR_0.last_update_clock;
 asm volatile ("  STPT %0\n"
        "  STCK %1"
        : "=m" (VAR_0.last_update_timer),
          "=m" (VAR_0.last_update_clock) );
 VAR_0.system_timer += VAR_4 - VAR_0.last_update_timer;
 VAR_0.steal_timer += VAR_0.last_update_clock - VAR_5;

 VAR_6 = VAR_0.user_timer - VAR_3->user_timer;
 VAR_0.steal_timer -= VAR_6;
 VAR_3->user_timer = VAR_0.user_timer;
 FUNC_2(VAR_1, VAR_6, VAR_6);

 VAR_7 = VAR_0.system_timer - VAR_3->system_timer;
 VAR_0.steal_timer -= VAR_7;
 VAR_3->system_timer = VAR_0.system_timer;
 FUNC_1(VAR_1, VAR_2, VAR_7, VAR_7);

 VAR_8 = VAR_0.steal_timer;
 if ((s64) VAR_8 > 0) {
  VAR_0.steal_timer = 0;
  FUNC_0(VAR_8);
 }
}
