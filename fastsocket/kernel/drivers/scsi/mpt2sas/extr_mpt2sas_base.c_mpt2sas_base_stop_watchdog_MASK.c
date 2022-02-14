
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;
struct MPT2SAS_ADAPTER {int fault_reset_work; int ioc_reset_in_progress_lock; struct workqueue_struct* fault_reset_work_q; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct workqueue_struct*) ;
 int FUNC_2 (struct workqueue_struct*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void
FUNC_5(struct MPT2SAS_ADAPTER *VAR_0)
{
 unsigned long VAR_1;
 struct workqueue_struct *VAR_2;

 FUNC_3(&VAR_0->ioc_reset_in_progress_lock, VAR_1);
 VAR_2 = VAR_0->fault_reset_work_q;
 VAR_0->fault_reset_work_q = ((void*)0);
 FUNC_4(&VAR_0->ioc_reset_in_progress_lock, VAR_1);
 if (VAR_2) {
  if (!FUNC_0(&VAR_0->fault_reset_work))
   FUNC_2(VAR_2);
  FUNC_1(VAR_2);
 }
}
