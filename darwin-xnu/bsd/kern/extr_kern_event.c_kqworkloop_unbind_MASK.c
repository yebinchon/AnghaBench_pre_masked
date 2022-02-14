
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ thread_t ;
struct kqrequest {scalar_t__ kqr_thread; int kqr_suppressed; } ;
struct kqueue {int kq_state; } ;
struct kqworkloop {struct kqrequest kqwl_request; struct kqueue kqwl_kqueue; } ;
typedef int proc_t ;
typedef scalar_t__ kq_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct kqworkloop*) ;
 int FUNC_4 (struct kqworkloop*) ;
 int FUNC_5 (struct kqworkloop*) ;
 int FUNC_6 (int ,struct kqworkloop*) ;
 int FUNC_7 (struct kqworkloop*) ;
 scalar_t__ FUNC_8 (struct kqworkloop*) ;
 scalar_t__ FUNC_9 (struct kqworkloop*,scalar_t__) ;
 int FUNC_10 (struct kqworkloop*,int,scalar_t__) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static void
FUNC_12(proc_t VAR_3, struct kqworkloop *VAR_4)
{
 struct kqueue *VAR_5 = &VAR_4->kqwl_kqueue;
 struct kqrequest *VAR_6 = &VAR_4->kqwl_request;
 thread_t VAR_7 = VAR_6->kqr_thread;
 int VAR_8 = VAR_0;
 kq_index_t VAR_9, VAR_10 = VAR_2;

 FUNC_1(VAR_7 == FUNC_2());

 FUNC_5(VAR_4);






 FUNC_1((VAR_5->kq_state & VAR_1) == 0);
 if (!FUNC_0(&VAR_6->kqr_suppressed)) {
  VAR_5->kq_state |= VAR_1;
  VAR_10 = FUNC_8(VAR_4);
  VAR_5->kq_state &= ~VAR_1;
 }

 FUNC_3(VAR_4);

 VAR_9 = FUNC_9(VAR_4, VAR_7);
 FUNC_10(VAR_4, VAR_8, VAR_10);

 FUNC_4(VAR_4);

 FUNC_7(VAR_4);





 if (VAR_9) {
  FUNC_11(VAR_7);
 }


 FUNC_6(VAR_3, VAR_4);
}
