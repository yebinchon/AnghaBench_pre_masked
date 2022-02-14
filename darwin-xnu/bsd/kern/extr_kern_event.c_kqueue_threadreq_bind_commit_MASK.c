
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int thread_t ;
struct uthread {struct kqrequest* uu_kqr_bound; } ;
struct proc {int dummy; } ;
struct TYPE_2__ {scalar_t__ tr_state; } ;
struct kqrequest {TYPE_1__ kqr_req; } ;
typedef int kqueue_t ;


 scalar_t__ VAR_0 ;
 struct uthread* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct proc*,struct kqrequest*) ;
 int FUNC_4 (struct proc*,TYPE_1__*,int ,int ) ;

void
FUNC_5(struct proc *VAR_1, thread_t VAR_2)
{
 struct uthread *VAR_3 = FUNC_0(VAR_2);
 struct kqrequest *VAR_4 = VAR_3->uu_kqr_bound;
 kqueue_t VAR_5 = FUNC_3(VAR_1, VAR_4);

 FUNC_1(VAR_5);
 if (VAR_4->kqr_req.tr_state == VAR_0) {
  FUNC_4(VAR_1, &VAR_4->kqr_req, VAR_2, 0);
 }
 FUNC_2(VAR_5);
}
