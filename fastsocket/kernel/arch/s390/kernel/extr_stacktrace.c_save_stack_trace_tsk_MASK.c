
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long ksp; } ;
struct task_struct {TYPE_1__ thread; } ;
struct stack_trace {scalar_t__ nr_entries; scalar_t__ max_entries; int * entries; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct stack_trace*,unsigned long,unsigned long,unsigned long,int ) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 scalar_t__ FUNC_2 (struct task_struct*) ;

void FUNC_3(struct task_struct *VAR_2, struct stack_trace *VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6;

 VAR_4 = VAR_2->thread.ksp & VAR_0;
 VAR_5 = (unsigned long) FUNC_2(VAR_2);
 VAR_6 = (unsigned long) FUNC_1(VAR_2);
 FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, 0);
 if (VAR_3->nr_entries < VAR_3->max_entries)
  VAR_3->entries[VAR_3->nr_entries++] = VAR_1;
}
