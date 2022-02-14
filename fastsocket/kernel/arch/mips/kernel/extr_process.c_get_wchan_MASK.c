
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long reg29; } ;
struct task_struct {scalar_t__ state; TYPE_1__ thread; } ;
struct TYPE_4__ {unsigned long frame_size; } ;


 scalar_t__ VAR_0 ;
 struct task_struct* VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (struct task_struct*) ;
 unsigned long FUNC_2 (struct task_struct*) ;
 unsigned long FUNC_3 (struct task_struct*,unsigned long*,unsigned long,unsigned long*) ;

unsigned long FUNC_4(struct task_struct *VAR_3)
{
 unsigned long VAR_4 = 0;





 if (!VAR_3 || VAR_3 == VAR_1 || VAR_3->state == VAR_0)
  goto out;
 if (!FUNC_1(VAR_3))
  goto out;

 VAR_4 = FUNC_2(VAR_3);
out:
 return VAR_4;
}
