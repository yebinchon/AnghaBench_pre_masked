
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_trace {scalar_t__ nr_entries; scalar_t__ max_entries; int * entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,unsigned long*,int *,struct stack_trace*) ;

void FUNC_1(struct stack_trace *VAR_4)
{
 unsigned long *VAR_5 = (unsigned long *)VAR_2;

 FUNC_0(VAR_1, ((void*)0), VAR_5, &VAR_3, VAR_4);
 if (VAR_4->nr_entries < VAR_4->max_entries)
  VAR_4->entries[VAR_4->nr_entries++] = VAR_0;
}
