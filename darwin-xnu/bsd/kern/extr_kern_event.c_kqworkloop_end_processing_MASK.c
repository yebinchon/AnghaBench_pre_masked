
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
typedef size_t thread_qos_t ;
struct kqrequest {int kqr_state; int kqr_wakeup_indexes; int kqr_thread; } ;
struct kqueue {int kq_state; } ;
struct kqworkloop {int kqwl_dynamicid; int kqwl_owner; int * kqwl_queue; struct kqrequest kqwl_request; struct kqueue kqwl_kqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ,int ) ;
 int VAR_3 ;
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
 int FUNC_2 (int *) ;
 size_t VAR_13 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct kqworkloop*) ;
 int FUNC_5 (struct kqworkloop*) ;
 int FUNC_6 (struct kqueue*) ;
 int FUNC_7 (struct kqworkloop*,int ) ;
 size_t FUNC_8 (struct kqworkloop*) ;
 size_t FUNC_9 (struct kqworkloop*,int ) ;
 int FUNC_10 (struct kqworkloop*,int ,size_t) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(struct kqworkloop *VAR_14, int VAR_15, int VAR_16)
{
 struct kqueue *VAR_17 = &VAR_14->kqwl_kqueue;
 struct kqrequest *VAR_18 = &VAR_14->kqwl_request;
 thread_qos_t VAR_19 = VAR_13, VAR_20;
 thread_t VAR_21 = VAR_18->kqr_thread;
 int VAR_22 = 0;

 FUNC_6(VAR_17);

 FUNC_0(FUNC_1(VAR_0) | VAR_2,
   VAR_14->kqwl_dynamicid, 0, 0);

 if (VAR_15 & VAR_12) {
  FUNC_3(VAR_17->kq_state & VAR_12);






  if (!FUNC_2(&VAR_14->kqwl_queue[VAR_7])) {
   FUNC_4(VAR_14);
   FUNC_10(VAR_14, VAR_11,
     VAR_7);
   FUNC_5(VAR_14);
  }
  if (VAR_16 & VAR_3) {
   VAR_20 = FUNC_8(VAR_14);
  }
 }

 FUNC_4(VAR_14);

 if (VAR_16 & VAR_3) {
  FUNC_10(VAR_14, VAR_9, VAR_20);
  if ((VAR_18->kqr_state & VAR_5) && !VAR_14->kqwl_owner) {




   VAR_18->kqr_wakeup_indexes &= ~VAR_8;
   VAR_22 = -1;
  } else {
   VAR_19 = FUNC_9(VAR_14, VAR_21);
   (void)FUNC_7(VAR_14, VAR_6);
   VAR_17->kq_state &= ~VAR_15;
  }
 } else {
  VAR_17->kq_state &= ~VAR_15;
  VAR_18->kqr_state |= VAR_4;
  FUNC_10(VAR_14, VAR_10, 0);
 }

 FUNC_5(VAR_14);

 if (VAR_19) {
  FUNC_11(VAR_21);
 }

 FUNC_0(FUNC_1(VAR_0) | VAR_1,
   VAR_14->kqwl_dynamicid, 0, 0);

 return VAR_22;
}
