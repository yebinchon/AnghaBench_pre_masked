
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct ehca_cpu_comp_task {int task_lock; scalar_t__ cq_jobs; struct task_struct* task; } ;
struct ehca_comp_pool {int cpu_comp_tasks; } ;


 int FUNC_0 (struct task_struct*) ;
 struct ehca_cpu_comp_task* FUNC_1 (int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct ehca_comp_pool *VAR_0,
         int VAR_1)
{
 struct ehca_cpu_comp_task *VAR_2;
 struct task_struct *VAR_3;
 unsigned long VAR_4;

 VAR_2 = FUNC_1(VAR_0->cpu_comp_tasks, VAR_1);

 FUNC_2(&VAR_2->task_lock, VAR_4);

 VAR_3 = VAR_2->task;
 VAR_2->task = ((void*)0);
 VAR_2->cq_jobs = 0;

 FUNC_3(&VAR_2->task_lock, VAR_4);

 if (VAR_3)
  FUNC_0(VAR_3);
}
