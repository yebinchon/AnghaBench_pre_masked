
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_1__* proc_t ;
struct TYPE_10__ {scalar_t__ count; int list; } ;
typedef TYPE_2__ memstat_bucket_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_9__ {int p_memstat_state; size_t p_memstat_effectivepriority; scalar_t__ p_memstat_idle_start; scalar_t__ p_memstat_freeze_sharedanon_pages; scalar_t__ p_memstat_idle_delta; int p_pid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 () ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 TYPE_2__* VAR_16 ;
 int VAR_17 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 size_t VAR_18 ;

int
FUNC_11(proc_t VAR_19, boolean_t VAR_20)
{
 int VAR_21;
 memstat_bucket_t *VAR_22;
 boolean_t VAR_23 = VAR_1;

 FUNC_0(1, "memorystatus_list_remove: removing pid %d\n", VAR_19->p_pid);

    if (!VAR_20) {
        FUNC_9();
    }

 FUNC_2(!(VAR_19->p_memstat_state & VAR_4));

 VAR_22 = &VAR_16[VAR_19->p_memstat_effectivepriority];

 if (FUNC_4(VAR_19) && VAR_18 && (VAR_19->p_memstat_effectivepriority == VAR_18)) {

  FUNC_2(VAR_22->count == VAR_14);
  VAR_23 = VAR_7;

 } else if (FUNC_3(VAR_19) && VAR_8 && (VAR_19->p_memstat_effectivepriority == VAR_8)) {

  FUNC_2(VAR_22->count == VAR_13);
  VAR_23 = VAR_7;
 }





 if (VAR_19->p_memstat_effectivepriority == VAR_2) {
  uint64_t VAR_24 = FUNC_5();
  if (VAR_24 > VAR_19->p_memstat_idle_start) {
   VAR_19->p_memstat_idle_delta = VAR_24 - VAR_19->p_memstat_idle_start;
  }
 }

 FUNC_1(&VAR_22->list, VAR_19, VAR_17);
 VAR_22->count--;

 VAR_11--;


 if (VAR_23) {
  FUNC_7(VAR_19, VAR_7);
   FUNC_8();
 }

 FUNC_6();
    if (!VAR_20) {
        FUNC_10();
    }

 if (VAR_19) {
  VAR_21 = 0;
 } else {
  VAR_21 = VAR_0;
 }

 return VAR_21;
}
