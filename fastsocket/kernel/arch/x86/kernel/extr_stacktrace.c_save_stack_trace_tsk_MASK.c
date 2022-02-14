
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct stack_trace {scalar_t__ nr_entries; scalar_t__ max_entries; int * entries; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*,int *,int *,int *,struct stack_trace*) ;
 int VAR_1 ;

void FUNC_1(struct task_struct *VAR_2, struct stack_trace *VAR_3)
{
 FUNC_0(VAR_2, ((void*)0), ((void*)0), &VAR_1, VAR_3);
 if (VAR_3->nr_entries < VAR_3->max_entries)
  VAR_3->entries[VAR_3->nr_entries++] = VAR_0;
}
