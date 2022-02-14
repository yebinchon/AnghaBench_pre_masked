
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef TYPE_1__* thread_t ;
typedef TYPE_2__* task_t ;
struct ledger {int dummy; } ;
typedef scalar_t__ kern_return_t ;
struct TYPE_8__ {scalar_t__ rusage_cpu_flags; scalar_t__ rusage_cpu_perthr_percentage; scalar_t__ rusage_cpu_perthr_interval; scalar_t__ halting; int active; } ;
struct TYPE_7__ {int options; struct ledger* t_threadledger; int active; TYPE_2__* task; struct ledger* t_ledger; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct ledger*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (struct ledger*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct ledger*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int*,scalar_t__*,scalar_t__*) ;
 int FUNC_11 (int ,scalar_t__,scalar_t__) ;

void
FUNC_12(thread_t VAR_6)
{
 struct ledger *VAR_7 = VAR_6->t_ledger;
 struct ledger *VAR_8;
 uint32_t VAR_9;
 uint64_t VAR_10;
 uint8_t VAR_11;
 uint8_t VAR_12;
 uint64_t VAR_13;

 kern_return_t VAR_14;
 task_t VAR_15 = VAR_6->task;

 FUNC_6(("Ledger AST for %p\n", VAR_6));

 FUNC_0(VAR_15 != ((void*)0));
 FUNC_0(VAR_6 == FUNC_3());

top:




 FUNC_8(VAR_15);
 VAR_11 = VAR_15->rusage_cpu_flags;
 VAR_12 = VAR_15->rusage_cpu_perthr_percentage;
 VAR_13 = VAR_15->rusage_cpu_perthr_interval;
 FUNC_9(VAR_15);





 if (((VAR_11 & VAR_1) != 0) &&
     ((VAR_6->options & VAR_5) == 0)) {
  uint8_t VAR_16;
  uint64_t VAR_17;
  int VAR_18;

  FUNC_10(&VAR_18, &VAR_16, &VAR_17);





  if (((VAR_6->options & VAR_4) == 0) ||
      (VAR_17 != VAR_13) || (VAR_16 != VAR_12)) {
   FUNC_11(VAR_3, VAR_12, VAR_13);
   FUNC_2((VAR_6->options & VAR_4) != 0);
  }
 } else if (((VAR_11 & VAR_1) == 0) &&
     (VAR_6->options & VAR_4)) {
  FUNC_2((VAR_6->options & VAR_5) == 0);





  FUNC_11(VAR_2, 0, 0);
  FUNC_2((VAR_6->options & VAR_4) == 0);
 }




 if ((VAR_7 == ((void*)0)) || !VAR_15->active || VAR_15->halting || !VAR_6->active)
  return;






 VAR_9 = 0;
 VAR_10 = FUNC_7();





 VAR_8 = VAR_6->t_threadledger;
 if (FUNC_1(VAR_8)) {
  VAR_9 |= FUNC_4(VAR_8, VAR_10);
 }
 VAR_9 |= FUNC_4(VAR_7, VAR_10);







 if (VAR_9) {
  if (FUNC_1(VAR_8)) {
   VAR_14 = FUNC_5(VAR_8);
   if (VAR_14 != VAR_0)
    goto top;
  }
  VAR_14 = FUNC_5(VAR_7);
  if (VAR_14 != VAR_0)
   goto top;
 }
}
