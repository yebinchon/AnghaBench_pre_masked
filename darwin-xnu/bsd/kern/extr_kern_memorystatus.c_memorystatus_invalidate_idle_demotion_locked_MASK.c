
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {int p_memstat_dirty; scalar_t__ p_memstat_effectivepriority; int p_memstat_idledeadline; int p_pid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,int ,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_5(proc_t VAR_9, boolean_t VAR_10)
{
 boolean_t VAR_11 = VAR_0;
 boolean_t VAR_12 = VAR_0;

 if (!VAR_8 && !VAR_3) {
  return;
 }

 if ((VAR_9->p_memstat_dirty & VAR_1) == 0) {
  return;
 }

 if (FUNC_3(VAR_9)) {

  if (VAR_4 != VAR_5) {
   FUNC_1((VAR_9->p_memstat_dirty & VAR_1) == VAR_1);
  }

  if (FUNC_4(VAR_9) && VAR_8) {
   FUNC_1(VAR_9->p_memstat_effectivepriority == VAR_8);
   FUNC_1(VAR_9->p_memstat_idledeadline);
   VAR_11 = VAR_2;

  } else if (FUNC_2(VAR_9) && VAR_3) {
   FUNC_1(VAR_9->p_memstat_effectivepriority == VAR_3);
   FUNC_1(VAR_9->p_memstat_idledeadline);
   VAR_12 = VAR_2;
  }
 }

 FUNC_0(1, "memorystatus_invalidate_idle_demotion(): invalidating demotion to idle band for pid %d (clear_state %d, demotions %d).\n",
     VAR_9->p_pid, VAR_10, (VAR_7 + VAR_6));


 if (VAR_10) {
   VAR_9->p_memstat_idledeadline = 0;
   VAR_9->p_memstat_dirty &= ~VAR_1;
 }

  if (FUNC_4(VAR_9) &&VAR_11 == VAR_2) {
  VAR_7--;
  FUNC_1(VAR_7 >= 0);

 } else if (FUNC_2(VAR_9) && VAR_12 == VAR_2) {
  VAR_6--;
  FUNC_1(VAR_6 >= 0);
 }

  FUNC_1((VAR_7 + VAR_6) >= 0);
}
