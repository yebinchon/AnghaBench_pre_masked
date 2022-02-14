
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct kqtailq {int dummy; } ;
struct knote {int kn_qos_index; } ;
struct TYPE_12__ {TYPE_4__* kqf; TYPE_3__* kqwl; TYPE_1__* kq; int kqwq; } ;
typedef TYPE_5__ kqueue_t ;
struct TYPE_13__ {struct kqtailq kqr_suppressed; } ;
struct TYPE_11__ {struct kqtailq kqf_suppressed; } ;
struct TYPE_9__ {struct kqtailq kqr_suppressed; } ;
struct TYPE_10__ {TYPE_2__ kqwl_request; } ;
struct TYPE_8__ {int kq_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_0 (int ,int ) ;

__attribute__((used)) static struct kqtailq *
FUNC_1(kqueue_t VAR_2, struct knote *VAR_3)
{
 if (VAR_2.kq->kq_state & VAR_1) {
  return &FUNC_0(VAR_2.kqwq, VAR_3->kn_qos_index)->kqr_suppressed;
 } else if (VAR_2.kq->kq_state & VAR_0) {
  return &VAR_2.kqwl->kqwl_request.kqr_suppressed;
 } else {
  return &VAR_2.kqf->kqf_suppressed;
 }
}
