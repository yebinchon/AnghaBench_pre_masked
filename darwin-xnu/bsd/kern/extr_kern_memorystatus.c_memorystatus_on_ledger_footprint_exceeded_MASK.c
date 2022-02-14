
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
typedef TYPE_2__* os_reason_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_9__ {int osr_flags; } ;
struct TYPE_8__ {int p_pid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* FUNC_0 () ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,char*,int ) ;
 TYPE_2__* FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

void
FUNC_7(boolean_t VAR_10, boolean_t VAR_11, boolean_t VAR_12)
{
 os_reason_t VAR_13 = VAR_5;

 proc_t VAR_14 = FUNC_0();
 if (VAR_12) {




  VAR_13 = FUNC_4(VAR_4, VAR_1);
  if (VAR_13 == ((void*)0)) {
   FUNC_5("task_exceeded footprint: failed to allocate jetsam reason\n");
  } else if (VAR_7 != 0 && FUNC_6(VAR_14) == VAR_0) {

   VAR_13->osr_flags |= VAR_3;
  }

  if (FUNC_1(VAR_14->p_pid, VAR_8, VAR_13) != VAR_6) {
   FUNC_5("task_exceeded_footprint: failed to kill the current task (exiting?).\n");
  }
 } else {




  VAR_9 = VAR_6;
 }
}
