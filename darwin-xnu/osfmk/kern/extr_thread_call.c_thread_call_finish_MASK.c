
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef TYPE_2__* thread_call_t ;
typedef int thread_call_group_t ;
typedef scalar_t__ thread_call_flavor_t ;
typedef int spl_t ;
typedef int event_t ;
typedef int boolean_t ;
struct TYPE_10__ {TYPE_2__* func; } ;
struct TYPE_11__ {scalar_t__ tc_finish_count; int tc_flags; scalar_t__ tc_refs; scalar_t__ tc_soft_deadline; scalar_t__ tc_submit_count; TYPE_1__ tc_call; scalar_t__ tc_deadline; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char*,TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int VAR_10 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,TYPE_2__*) ;

__attribute__((used)) static boolean_t
FUNC_14(thread_call_t VAR_11, thread_call_group_t VAR_12, spl_t *VAR_13)
{
 uint64_t VAR_14;
 uint32_t VAR_15;
 boolean_t VAR_16;
 boolean_t VAR_17 = VAR_0;

 VAR_11->tc_finish_count++;
 VAR_15 = VAR_11->tc_flags;
 VAR_16 = ((VAR_6 & VAR_15) != 0);

    if (!VAR_16) {

  if (VAR_11->tc_refs <= 0)
   FUNC_8("thread_call_finish: detected over-released thread call: %p", VAR_11);
  VAR_11->tc_refs--;
    }

 VAR_11->tc_flags &= ~(VAR_4 | VAR_5 | VAR_7);

 if ((VAR_11->tc_refs != 0) && ((VAR_15 & VAR_4) != 0)) {
  FUNC_4(VAR_15 & VAR_3);
  thread_call_flavor_t VAR_18 = FUNC_9(VAR_11);

  if (VAR_2 & VAR_15) {
   VAR_14 = FUNC_7();
   if (VAR_18 == VAR_1) {
    VAR_14 = FUNC_3(VAR_14);
   }
   if (VAR_11->tc_soft_deadline <= VAR_14) {
    VAR_11->tc_flags &= ~(VAR_2 | VAR_8);
    VAR_11->tc_deadline = 0;
   }
  }
  if (VAR_11->tc_deadline) {
   FUNC_1(VAR_11, VAR_12, VAR_11->tc_deadline, VAR_18);
   if (!VAR_16) {
    FUNC_0(VAR_11, VAR_12, VAR_18);
   }
  } else if (VAR_16) {
   VAR_11->tc_submit_count++;
   VAR_17 = VAR_9;
  } else {
   FUNC_2(VAR_11, VAR_12);
  }
 }

 if (!VAR_16 && (VAR_11->tc_refs == 0)) {
  if ((VAR_15 & VAR_7) != 0) {
   FUNC_8("Someone waiting on a thread call that is scheduled for free: %p\n", VAR_11->tc_call.func);
  }

  FUNC_4(VAR_11->tc_finish_count == VAR_11->tc_submit_count);

  FUNC_6(*VAR_13);

  FUNC_13(VAR_10, VAR_11);

  *VAR_13 = FUNC_5();
 }

 if ((VAR_15 & VAR_7) != 0) {





  FUNC_11();
  FUNC_12((event_t)VAR_11);
  FUNC_10();

 }

 return (VAR_17);
}
