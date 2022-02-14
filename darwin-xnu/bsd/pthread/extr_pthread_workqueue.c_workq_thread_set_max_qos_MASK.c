
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ thread_qos_t ;
struct workqueue {int dummy; } ;
struct uu_workq_policy {scalar_t__ qos_max; } ;
struct uthread {struct uu_workq_policy uu_workq_pri; } ;
struct proc {int dummy; } ;
struct kqrequest {scalar_t__ kqr_qos_index; int kqr_thread; } ;


 struct uthread* FUNC_0 (int ) ;
 struct workqueue* FUNC_1 (struct proc*) ;
 int FUNC_2 (struct workqueue*) ;
 int FUNC_3 (struct proc*,struct workqueue*,struct uthread*,struct uu_workq_policy,struct uu_workq_policy,int) ;
 int FUNC_4 (struct workqueue*) ;

void
FUNC_5(struct proc *VAR_0, struct kqrequest *VAR_1)
{
 struct uu_workq_policy VAR_2, VAR_3;
 struct uthread *VAR_4 = FUNC_0(VAR_1->kqr_thread);
 struct workqueue *VAR_5 = FUNC_1(VAR_0);
 thread_qos_t VAR_6 = VAR_1->kqr_qos_index;

 if (VAR_4->uu_workq_pri.qos_max == VAR_6)
  return;

 FUNC_2(VAR_5);
 VAR_2 = VAR_3 = VAR_4->uu_workq_pri;
 VAR_3.qos_max = VAR_6;
 FUNC_3(VAR_0, VAR_5, VAR_4, VAR_2, VAR_3, 0);
 FUNC_4(VAR_5);
}
