
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct mthca_resize_cq {int lkey; } ;
struct TYPE_6__ {int max_cqes; } ;
struct mthca_dev {TYPE_1__ limits; } ;
struct TYPE_7__ {int lkey; } ;
struct TYPE_8__ {TYPE_2__ ibmr; } ;
struct mthca_cq_buf {TYPE_3__ mr; } ;
struct TYPE_9__ {int cqe; } ;
struct mthca_cq {int mutex; int lock; TYPE_5__* resize_buf; TYPE_4__ ibcq; struct mthca_cq_buf buf; scalar_t__ is_kernel; int cqn; } ;
struct ib_udata {int dummy; } ;
struct ib_cq {int cqe; int device; } ;
struct TYPE_10__ {int cqe; scalar_t__ state; struct mthca_cq_buf buf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mthca_resize_cq*,struct ib_udata*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (struct mthca_dev*,int ,int ,int ) ;
 int FUNC_4 (struct mthca_dev*,struct mthca_cq*,int) ;
 int FUNC_5 (struct mthca_cq*) ;
 int FUNC_6 (struct mthca_dev*,struct mthca_cq_buf*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct mthca_cq* FUNC_12 (struct ib_cq*) ;
 struct mthca_dev* FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct ib_cq *VAR_3, int VAR_4, struct ib_udata *VAR_5)
{
 struct mthca_dev *VAR_6 = FUNC_13(VAR_3->device);
 struct mthca_cq *VAR_7 = FUNC_12(VAR_3);
 struct mthca_resize_cq VAR_8;
 u32 VAR_9;
 int VAR_10;

 if (VAR_4 < 1 || VAR_4 > VAR_6->limits.max_cqes)
  return -VAR_2;

 FUNC_7(&VAR_7->mutex);

 VAR_4 = FUNC_9(VAR_4 + 1);
 if (VAR_4 == VAR_3->cqe + 1) {
  VAR_10 = 0;
  goto out;
 }

 if (VAR_7->is_kernel) {
  VAR_10 = FUNC_4(VAR_6, VAR_7, VAR_4);
  if (VAR_10)
   goto out;
  VAR_9 = VAR_7->resize_buf->buf.mr.ibmr.lkey;
 } else {
  if (FUNC_0(&VAR_8, VAR_5, sizeof VAR_8)) {
   VAR_10 = -VAR_1;
   goto out;
  }
  VAR_9 = VAR_8.lkey;
 }

 VAR_10 = FUNC_3(VAR_6, VAR_7->cqn, VAR_9, FUNC_1(VAR_4));

 if (VAR_10) {
  if (VAR_7->resize_buf) {
   FUNC_6(VAR_6, &VAR_7->resize_buf->buf,
       VAR_7->resize_buf->cqe);
   FUNC_2(VAR_7->resize_buf);
   FUNC_10(&VAR_7->lock);
   VAR_7->resize_buf = ((void*)0);
   FUNC_11(&VAR_7->lock);
  }
  goto out;
 }

 if (VAR_7->is_kernel) {
  struct mthca_cq_buf VAR_11;
  int VAR_12;

  FUNC_10(&VAR_7->lock);
  if (VAR_7->resize_buf->state == VAR_0) {
   FUNC_5(VAR_7);
   VAR_11 = VAR_7->buf;
   VAR_12 = VAR_7->ibcq.cqe;
   VAR_7->buf = VAR_7->resize_buf->buf;
   VAR_7->ibcq.cqe = VAR_7->resize_buf->cqe;
  } else {
   VAR_11 = VAR_7->resize_buf->buf;
   VAR_12 = VAR_7->resize_buf->cqe;
  }

  FUNC_2(VAR_7->resize_buf);
  VAR_7->resize_buf = ((void*)0);
  FUNC_11(&VAR_7->lock);

  FUNC_6(VAR_6, &VAR_11, VAR_12);
 } else
  VAR_3->cqe = VAR_4 - 1;

out:
 FUNC_8(&VAR_7->mutex);

 return VAR_10;
}
