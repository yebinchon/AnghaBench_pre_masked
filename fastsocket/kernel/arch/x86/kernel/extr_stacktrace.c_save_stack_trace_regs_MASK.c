
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_trace {scalar_t__ nr_entries; scalar_t__ max_entries; int * entries; } ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct pt_regs*,int *,int *,struct stack_trace*) ;
 int VAR_2 ;

void FUNC_1(struct pt_regs *VAR_3, struct stack_trace *VAR_4)
{
 FUNC_0(VAR_1, VAR_3, ((void*)0), &VAR_2, VAR_4);
 if (VAR_4->nr_entries < VAR_4->max_entries)
  VAR_4->entries[VAR_4->nr_entries++] = VAR_0;
}
