
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ipath_mmap_info {int pending_mmaps; int offset; } ;
struct ipath_ibdev {int pending_lock; int pending_mmaps; } ;
struct ipath_cq_wc {int head; int tail; int * kqueue; int * uqueue; } ;
struct TYPE_2__ {int cqe; } ;
struct ipath_cq {int lock; struct ipath_mmap_info* ip; struct ipath_cq_wc* queue; TYPE_1__ ibcq; } ;
struct ib_wc {int dummy; } ;
struct ib_uverbs_wc {int dummy; } ;
struct ib_udata {int outlen; } ;
struct ib_cq {int device; } ;
typedef int offset ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_udata*,int *,int) ;
 int VAR_2 ;
 int FUNC_1 (struct ipath_ibdev*,struct ipath_mmap_info*,int,struct ipath_cq_wc*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct ipath_cq* FUNC_6 (struct ib_cq*) ;
 struct ipath_ibdev* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct ipath_cq_wc*) ;
 struct ipath_cq_wc* FUNC_10 (int) ;

int FUNC_11(struct ib_cq *VAR_3, int VAR_4, struct ib_udata *VAR_5)
{
 struct ipath_cq *VAR_6 = FUNC_6(VAR_3);
 struct ipath_cq_wc *VAR_7;
 struct ipath_cq_wc *VAR_8;
 u32 VAR_9, VAR_10, VAR_11;
 int VAR_12;
 u32 VAR_13;

 if (VAR_4 < 1 || VAR_4 > VAR_2) {
  VAR_12 = -VAR_0;
  goto bail;
 }




 VAR_13 = sizeof(*VAR_8);
 if (VAR_5 && VAR_5->outlen >= sizeof(__u64))
  VAR_13 += sizeof(struct ib_uverbs_wc) * (VAR_4 + 1);
 else
  VAR_13 += sizeof(struct ib_wc) * (VAR_4 + 1);
 VAR_8 = FUNC_10(VAR_13);
 if (!VAR_8) {
  VAR_12 = -VAR_1;
  goto bail;
 }


 if (VAR_5 && VAR_5->outlen >= sizeof(__u64)) {
  __u64 VAR_14 = 0;

  VAR_12 = FUNC_0(VAR_5, &VAR_14, sizeof(VAR_14));
  if (VAR_12)
   goto bail_free;
 }

 FUNC_4(&VAR_6->lock);




 VAR_7 = VAR_6->queue;
 VAR_9 = VAR_7->head;
 if (VAR_9 > (u32) VAR_6->ibcq.cqe)
  VAR_9 = (u32) VAR_6->ibcq.cqe;
 VAR_10 = VAR_7->tail;
 if (VAR_10 > (u32) VAR_6->ibcq.cqe)
  VAR_10 = (u32) VAR_6->ibcq.cqe;
 if (VAR_9 < VAR_10)
  VAR_11 = VAR_6->ibcq.cqe + 1 + VAR_9 - VAR_10;
 else
  VAR_11 = VAR_9 - VAR_10;
 if (FUNC_8((u32)VAR_4 < VAR_11)) {
  VAR_12 = -VAR_0;
  goto bail_unlock;
 }
 for (VAR_11 = 0; VAR_10 != VAR_9; VAR_11++) {
  if (VAR_6->ip)
   VAR_8->uqueue[VAR_11] = VAR_7->uqueue[VAR_10];
  else
   VAR_8->kqueue[VAR_11] = VAR_7->kqueue[VAR_10];
  if (VAR_10 == (u32) VAR_6->ibcq.cqe)
   VAR_10 = 0;
  else
   VAR_10++;
 }
 VAR_6->ibcq.cqe = VAR_4;
 VAR_8->head = VAR_11;
 VAR_8->tail = 0;
 VAR_6->queue = VAR_8;
 FUNC_5(&VAR_6->lock);

 FUNC_9(VAR_7);

 if (VAR_6->ip) {
  struct ipath_ibdev *VAR_15 = FUNC_7(VAR_3->device);
  struct ipath_mmap_info *VAR_16 = VAR_6->ip;

  FUNC_1(VAR_15, VAR_16, VAR_13, VAR_8);





  if (VAR_5 && VAR_5->outlen >= sizeof(__u64)) {
   VAR_12 = FUNC_0(VAR_5, &VAR_16->offset,
            sizeof(VAR_16->offset));
   if (VAR_12)
    goto bail;
  }

  FUNC_4(&VAR_15->pending_lock);
  if (FUNC_3(&VAR_16->pending_mmaps))
   FUNC_2(&VAR_16->pending_mmaps, &VAR_15->pending_mmaps);
  FUNC_5(&VAR_15->pending_lock);
 }

 VAR_12 = 0;
 goto bail;

bail_unlock:
 FUNC_5(&VAR_6->lock);
bail_free:
 FUNC_9(VAR_8);
bail:
 return VAR_12;
}
