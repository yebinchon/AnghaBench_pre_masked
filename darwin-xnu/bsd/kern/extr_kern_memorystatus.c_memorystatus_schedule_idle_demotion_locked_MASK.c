
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* proc_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {int p_memstat_state; int p_memstat_dirty; int p_memstat_idledeadline; int p_pid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,int ,int,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 () ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static void
FUNC_6(proc_t VAR_14, boolean_t VAR_15)
{
 boolean_t VAR_16 = VAR_0;
 boolean_t VAR_17 = VAR_0;
 uint64_t VAR_18 = 0;

 if (VAR_6 == VAR_8) {
  return;
 }

 if (VAR_14->p_memstat_state & VAR_3) {



  return;
 }

 if (FUNC_3(VAR_14)){

  if (VAR_6 != VAR_7) {
   FUNC_1((VAR_14->p_memstat_dirty & VAR_1) != VAR_1);
  }

  if (FUNC_4(VAR_14) && VAR_13) {
   VAR_16 = VAR_4;

  } else if (FUNC_2(VAR_14) && VAR_5) {
   VAR_17 = VAR_4;
  }
 }

 FUNC_1(!VAR_16);
 FUNC_1(!VAR_17);

 FUNC_0(1, "memorystatus_schedule_idle_demotion_locked: scheduling demotion to idle band for pid %d (dirty:0x%x, set_state %d, demotions %d).\n",
     VAR_14->p_pid, VAR_14->p_memstat_dirty, VAR_15, (VAR_11 + VAR_10));

 if(FUNC_4(VAR_14)) {
  FUNC_1((VAR_14->p_memstat_dirty & VAR_2) == VAR_2);
 }

 VAR_18 = (FUNC_4(VAR_14)) ? VAR_12 : VAR_9;

 if (VAR_15) {
  VAR_14->p_memstat_dirty |= VAR_1;
  VAR_14->p_memstat_idledeadline = FUNC_5() + VAR_18;
 }

 FUNC_1(VAR_14->p_memstat_idledeadline);

  if (FUNC_4(VAR_14) && VAR_16 == VAR_0) {
  VAR_11++;

 } else if (FUNC_2(VAR_14) && VAR_17 == VAR_0) {
  VAR_10++;
 }
}
