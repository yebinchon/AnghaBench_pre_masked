
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct stack_trace {scalar_t__ nr_entries; scalar_t__ max_entries; int * entries; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*,struct stack_trace*) ;

void FUNC_1(struct task_struct *VAR_1, struct stack_trace *VAR_2)
{
 FUNC_0(VAR_1, VAR_2);
 if (VAR_2->nr_entries < VAR_2->max_entries)
  VAR_2->entries[VAR_2->nr_entries++] = VAR_0;
}
