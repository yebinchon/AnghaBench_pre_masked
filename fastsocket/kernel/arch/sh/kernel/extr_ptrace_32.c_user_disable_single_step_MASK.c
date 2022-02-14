
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ubc_pc; } ;
struct task_struct {TYPE_1__ thread; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*,int ) ;
 int VAR_1 ;

void FUNC_1(struct task_struct *VAR_2)
{
 FUNC_0(VAR_2, VAR_0);
 if (VAR_2->thread.ubc_pc != 0) {
  VAR_1 -= 1;
  VAR_2->thread.ubc_pc = 0;
 }
}
