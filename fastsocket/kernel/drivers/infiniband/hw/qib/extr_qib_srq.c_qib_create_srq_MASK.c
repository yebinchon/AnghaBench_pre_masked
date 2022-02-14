
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {scalar_t__ size; scalar_t__ max_sge; TYPE_4__* wq; int lock; } ;
struct ib_srq {int dummy; } ;
struct qib_srq {TYPE_3__ rq; struct qib_srq* ip; struct ib_srq ibsrq; int pending_mmaps; int limit; int offset; } ;
struct qib_rwqe {int dummy; } ;
struct qib_rwq {int dummy; } ;
struct qib_ibdev {scalar_t__ n_srqs_allocated; int pending_lock; int pending_mmaps; int n_srqs_lock; } ;
struct ib_udata {int outlen; } ;
struct TYPE_8__ {scalar_t__ max_sge; scalar_t__ max_wr; int srq_limit; } ;
struct ib_srq_init_attr {scalar_t__ srq_type; TYPE_2__ attr; } ;
struct ib_sge {int dummy; } ;
struct ib_pd {TYPE_1__* uobject; int device; } ;
typedef int __u64 ;
struct TYPE_10__ {scalar_t__ tail; scalar_t__ head; } ;
struct TYPE_7__ {int context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ib_srq* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct ib_udata*,int *,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct qib_srq*) ;
 struct qib_srq* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 struct qib_srq* FUNC_5 (struct qib_ibdev*,int,int ,TYPE_4__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct qib_ibdev* FUNC_11 (int ) ;
 int FUNC_12 (TYPE_4__*) ;
 TYPE_4__* FUNC_13 (int) ;

struct ib_srq *FUNC_14(struct ib_pd *VAR_8,
         struct ib_srq_init_attr *VAR_9,
         struct ib_udata *VAR_10)
{
 struct qib_ibdev *VAR_11 = FUNC_11(VAR_8->device);
 struct qib_srq *VAR_12;
 u32 VAR_13;
 struct ib_srq *VAR_14;

 if (VAR_9->srq_type != VAR_4) {
  VAR_14 = FUNC_0(-VAR_2);
  goto done;
 }

 if (VAR_9->attr.max_sge == 0 ||
     VAR_9->attr.max_sge > VAR_5 ||
     VAR_9->attr.max_wr == 0 ||
     VAR_9->attr.max_wr > VAR_6) {
  VAR_14 = FUNC_0(-VAR_0);
  goto done;
 }

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_3);
 if (!VAR_12) {
  VAR_14 = FUNC_0(-VAR_1);
  goto done;
 }




 VAR_12->rq.size = VAR_9->attr.max_wr + 1;
 VAR_12->rq.max_sge = VAR_9->attr.max_sge;
 VAR_13 = sizeof(struct ib_sge) * VAR_12->rq.max_sge +
  sizeof(struct qib_rwqe);
 VAR_12->rq.wq = FUNC_13(sizeof(struct qib_rwq) + VAR_12->rq.size * VAR_13);
 if (!VAR_12->rq.wq) {
  VAR_14 = FUNC_0(-VAR_1);
  goto bail_srq;
 }





 if (VAR_10 && VAR_10->outlen >= sizeof(__u64)) {
  int VAR_15;
  u32 VAR_16 = sizeof(struct qib_rwq) + VAR_12->rq.size * VAR_13;

  VAR_12->ip =
      FUNC_5(VAR_11, VAR_16, VAR_8->uobject->context,
      VAR_12->rq.wq);
  if (!VAR_12->ip) {
   VAR_14 = FUNC_0(-VAR_1);
   goto bail_wq;
  }

  VAR_15 = FUNC_1(VAR_10, &VAR_12->ip->offset,
           sizeof(VAR_12->ip->offset));
  if (VAR_15) {
   VAR_14 = FUNC_0(VAR_15);
   goto bail_ip;
  }
 } else
  VAR_12->ip = ((void*)0);




 FUNC_7(&VAR_12->rq.lock);
 VAR_12->rq.wq->head = 0;
 VAR_12->rq.wq->tail = 0;
 VAR_12->limit = VAR_9->attr.srq_limit;

 FUNC_6(&VAR_11->n_srqs_lock);
 if (VAR_11->n_srqs_allocated == VAR_7) {
  FUNC_9(&VAR_11->n_srqs_lock);
  VAR_14 = FUNC_0(-VAR_1);
  goto bail_ip;
 }

 VAR_11->n_srqs_allocated++;
 FUNC_9(&VAR_11->n_srqs_lock);

 if (VAR_12->ip) {
  FUNC_8(&VAR_11->pending_lock);
  FUNC_4(&VAR_12->ip->pending_mmaps, &VAR_11->pending_mmaps);
  FUNC_10(&VAR_11->pending_lock);
 }

 VAR_14 = &VAR_12->ibsrq;
 goto done;

bail_ip:
 FUNC_2(VAR_12->ip);
bail_wq:
 FUNC_12(VAR_12->rq.wq);
bail_srq:
 FUNC_2(VAR_12);
done:
 return VAR_14;
}
