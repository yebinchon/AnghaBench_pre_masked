
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int tasks; } ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct notifier_block *VAR_3, unsigned long VAR_4, void *VAR_5)
{
 unsigned long VAR_6;
 struct task_struct *VAR_7 = VAR_5;
 FUNC_1(&VAR_2, VAR_6);
 FUNC_0(&VAR_7->tasks, &VAR_1);
 FUNC_2(&VAR_2, VAR_6);
 return VAR_0;
}
