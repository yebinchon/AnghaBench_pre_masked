
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqrequest {int kqr_state; int kqr_thread; } ;
struct kqworkloop {struct kqrequest kqwl_request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kqworkloop*) ;

__attribute__((used)) static inline void
FUNC_3(struct kqworkloop *VAR_2)
{
 struct kqrequest *VAR_3 = &VAR_2->kqwl_request;

 FUNC_2(VAR_2);

 if (VAR_3->kqr_state & VAR_1) {
  FUNC_1(VAR_3->kqr_thread);
  VAR_3->kqr_state &= ~VAR_1;
  FUNC_0(VAR_3->kqr_thread, VAR_0);
 }
}
