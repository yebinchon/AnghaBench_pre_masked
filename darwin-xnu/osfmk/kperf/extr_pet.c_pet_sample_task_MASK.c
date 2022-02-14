
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ thread_t ;
typedef int task_t ;
struct kperf_context {int cur_pid; int cur_task; } ;
typedef scalar_t__ kern_return_t ;
struct TYPE_2__ {int logical_cpu_max; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct kperf_context*,int ,int ) ;
 scalar_t__* VAR_10 ;
 int FUNC_6 (int ,int ) ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (int,int ,scalar_t__,int ) ;
 scalar_t__* VAR_15 ;
 unsigned int VAR_16 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;

__attribute__((used)) static void
FUNC_14(task_t VAR_17, uint32_t VAR_18)
{
 FUNC_6(VAR_13, VAR_4);

 FUNC_1(VAR_6 | VAR_1);

 int VAR_19 = FUNC_9(VAR_17);
 if (FUNC_3(VAR_12)) {
  struct kperf_context VAR_20 = {
   .cur_task = VAR_17,
   .cur_pid = VAR_19,
  };

  FUNC_5(VAR_14, &VAR_20, VAR_12, VAR_7);
 }

 if (!FUNC_4(VAR_12)) {
  FUNC_1(VAR_6 | VAR_0);
  return;
 }

 kern_return_t VAR_21 = VAR_3;





 bool VAR_22 = VAR_17 != VAR_9;
 if (VAR_22) {
  VAR_21 = FUNC_11(VAR_17);
  if (VAR_21 != VAR_3) {
   FUNC_1(VAR_6 | VAR_0, 1);
   return;
  }
  VAR_22 = 1;
 }

 VAR_21 = FUNC_8(VAR_17);
 if (VAR_21 != VAR_3) {
  FUNC_0(VAR_5, VAR_2, VAR_21);
  goto out;
 }

 for (unsigned int VAR_23 = 0; VAR_23 < VAR_16; VAR_23++) {
  thread_t VAR_24 = VAR_15[VAR_23];
  FUNC_2(VAR_24 != VAR_8);




  int VAR_25 = 0;
  for (VAR_25 = 0; VAR_25 < VAR_11.logical_cpu_max; VAR_25++) {
   if (VAR_10[VAR_25] == FUNC_13(VAR_24)) {
    break;
   }
  }


  if (VAR_25 == VAR_11.logical_cpu_max) {
   FUNC_7(VAR_19, VAR_17, VAR_24, VAR_18);
  }

  FUNC_12(VAR_15[VAR_23]);
 }

out:
 if (VAR_22) {
  FUNC_10(VAR_17);
 }

 FUNC_1(VAR_6 | VAR_0, VAR_16);
}
