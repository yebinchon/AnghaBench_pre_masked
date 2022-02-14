
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ thread_t ;
typedef scalar_t__ thread_qos_t ;
struct uthread {struct kqrequest* uu_kqr_bound; } ;
struct kqworkq {int kqwq_kqueue; } ;
struct kqrequest {scalar_t__ kqr_thread; int kqr_state; int kqr_qos_index; int kqr_suppressed; } ;
struct knote {int kn_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 struct knote* FUNC_1 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 struct uthread* FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct knote*) ;
 int FUNC_6 (struct kqworkq*) ;
 int FUNC_7 (struct kqworkq*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct kqrequest*,int ,int ) ;
 scalar_t__ FUNC_10 (struct kqworkq*,struct kqrequest*,scalar_t__) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static int
FUNC_12(struct kqworkq *VAR_8, struct kqrequest *VAR_9,
  int VAR_10, int VAR_11)
{
 thread_qos_t VAR_12 = VAR_7;
 thread_t VAR_13 = VAR_9->kqr_thread;
 struct knote *VAR_14;
 int VAR_15 = 0;
 bool VAR_16 = 0, VAR_17;

 FUNC_8(&VAR_8->kqwq_kqueue);

 if (!FUNC_0(&VAR_9->kqr_suppressed)) {







  while ((VAR_14 = FUNC_1(&VAR_9->kqr_suppressed)) != ((void*)0)) {
   FUNC_2(VAR_14->kn_status & VAR_2);
   FUNC_5(VAR_14);
   if (VAR_14->kn_status & VAR_1) {
    VAR_16 = 1;
   }
  }
 }

 FUNC_6(VAR_8);
 if (VAR_11 == VAR_6) {
  VAR_17 = 1;
 } else if ((VAR_10 & VAR_0) == 0) {
  VAR_17 = 0;
 } else if (VAR_11 == VAR_5 && VAR_16) {





  VAR_17 = 0;
 } else {
  VAR_17 = ((VAR_9->kqr_state & VAR_4) == 0);
 }
 if (VAR_17) {
  VAR_12 = FUNC_10(VAR_8, VAR_9, VAR_13);
  VAR_15 = -1;




  if (VAR_9->kqr_state & VAR_4) {
   FUNC_9(&VAR_8->kqwq_kqueue, VAR_9,
     VAR_9->kqr_qos_index, 0);
  }
 }

 if (VAR_15 == 0) {





  VAR_9->kqr_state &= ~VAR_4;
 }

 FUNC_7(VAR_8);

 if (VAR_12) {
  FUNC_11(VAR_13);
 }

 return VAR_15;
}
