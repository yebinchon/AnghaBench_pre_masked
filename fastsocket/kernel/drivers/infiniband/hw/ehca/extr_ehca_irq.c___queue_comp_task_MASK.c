
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehca_cq {scalar_t__ nr_callbacks; int task_lock; int entry; } ;
struct ehca_cpu_comp_task {int task_lock; int wait_queue; int cq_jobs; int cq_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ehca_cq *VAR_0,
         struct ehca_cpu_comp_task *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_1->task_lock, VAR_2);
 FUNC_1(&VAR_0->task_lock);

 if (VAR_0->nr_callbacks == 0) {
  VAR_0->nr_callbacks++;
  FUNC_0(&VAR_0->entry, &VAR_1->cq_list);
  VAR_1->cq_jobs++;
  FUNC_5(&VAR_1->wait_queue);
 } else
  VAR_0->nr_callbacks++;

 FUNC_3(&VAR_0->task_lock);
 FUNC_4(&VAR_1->task_lock, VAR_2);
}
