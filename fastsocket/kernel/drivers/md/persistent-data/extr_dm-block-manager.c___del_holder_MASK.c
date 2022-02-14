
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct block_lock {int ** holders; } ;


 unsigned int FUNC_0 (struct block_lock*,struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;

__attribute__((used)) static void FUNC_2(struct block_lock *VAR_0, struct task_struct *VAR_1)
{
 unsigned VAR_2 = FUNC_0(VAR_0, VAR_1);
 VAR_0->holders[VAR_2] = ((void*)0);
 FUNC_1(VAR_1);
}
