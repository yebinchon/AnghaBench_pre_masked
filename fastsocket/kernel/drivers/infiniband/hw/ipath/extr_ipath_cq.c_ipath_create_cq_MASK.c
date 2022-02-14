
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipath_ibdev {scalar_t__ n_cqs_allocated; int pending_lock; int pending_mmaps; int n_cqs_lock; } ;
struct ipath_cq_wc {scalar_t__ tail; scalar_t__ head; } ;
struct ib_cq {int cqe; } ;
struct ipath_cq {struct ipath_cq* ip; struct ib_cq ibcq; struct ipath_cq_wc* queue; int comptask; int lock; scalar_t__ triggered; int notify; int pending_mmaps; int offset; } ;
struct ib_wc {int dummy; } ;
struct ib_uverbs_wc {int dummy; } ;
struct ib_udata {int outlen; } ;
struct ib_ucontext {int dummy; } ;
struct ib_device {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_cq* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ib_udata*,int *,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct ipath_cq* FUNC_2 (struct ipath_ibdev*,int,struct ib_ucontext*,struct ipath_cq_wc*) ;
 int FUNC_3 (struct ipath_cq*) ;
 struct ipath_cq* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,unsigned long) ;
 struct ipath_ibdev* FUNC_12 (struct ib_device*) ;
 int FUNC_13 (struct ipath_cq_wc*) ;
 struct ipath_cq_wc* FUNC_14 (int) ;

struct ib_cq *FUNC_15(struct ib_device *VAR_7, int VAR_8, int VAR_9,
         struct ib_ucontext *VAR_10,
         struct ib_udata *VAR_11)
{
 struct ipath_ibdev *VAR_12 = FUNC_12(VAR_7);
 struct ipath_cq *VAR_13;
 struct ipath_cq_wc *VAR_14;
 struct ib_cq *VAR_15;
 u32 VAR_16;

 if (VAR_8 < 1 || VAR_8 > VAR_4) {
  VAR_15 = FUNC_0(-VAR_0);
  goto done;
 }


 VAR_13 = FUNC_4(sizeof(*VAR_13), VAR_2);
 if (!VAR_13) {
  VAR_15 = FUNC_0(-VAR_1);
  goto done;
 }
 VAR_16 = sizeof(*VAR_14);
 if (VAR_11 && VAR_11->outlen >= sizeof(__u64))
  VAR_16 += sizeof(struct ib_uverbs_wc) * (VAR_8 + 1);
 else
  VAR_16 += sizeof(struct ib_wc) * (VAR_8 + 1);
 VAR_14 = FUNC_14(VAR_16);
 if (!VAR_14) {
  VAR_15 = FUNC_0(-VAR_1);
  goto bail_cq;
 }





 if (VAR_11 && VAR_11->outlen >= sizeof(__u64)) {
  int VAR_17;

  VAR_13->ip = FUNC_2(VAR_12, VAR_16, VAR_10, VAR_14);
  if (!VAR_13->ip) {
   VAR_15 = FUNC_0(-VAR_1);
   goto bail_wc;
  }

  VAR_17 = FUNC_1(VAR_11, &VAR_13->ip->offset,
           sizeof(VAR_13->ip->offset));
  if (VAR_17) {
   VAR_15 = FUNC_0(VAR_17);
   goto bail_ip;
  }
 } else
  VAR_13->ip = ((void*)0);

 FUNC_6(&VAR_12->n_cqs_lock);
 if (VAR_12->n_cqs_allocated == VAR_5) {
  FUNC_9(&VAR_12->n_cqs_lock);
  VAR_15 = FUNC_0(-VAR_1);
  goto bail_ip;
 }

 VAR_12->n_cqs_allocated++;
 FUNC_9(&VAR_12->n_cqs_lock);

 if (VAR_13->ip) {
  FUNC_8(&VAR_12->pending_lock);
  FUNC_5(&VAR_13->ip->pending_mmaps, &VAR_12->pending_mmaps);
  FUNC_10(&VAR_12->pending_lock);
 }






 VAR_13->ibcq.cqe = VAR_8;
 VAR_13->notify = VAR_3;
 VAR_13->triggered = 0;
 FUNC_7(&VAR_13->lock);
 FUNC_11(&VAR_13->comptask, VAR_6, (unsigned long)VAR_13);
 VAR_14->head = 0;
 VAR_14->tail = 0;
 VAR_13->queue = VAR_14;

 VAR_15 = &VAR_13->ibcq;

 goto done;

bail_ip:
 FUNC_3(VAR_13->ip);
bail_wc:
 FUNC_13(VAR_14);
bail_cq:
 FUNC_3(VAR_13);
done:
 return VAR_15;
}
