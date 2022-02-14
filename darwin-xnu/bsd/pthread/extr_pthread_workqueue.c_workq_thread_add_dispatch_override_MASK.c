
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ user_addr_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ thread_t ;
typedef scalar_t__ thread_qos_t ;
struct workqueue {int dummy; } ;
struct uu_workq_policy {scalar_t__ qos_override; } ;
struct uthread {struct uu_workq_policy uu_workq_pri; } ;
typedef int pthread_priority_t ;
typedef int proc_t ;
typedef scalar_t__ mach_port_name_t ;
typedef int kport ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,struct workqueue*,int ,int,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__*,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct uthread* FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 struct workqueue* FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (struct workqueue*) ;
 scalar_t__ FUNC_17 (struct uu_workq_policy) ;
 int FUNC_18 (int ,struct workqueue*,struct uthread*,struct uu_workq_policy,struct uu_workq_policy,int) ;
 int FUNC_19 (struct workqueue*) ;

__attribute__((used)) static int
FUNC_20(proc_t VAR_8, mach_port_name_t VAR_9,
  pthread_priority_t VAR_10, user_addr_t VAR_11)
{
 struct uu_workq_policy VAR_12, VAR_13;
 struct workqueue *VAR_14 = FUNC_8(VAR_8);

 thread_qos_t VAR_15 = FUNC_1(VAR_10);
 if (VAR_15 == VAR_5) {
  return VAR_1;
 }

 thread_t VAR_16 = FUNC_7(VAR_9);
 if (VAR_16 == VAR_4) {
  return VAR_3;
 }

 struct uthread *VAR_17 = FUNC_6(VAR_16);
 if ((FUNC_10(VAR_16) & VAR_6) == 0) {
  FUNC_9(VAR_16);
  return VAR_2;
 }

 FUNC_0(VAR_7 | VAR_0,
   VAR_14, FUNC_14(VAR_16), 1, VAR_10, 0);

 FUNC_11(VAR_16);

 if (VAR_11) {
  uint64_t VAR_18;
  int VAR_19;




  FUNC_4();
  VAR_19 = FUNC_2(VAR_11, &VAR_18, sizeof(VAR_9));
  FUNC_5();
  if (VAR_19 == 0 && FUNC_15((uint32_t)VAR_18) != VAR_9) {
   goto out;
  }
 }

 FUNC_16(VAR_14);

 VAR_12 = VAR_17->uu_workq_pri;
 if (VAR_12.qos_override >= VAR_15) {

 } else if (VAR_16 == FUNC_3()) {
  VAR_13 = VAR_12;
  VAR_13.qos_override = VAR_15;
  FUNC_18(VAR_8, VAR_14, VAR_17, VAR_12, VAR_13, 0);
 } else {
  VAR_17->uu_workq_pri.qos_override = VAR_15;
  if (VAR_15 > FUNC_17(VAR_12)) {
   FUNC_13(VAR_16, VAR_15);
  }
 }

 FUNC_19(VAR_14);

out:
 FUNC_12(VAR_16);
 FUNC_9(VAR_16);
 return 0;
}
