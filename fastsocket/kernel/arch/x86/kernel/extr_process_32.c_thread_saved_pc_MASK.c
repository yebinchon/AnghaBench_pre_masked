
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sp; } ;
struct task_struct {TYPE_1__ thread; } ;



unsigned long FUNC_0(struct task_struct *VAR_0)
{
 return ((unsigned long *)VAR_0->thread.sp)[3];
}
