
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_1__* proc_t ;
struct TYPE_9__ {int count; int list; } ;
typedef TYPE_2__ memstat_bucket_t ;
typedef size_t int32_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_8__ {int p_memstat_state; int p_listflag; size_t p_memstat_effectivepriority; size_t p_memstat_requestedpriority; scalar_t__ p_memstat_idle_start; int p_pid; scalar_t__ p_memstat_idle_delta; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ,int ,size_t,size_t,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 () ;
 TYPE_2__* VAR_8 ;
 int VAR_9 ;
 int FUNC_7 () ;
 int FUNC_8 () ;

int
FUNC_9(proc_t VAR_10, boolean_t VAR_11)
{

 if (!VAR_10 || (!FUNC_5(VAR_10)) || (VAR_10->p_memstat_state & (VAR_5 | VAR_6))) {
  return -1;
 }
 memstat_bucket_t *VAR_12, *VAR_13;
 int32_t VAR_14 = 0;

 FUNC_7();

 if (((VAR_10->p_listflag & VAR_3) != 0) ||
     (VAR_10->p_memstat_state & (VAR_4 | VAR_7))) {





  FUNC_8();
  return(0);
 }

 if (VAR_11) {
  VAR_12 = &VAR_8[VAR_10->p_memstat_effectivepriority];
  VAR_13 = &VAR_8[VAR_2];
  VAR_14 = VAR_2;
 } else {
  if (VAR_10->p_memstat_effectivepriority != VAR_2) {





   FUNC_8();
   return (0);
  }

  VAR_12 = &VAR_8[VAR_2];
  VAR_13 = &VAR_8[VAR_10->p_memstat_requestedpriority];
  VAR_14 = VAR_10->p_memstat_requestedpriority;
 }

 FUNC_3(&VAR_12->list, VAR_10, VAR_9);
 VAR_12->count--;

 FUNC_2(&VAR_13->list, VAR_10, VAR_9);
 VAR_13->count++;




 if (VAR_10->p_memstat_effectivepriority == VAR_14) {




 } else if (VAR_10->p_memstat_effectivepriority == VAR_2) {
  uint64_t VAR_15;




  FUNC_4(VAR_10->p_memstat_idle_start != 0);
  VAR_15 = FUNC_6();
  if (VAR_15 > VAR_10->p_memstat_idle_start) {
   VAR_10->p_memstat_idle_delta = VAR_15 - VAR_10->p_memstat_idle_start;
  }
 } else if (VAR_14 == VAR_2) {




  VAR_10->p_memstat_idle_start = FUNC_6();
 }

 FUNC_1(FUNC_0(VAR_1, VAR_0), VAR_10->p_pid, VAR_14, VAR_10->p_memstat_effectivepriority, 0, 0);

 VAR_10->p_memstat_effectivepriority = VAR_14;

 FUNC_8();

 return (0);






}
