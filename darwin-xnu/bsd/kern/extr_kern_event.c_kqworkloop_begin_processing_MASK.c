
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ thread_t ;
typedef scalar_t__ thread_qos_t ;
struct kqueue {int kq_state; } ;
struct kqrequest {scalar_t__ kqr_thread; int kqr_state; int kqr_wakeup_indexes; int kqr_suppressed; } ;
struct kqworkloop {int kqwl_dynamicid; scalar_t__ kqwl_owner; int * kqwl_queue; struct kqueue kqwl_kqueue; struct kqrequest kqwl_request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ,int ) ;
 unsigned int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct kqworkloop*) ;
 int FUNC_5 (struct kqworkloop*) ;
 int FUNC_6 (struct kqueue*) ;
 int FUNC_7 (struct kqworkloop*,int ) ;
 scalar_t__ FUNC_8 (struct kqworkloop*) ;
 scalar_t__ FUNC_9 (struct kqworkloop*,scalar_t__) ;
 int FUNC_10 (struct kqworkloop*,int,scalar_t__) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static int
FUNC_12(struct kqworkloop *VAR_15, unsigned int VAR_16)
{
 struct kqrequest *VAR_17 = &VAR_15->kqwl_request;
 struct kqueue *VAR_18 = &VAR_15->kqwl_kqueue;
 thread_qos_t VAR_19 = VAR_14, VAR_20;
 thread_t VAR_21 = VAR_17->kqr_thread;
 int VAR_22 = 0, VAR_23 = VAR_9;

 FUNC_6(VAR_18);

 FUNC_0(FUNC_1(VAR_0) | VAR_2,
               VAR_15->kqwl_dynamicid, 0, 0);


 FUNC_3((VAR_18->kq_state & VAR_13) == 0);

 VAR_18->kq_state |= VAR_13;

 if (!FUNC_2(&VAR_17->kqr_suppressed)) {
  VAR_23 = VAR_11;
 }

 if (VAR_16 & VAR_3) {
  if (VAR_17->kqr_state & VAR_4) {
   VAR_23 = VAR_10;
  } else {
   VAR_23 = VAR_12;
  }
 }
 if (VAR_23 == VAR_9) {
  goto done;
 }

 VAR_20 = FUNC_8(VAR_15);

 FUNC_4(VAR_15);

 if (VAR_23 == VAR_12) {
  VAR_19 = FUNC_9(VAR_15, VAR_21);
  (void)FUNC_7(VAR_15, VAR_6);
 }
 FUNC_10(VAR_15, VAR_23, VAR_20);
 if (VAR_23 == VAR_10) {
  if (!FUNC_2(&VAR_15->kqwl_queue[VAR_7])) {





  } else if ((VAR_17->kqr_state & VAR_5) == 0 || VAR_15->kqwl_owner) {
   VAR_19 = FUNC_9(VAR_15, VAR_21);
   (void)FUNC_7(VAR_15, VAR_6);
   VAR_22 = -1;
  }
 } else if (VAR_23 == VAR_12) {
  if (VAR_17->kqr_thread == VAR_21) {




  } else {
   VAR_22 = -1;
  }
 }

 if (VAR_22 == 0) {




  VAR_17->kqr_wakeup_indexes &= ~VAR_8;
 } else {
  VAR_18->kq_state &= ~VAR_13;
 }

 FUNC_5(VAR_15);

 if (VAR_19) {
  FUNC_11(VAR_21);
 }

done:
 FUNC_0(FUNC_1(VAR_0) | VAR_1,
               VAR_15->kqwl_dynamicid, 0, 0);

 return VAR_22;
}
