
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * thread_t ;
struct uthread {int uu_kqueue_override; } ;
struct kqueue {int dummy; } ;
struct kqrequest {int kqr_wakeup_indexes; int kqr_stayactive_qos; int kqr_state; int kqr_override_index; int kqr_qos_index; int * kqr_thread; int kqr_suppressed; } ;
struct kqworkloop {int kqwl_dynamicid; int * kqwl_owner; int * kqwl_queue; struct kqueue kqwl_kqueue; struct kqrequest kqwl_request; } ;
typedef int kq_index_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 struct uthread* FUNC_5 (int *) ;
 int FUNC_6 (struct kqworkloop*) ;
 int FUNC_7 (struct kqworkloop*) ;
 int FUNC_8 (struct kqueue*,struct kqrequest*,int,int) ;
 int FUNC_9 (struct kqueue*,struct kqrequest*,int) ;
 int FUNC_10 (struct kqworkloop*) ;
 int FUNC_11 (struct kqworkloop*) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int) ;

__attribute__((used)) static void
FUNC_17(struct kqworkloop *VAR_9, int VAR_10, kq_index_t VAR_11)
{
 struct kqrequest *VAR_12 = &VAR_9->kqwl_request;
 struct kqueue *VAR_13 = &VAR_9->kqwl_kqueue;
 kq_index_t VAR_14 = FUNC_10(VAR_9);
 kq_index_t VAR_15;


 FUNC_6(VAR_9);

 switch (VAR_10) {
 case 128:
  if (VAR_11 == VAR_4) {
   VAR_12->kqr_wakeup_indexes |= VAR_5;
   VAR_11 = VAR_12->kqr_stayactive_qos;
   FUNC_3(VAR_11);
  }
  if (VAR_12->kqr_wakeup_indexes & (1 << VAR_11)) {
   FUNC_3(VAR_12->kqr_state & VAR_3);
   break;
  }

  VAR_12->kqr_wakeup_indexes |= (1 << VAR_11);
  VAR_12->kqr_state |= VAR_3;
  FUNC_11(VAR_9);
  goto recompute;

 case 130:
  FUNC_3(VAR_11);
  if (VAR_12->kqr_stayactive_qos < VAR_11) {
   VAR_12->kqr_stayactive_qos = VAR_11;
   if (VAR_12->kqr_wakeup_indexes & VAR_5) {
    FUNC_3(VAR_12->kqr_state & VAR_3);
    VAR_12->kqr_wakeup_indexes |= (1 << VAR_11);
    goto recompute;
   }
  }
  break;

 case 136:
 case 131:
  VAR_12->kqr_override_index = VAR_11;

 case 135:
  if (VAR_10 == 135) {
   FUNC_3(VAR_11 == VAR_6);
  }
  FUNC_7(VAR_9);
  VAR_15 = VAR_4;
  if (FUNC_2(&VAR_12->kqr_suppressed)) {
   VAR_12->kqr_override_index = VAR_6;
  }
  if (!FUNC_2(&VAR_9->kqwl_queue[VAR_15]) &&
    (VAR_12->kqr_wakeup_indexes & VAR_5)) {






   VAR_12->kqr_wakeup_indexes &= VAR_5;
   VAR_12->kqr_wakeup_indexes |= (1 << VAR_12->kqr_stayactive_qos);
  } else {
   VAR_12->kqr_wakeup_indexes = 0;
  }
  for (VAR_15 = VAR_6 + 1; VAR_15 < VAR_4; VAR_15++) {
   if (!FUNC_2(&VAR_9->kqwl_queue[VAR_15])) {
    VAR_12->kqr_wakeup_indexes |= (1 << VAR_15);
   }
  }
  if (VAR_12->kqr_wakeup_indexes) {
   VAR_12->kqr_state |= VAR_3;
   FUNC_11(VAR_9);
  } else {
   VAR_12->kqr_state &= ~VAR_3;
  }
  goto recompute;

 case 133:
  VAR_12->kqr_override_index = VAR_11;
  goto recompute;

 case 129:
 recompute:
  if (VAR_12->kqr_wakeup_indexes > (1 << VAR_11)) {
   VAR_11 = FUNC_4(VAR_12->kqr_wakeup_indexes) - 1;
  }
  if (VAR_12->kqr_override_index < VAR_11) {
   VAR_12->kqr_override_index = VAR_11;
  }
  break;

 case 134:
  break;

 case 132:
  VAR_12->kqr_qos_index = VAR_11;
  break;

 default:
  FUNC_12("unknown kqwl thread qos update operation: %d", VAR_10);
 }

 thread_t VAR_16 = VAR_9->kqwl_owner;
 thread_t VAR_17 = VAR_12->kqr_thread;
 boolean_t VAR_18 = VAR_1;
 kq_index_t VAR_19 = FUNC_10(VAR_9);




 if (VAR_16) {






  if (VAR_19 == VAR_14) {

  } else if (VAR_14 == VAR_6) {
   FUNC_13(VAR_16, VAR_19);
  } else if (VAR_19 == VAR_6) {
   FUNC_14(VAR_16);
  } else {
   FUNC_16(VAR_16, VAR_19);
  }
 }




 if ((VAR_12->kqr_state & VAR_2) == 0) {
  if (VAR_16 == ((void*)0) && (VAR_12->kqr_state & VAR_3)) {
   int VAR_20 = 0;
   if (VAR_10 == 131) {
    VAR_20 = VAR_8;
   }
   FUNC_8(VAR_13, VAR_12, VAR_19,
     VAR_20);
  }
 } else if (VAR_17) {





  struct uthread *VAR_21 = FUNC_5(VAR_17);
  if (VAR_21->uu_kqueue_override != VAR_12->kqr_override_index) {
   if (VAR_21->uu_kqueue_override == VAR_6) {
    FUNC_13(VAR_17, VAR_12->kqr_override_index);
   } else if (VAR_12->kqr_override_index == VAR_6) {
    FUNC_14(VAR_17);
   } else {
    FUNC_16(VAR_17, VAR_12->kqr_override_index);
   }
   VAR_21->uu_kqueue_override = VAR_12->kqr_override_index;
   VAR_18 = VAR_7;
  }
 } else if (VAR_19 == VAR_6) {







 } else if (VAR_14 != VAR_19) {





  FUNC_9(VAR_13, VAR_12, VAR_19);
  VAR_18 = VAR_7;
 }

 if (VAR_18) {
  FUNC_0(FUNC_1(VAR_0), VAR_9->kqwl_dynamicid,
    FUNC_15(VAR_12->kqr_thread), VAR_12->kqr_qos_index,
    (VAR_12->kqr_override_index << 16) | VAR_12->kqr_state);
 }
}
