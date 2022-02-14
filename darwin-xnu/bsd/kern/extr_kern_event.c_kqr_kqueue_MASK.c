
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct kqworkq {struct kqrequest* kqwq_request; } ;
struct kqrequest {int kqr_state; } ;
typedef TYPE_2__* proc_t ;
struct TYPE_8__ {struct kqworkq* kqwq; int kqwl; } ;
typedef TYPE_3__ kqueue_t ;
struct TYPE_7__ {TYPE_1__* p_fd; } ;
struct TYPE_6__ {scalar_t__ fd_wqkqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kqrequest*) ;

__attribute__((used)) static inline kqueue_t
FUNC_2(proc_t VAR_2, struct kqrequest *VAR_3)
{
 kqueue_t VAR_4;
 if (VAR_3->kqr_state & VAR_0) {
  VAR_4.kqwl = FUNC_1(VAR_3);
 } else {
  VAR_4.kqwq = (struct kqworkq *)VAR_2->p_fd->fd_wqkqueue;
  FUNC_0(VAR_3 >= VAR_4.kqwq->kqwq_request &&
    VAR_3 < VAR_4.kqwq->kqwq_request + VAR_1);
 }
 return VAR_4;
}
