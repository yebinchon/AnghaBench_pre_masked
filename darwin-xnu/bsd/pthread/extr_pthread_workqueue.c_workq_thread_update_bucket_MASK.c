
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ thread_qos_t ;
struct workqueue {scalar_t__ wq_reqcount; } ;
struct uu_workq_policy {scalar_t__ qos_bucket; } ;
struct uthread {int uu_thread; struct uu_workq_policy uu_workq_pri; } ;
typedef int proc_t ;


 int VAR_0 ;
 int FUNC_0 (struct workqueue*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct uu_workq_policy) ;
 scalar_t__ FUNC_3 (struct uu_workq_policy) ;
 int FUNC_4 (int ,struct workqueue*,int) ;

__attribute__((used)) static void
FUNC_5(proc_t VAR_1, struct workqueue *VAR_2, struct uthread *VAR_3,
  struct uu_workq_policy VAR_4, struct uu_workq_policy VAR_5,
  bool VAR_6)
{
 thread_qos_t VAR_7 = VAR_4.qos_bucket;
 thread_qos_t VAR_8 = FUNC_2(VAR_5);

 if (VAR_7 != VAR_8) {
  FUNC_0(VAR_2, VAR_7, VAR_8);
 }

 VAR_5.qos_bucket = VAR_8;
 VAR_3->uu_workq_pri = VAR_5;

 if (FUNC_3(VAR_4) != VAR_8) {
  FUNC_1(VAR_3->uu_thread, VAR_8);
 }

 if (VAR_2->wq_reqcount && (VAR_7 > VAR_8 || VAR_6)) {
  int VAR_9 = VAR_0;
  if (VAR_7 > VAR_8) {
   VAR_9 = 0;
  }
  FUNC_4(VAR_1, VAR_2, VAR_9);
 }
}
