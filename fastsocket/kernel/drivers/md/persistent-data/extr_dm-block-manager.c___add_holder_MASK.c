
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct stack_trace {int skip; int entries; int max_entries; scalar_t__ nr_entries; } ;
struct block_lock {int * entries; struct stack_trace* traces; struct task_struct** holders; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct block_lock*,int *) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct stack_trace*) ;

__attribute__((used)) static void FUNC_3(struct block_lock *VAR_1, struct task_struct *VAR_2)
{
 unsigned VAR_3 = FUNC_0(VAR_1, ((void*)0));




 FUNC_1(VAR_2);
 VAR_1->holders[VAR_3] = VAR_2;
}
