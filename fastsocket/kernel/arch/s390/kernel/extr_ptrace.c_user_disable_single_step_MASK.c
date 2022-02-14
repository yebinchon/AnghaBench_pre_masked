
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ single_step; } ;
struct TYPE_4__ {TYPE_1__ per_info; } ;
struct task_struct {TYPE_2__ thread; } ;


 int FUNC_0 (struct task_struct*) ;

void FUNC_1(struct task_struct *VAR_0)
{
 VAR_0->thread.per_info.single_step = 0;
 FUNC_0(VAR_0);
}
