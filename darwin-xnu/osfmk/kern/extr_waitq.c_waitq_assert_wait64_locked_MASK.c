
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int wait_timeout_urgency_t ;
typedef scalar_t__ wait_result_t ;
typedef int wait_interrupt_t ;
typedef int uint64_t ;
typedef TYPE_1__* thread_t ;
struct waitq_set {int dummy; } ;
struct waitq {uintptr_t waitq_eventmask; int waitq_fifo; } ;
typedef int spl_t ;
typedef struct waitq* event64_t ;
typedef int boolean_t ;
struct TYPE_8__ {scalar_t__ sched_pri; int options; int wait_timer_is_set; int wait_timer_active; int wait_timer; struct waitq* waitq; struct waitq* wait_event; scalar_t__ wait_result; int started; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct waitq* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 uintptr_t FUNC_0 (struct waitq*) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (char*,struct waitq*) ;
 int VAR_8 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,int *,int ,int ,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 struct waitq* FUNC_12 (struct waitq*) ;
 int FUNC_13 (struct waitq*) ;
 scalar_t__ FUNC_14 (struct waitq*) ;
 scalar_t__ FUNC_15 (struct waitq*) ;
 scalar_t__ FUNC_16 (struct waitq*) ;
 int FUNC_17 (struct waitq*) ;
 scalar_t__ FUNC_18 (struct waitq_set*) ;
 int FUNC_19 (struct waitq*) ;
 int FUNC_20 (struct waitq*,TYPE_1__*,int) ;
 int FUNC_21 (struct waitq*) ;
 int FUNC_22 (struct waitq*) ;
 int FUNC_23 (struct waitq_set*,int *,int ) ;

wait_result_t FUNC_24(struct waitq *VAR_9,
       event64_t VAR_10,
       wait_interrupt_t VAR_11,
       wait_timeout_urgency_t VAR_12,
       uint64_t VAR_13,
       uint64_t VAR_14,
       thread_t VAR_15)
{
 wait_result_t VAR_16;
 int VAR_17 = 0;
 struct waitq *VAR_18;
 uintptr_t VAR_19;
 spl_t VAR_20;






 FUNC_1(!VAR_15->started || VAR_15 == FUNC_2());

 if (VAR_15->waitq != ((void*)0))
  FUNC_3("thread already waiting on %p", VAR_15->waitq);

 if (FUNC_15(VAR_9)) {
  struct waitq_set *VAR_21 = (struct waitq_set *)VAR_9;




  if (VAR_10 == VAR_2 && FUNC_18(VAR_21)) {
   int VAR_22;





   VAR_22 = FUNC_23(VAR_21, ((void*)0),
       VAR_8);
   if (VAR_22 == VAR_7) {
    VAR_20 = FUNC_4();
    FUNC_6(VAR_15);
    VAR_15->wait_result = VAR_3;
    FUNC_8(VAR_15);
    FUNC_5(VAR_20);
    return VAR_3;
   }
  }
 }

 VAR_20 = FUNC_4();





 if (!FUNC_13(VAR_9)) {
  VAR_18 = FUNC_12(VAR_9);
  VAR_19 = FUNC_0(VAR_9);
  FUNC_17(VAR_18);
 } else {
  VAR_18 = VAR_9;
  VAR_19 = FUNC_0(VAR_10);
 }


 FUNC_6(VAR_15);
 if (VAR_15->sched_pri >= VAR_0)
  VAR_17 = 1;







 VAR_16 = FUNC_7(VAR_15, VAR_11);

 if (VAR_16 == VAR_4) {

  if (!VAR_18->waitq_fifo
      || (VAR_15->options & VAR_5) || VAR_17)
   FUNC_20(VAR_18, VAR_15, 0);
  else
   FUNC_20(VAR_18, VAR_15, 1);


  VAR_15->wait_event = VAR_10;
  VAR_15->waitq = VAR_9;

  if (VAR_13 != 0) {
   boolean_t VAR_23;

   VAR_23 = FUNC_9(&VAR_15->wait_timer,
          ((void*)0),
          VAR_13, VAR_14,
          VAR_12, VAR_1);
   if (!VAR_23)
    VAR_15->wait_timer_active++;
   VAR_15->wait_timer_is_set = VAR_6;
  }

  if (FUNC_14(VAR_18))
   VAR_18->waitq_eventmask |= VAR_19;

  FUNC_19(VAR_9);
 }


 FUNC_8(VAR_15);


 if (FUNC_16(VAR_18) && VAR_16 == VAR_4) {
  FUNC_10(FUNC_21(VAR_18));
  FUNC_11(FUNC_21(VAR_18));
 }


 if (VAR_18 != VAR_9) {
  FUNC_22(VAR_18);
 }

 FUNC_5(VAR_20);

 return VAR_16;
}
