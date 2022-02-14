
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
typedef scalar_t__ int32_t ;
struct TYPE_5__ {int p_memstat_dirty; scalar_t__ p_memstat_requestedpriority; scalar_t__ p_memstat_effectivepriority; int p_memstat_state; int p_pid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int,int) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_4(proc_t VAR_9) {
 int32_t VAR_10;

 FUNC_0(1, "memorystatus_update_idle_priority_locked(): pid %d dirty 0x%X\n", VAR_9->p_pid, VAR_9->p_memstat_dirty);

 FUNC_1(FUNC_2(VAR_9));

 if ((VAR_9->p_memstat_dirty & (VAR_3|VAR_4)) == VAR_3) {

  VAR_10 = (VAR_9->p_memstat_dirty & VAR_2) ? VAR_8 : VAR_1;
 } else {
  VAR_10 = VAR_9->p_memstat_requestedpriority;
 }

 if (VAR_10 != VAR_9->p_memstat_effectivepriority) {

  if ((VAR_6 == VAR_7) &&
      (VAR_10 == VAR_1)) {
   if (VAR_9->p_memstat_state & VAR_5) {
    VAR_10 = VAR_0;
   }

   FUNC_3(VAR_9, VAR_10, 0, 1);

  } else {
   FUNC_3(VAR_9, VAR_10, 0, 0);
  }
 }
}
