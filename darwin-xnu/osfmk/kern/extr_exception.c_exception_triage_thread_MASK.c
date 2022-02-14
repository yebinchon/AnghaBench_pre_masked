
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef TYPE_2__* task_t ;
typedef int mach_msg_type_number_t ;
typedef int mach_exception_data_t ;
typedef int lck_mtx_t ;
typedef scalar_t__ kern_return_t ;
typedef TYPE_3__* host_priv_t ;
typedef scalar_t__ exception_type_t ;
struct TYPE_9__ {int exc_actions; int lock; } ;
struct TYPE_8__ {int exc_actions; int itk_lock_data; } ;
struct TYPE_7__ {TYPE_2__* task; int exc_actions; int mutex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__,int ,int ,int ,int *) ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 () ;

kern_return_t
FUNC_6(
 exception_type_t VAR_9,
 mach_exception_data_t VAR_10,
 mach_msg_type_number_t VAR_11,
 thread_t VAR_12)
{
 task_t VAR_13;
 host_priv_t VAR_14;
 lck_mtx_t *VAR_15;
 kern_return_t VAR_16 = VAR_5;

 FUNC_0(VAR_9 != VAR_4);
 if (VAR_8) {
  FUNC_4("called exception_triage when it was forbidden by the boot environment");
 }




 VAR_15 = &VAR_12->mutex;
 if (VAR_6 == FUNC_1(VAR_9, VAR_12->exc_actions, VAR_15))
 {
  VAR_16 = FUNC_2(VAR_12, VAR_9, VAR_10, VAR_11, VAR_12->exc_actions, VAR_15);
  if (VAR_16 == VAR_6 || VAR_16 == VAR_7)
   goto out;
 }




 VAR_13 = VAR_12->task;
 VAR_15 = &VAR_13->itk_lock_data;
 if (VAR_6 == FUNC_1(VAR_9, VAR_13->exc_actions, VAR_15))
 {
  VAR_16 = FUNC_2(VAR_12, VAR_9, VAR_10, VAR_11, VAR_13->exc_actions, VAR_15);
  if (VAR_16 == VAR_6 || VAR_16 == VAR_7)
   goto out;
 }




 VAR_14 = FUNC_3();
 VAR_15 = &VAR_14->lock;

 if (VAR_6 == FUNC_1(VAR_9, VAR_14->exc_actions, VAR_15))
 {
  VAR_16 = FUNC_2(VAR_12, VAR_9, VAR_10, VAR_11, VAR_14->exc_actions, VAR_15);
  if (VAR_16 == VAR_6 || VAR_16 == VAR_7)
   goto out;
 }

out:
 if ((VAR_9 != VAR_1) && (VAR_9 != VAR_3) &&
     (VAR_9 != VAR_2) && (VAR_9 != VAR_0))
  FUNC_5();
 return VAR_16;
}
