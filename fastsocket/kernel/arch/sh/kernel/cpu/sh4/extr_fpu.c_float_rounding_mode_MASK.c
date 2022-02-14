
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fpscr; } ;
struct TYPE_5__ {TYPE_1__ hard; } ;
struct TYPE_6__ {TYPE_2__ fpu; } ;
struct task_struct {TYPE_3__ thread; } ;


 int FUNC_0 (int ) ;
 struct task_struct* VAR_0 ;

int FUNC_1(void)
{
 struct task_struct *VAR_1 = VAR_0;
 int VAR_2 = FUNC_0(VAR_1->thread.fpu.hard.fpscr);
 return VAR_2;
}
