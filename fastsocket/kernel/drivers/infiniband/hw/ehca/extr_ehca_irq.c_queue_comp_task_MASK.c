
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ehca_cq {int dummy; } ;
struct ehca_cpu_comp_task {int cq_jobs; int task_lock; } ;
struct TYPE_3__ {int cpu_comp_tasks; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ehca_cq*,struct ehca_cpu_comp_task*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 struct ehca_cpu_comp_task* FUNC_4 (int ,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct ehca_cq *VAR_1)
{
 int VAR_2;
 struct ehca_cpu_comp_task *VAR_3;
 int VAR_4;
 unsigned long VAR_5;

 VAR_2 = FUNC_3(VAR_0);
 FUNC_0(!FUNC_2(VAR_2));

 VAR_3 = FUNC_4(VAR_0->cpu_comp_tasks, VAR_2);
 FUNC_0(!VAR_3);

 FUNC_5(&VAR_3->task_lock, VAR_5);
 VAR_4 = VAR_3->cq_jobs;
 FUNC_6(&VAR_3->task_lock, VAR_5);
 if (VAR_4 > 0) {
  VAR_2 = FUNC_3(VAR_0);
  VAR_3 = FUNC_4(VAR_0->cpu_comp_tasks, VAR_2);
  FUNC_0(!VAR_3);
 }

 FUNC_1(VAR_1, VAR_3);
}
