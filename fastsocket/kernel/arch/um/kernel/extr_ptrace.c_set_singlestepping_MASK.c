
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ singlestep_syscall; } ;
struct task_struct {TYPE_1__ thread; int ptrace; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*,int) ;

__attribute__((used)) static inline void FUNC_1(struct task_struct *VAR_1, int VAR_2)
{
 if (VAR_2)
  VAR_1->ptrace |= VAR_0;
 else
  VAR_1->ptrace &= ~VAR_0;
 VAR_1->thread.singlestep_syscall = 0;




}
