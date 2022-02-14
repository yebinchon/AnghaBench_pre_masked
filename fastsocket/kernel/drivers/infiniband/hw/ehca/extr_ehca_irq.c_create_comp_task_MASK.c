
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct ehca_cpu_comp_task {struct task_struct* task; int wait_queue; int cq_list; int task_lock; } ;
struct ehca_comp_pool {int cpu_comp_tasks; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 struct task_struct* FUNC_2 (int ,struct ehca_cpu_comp_task*,char*,int) ;
 struct ehca_cpu_comp_task* FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct task_struct *FUNC_5(struct ehca_comp_pool *VAR_1,
         int VAR_2)
{
 struct ehca_cpu_comp_task *VAR_3;

 VAR_3 = FUNC_3(VAR_1->cpu_comp_tasks, VAR_2);
 FUNC_4(&VAR_3->task_lock);
 FUNC_0(&VAR_3->cq_list);
 FUNC_1(&VAR_3->wait_queue);
 VAR_3->task = FUNC_2(VAR_0, VAR_3, "ehca_comp/%d", VAR_2);

 return VAR_3->task;
}
