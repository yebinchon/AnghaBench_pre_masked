
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_trace {scalar_t__ nr_entries; scalar_t__ max_entries; int * entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int *,int *,struct stack_trace*) ;
 int VAR_2 ;

void FUNC_1(struct stack_trace *VAR_3)
{
 FUNC_0(VAR_1, ((void*)0), ((void*)0), &VAR_2, VAR_3);
 if (VAR_3->nr_entries < VAR_3->max_entries)
  VAR_3->entries[VAR_3->nr_entries++] = VAR_0;
}
