
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_10__ {scalar_t__ interval; scalar_t__ deadline; scalar_t__ preempted; TYPE_3__* call; } ;
struct TYPE_11__ {TYPE_1__ threshold; int enqueues; } ;
typedef TYPE_2__ timer_longterm_t ;
typedef TYPE_3__* timer_call_t ;
typedef int timer_call_param_t ;
typedef int mpqueue_head_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_13__ {int param1; scalar_t__ deadline; } ;
struct TYPE_12__ {int flags; int lock; scalar_t__ soft_deadline; scalar_t__ ttd; } ;


 scalar_t__ VAR_0 ;
 TYPE_8__* FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (int ,void (*) (void*),void*) ;
 TYPE_2__ VAR_5 ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

mpqueue_head_t *
FUNC_10(timer_call_t VAR_8,
    uint64_t VAR_9,
    uint64_t VAR_10,
    mpqueue_head_t **VAR_11,
    uint64_t VAR_12,
    uint64_t VAR_13,
    timer_call_param_t VAR_14,
    uint32_t VAR_15)
{
 timer_longterm_t *VAR_16 = &VAR_5;
 boolean_t VAR_17 = VAR_0;
 uint64_t VAR_18;

 VAR_18 = VAR_9 + VAR_16->threshold.interval;







 if ((VAR_15 & VAR_1) != 0 ||
     (VAR_16->threshold.interval == VAR_2) ||
  (VAR_10 <= VAR_18))
  return ((void*)0);




 *VAR_11 = FUNC_5(VAR_8);





 FUNC_1(!FUNC_2());
 FUNC_3(&VAR_8->lock);
 FUNC_8(VAR_6);
 FUNC_0(VAR_8)->deadline = VAR_10;
 FUNC_0(VAR_8)->param1 = VAR_14;
 VAR_8->ttd = VAR_13;
 VAR_8->soft_deadline = VAR_12;
 VAR_8->flags = VAR_15;
 FUNC_6(VAR_8, VAR_6);

 VAR_16->enqueues++;





 if (VAR_10 < VAR_16->threshold.deadline &&
     VAR_10 < VAR_16->threshold.preempted) {
  VAR_16->threshold.preempted = VAR_10;
  VAR_16->threshold.call = VAR_8;
  VAR_17 = VAR_3;
 }
 FUNC_9(VAR_6);
 FUNC_4(&VAR_8->lock);

 if (VAR_17) {




  FUNC_7(
   VAR_4,
   (void (*)(void *)) VAR_7,
   (void *)VAR_16);
 }

 return VAR_6;
}
