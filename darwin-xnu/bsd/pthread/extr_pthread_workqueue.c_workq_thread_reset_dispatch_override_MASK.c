
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
struct workqueue {int dummy; } ;
struct uu_workq_policy {int qos_override; } ;
struct uthread {struct uu_workq_policy uu_workq_pri; } ;
typedef int proc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct workqueue*,int ,int ,int ,int ) ;
 struct uthread* FUNC_1 (int ) ;
 struct workqueue* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct workqueue*) ;
 int FUNC_5 (int ,struct workqueue*,struct uthread*,struct uu_workq_policy,struct uu_workq_policy,int) ;
 int FUNC_6 (struct workqueue*) ;

__attribute__((used)) static int
FUNC_7(proc_t VAR_5, thread_t VAR_6)
{
 struct uu_workq_policy VAR_7, VAR_8;
 struct workqueue *VAR_9 = FUNC_2(VAR_5);
 struct uthread *VAR_10 = FUNC_1(VAR_6);

 if ((FUNC_3(VAR_6) & VAR_3) == 0) {
  return VAR_1;
 }

 FUNC_0(VAR_4 | VAR_0, VAR_9, 0, 0, 0, 0);

 FUNC_4(VAR_9);
 VAR_7 = VAR_8 = VAR_10->uu_workq_pri;
 VAR_8.qos_override = VAR_2;
 FUNC_5(VAR_5, VAR_9, VAR_10, VAR_7, VAR_8, 0);
 FUNC_6(VAR_9);
 return 0;
}
