
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_49__ TYPE_9__ ;
typedef struct TYPE_48__ TYPE_8__ ;
typedef struct TYPE_47__ TYPE_7__ ;
typedef struct TYPE_46__ TYPE_6__ ;
typedef struct TYPE_45__ TYPE_5__ ;
typedef struct TYPE_44__ TYPE_4__ ;
typedef struct TYPE_43__ TYPE_3__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_24__ ;
typedef struct TYPE_40__ TYPE_1__ ;
typedef struct TYPE_39__ TYPE_17__ ;
typedef struct TYPE_38__ TYPE_16__ ;
typedef struct TYPE_37__ TYPE_13__ ;
typedef struct TYPE_36__ TYPE_12__ ;
typedef struct TYPE_35__ TYPE_11__ ;
typedef struct TYPE_34__ TYPE_10__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct mlx4_wqe_srq_next_seg {int next_wqe_index; } ;
struct mlx4_wqe_data_seg {int lkey; } ;
struct TYPE_39__ {int dma; scalar_t__* db; } ;
struct TYPE_41__ {int page_shift; int npages; } ;
struct TYPE_44__ {int srq_num; } ;
struct TYPE_45__ {TYPE_4__ xrc; } ;
struct ib_srq {TYPE_5__ ext; } ;
struct TYPE_37__ {int max; scalar_t__ max_gs; int srqn; int event; int wqe_shift; } ;
struct mlx4_ib_srq {int tail; TYPE_17__ db; TYPE_24__ buf; TYPE_16__* umem; int mtt; struct mlx4_ib_srq* wrid; struct ib_srq ibsrq; TYPE_13__ msrq; scalar_t__ wqe_ctr; scalar_t__ head; int lock; int mutex; } ;
struct mlx4_ib_dev {TYPE_12__* dev; } ;
struct mlx4_ib_create_srq {int db_addr; int buf_addr; } ;
struct ib_udata {int dummy; } ;
struct TYPE_47__ {int max_wr; scalar_t__ max_sge; } ;
struct TYPE_42__ {int xrcd; int cq; } ;
struct TYPE_43__ {TYPE_2__ xrc; } ;
struct ib_srq_init_attr {scalar_t__ srq_type; TYPE_7__ attr; TYPE_3__ ext; } ;
struct ib_pd {TYPE_8__* uobject; int device; } ;
typedef int __u32 ;
struct TYPE_49__ {int xrcdn; } ;
struct TYPE_48__ {int context; } ;
struct TYPE_46__ {int max_srq_wqes; scalar_t__ max_srq_sge; scalar_t__ reserved_xrcds; } ;
struct TYPE_40__ {int cqn; } ;
struct TYPE_38__ {int page_size; } ;
struct TYPE_36__ {TYPE_6__ caps; } ;
struct TYPE_35__ {TYPE_1__ mcq; } ;
struct TYPE_34__ {int pdn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ib_srq* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_16__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_16__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 struct mlx4_wqe_srq_next_seg* FUNC_5 (struct mlx4_ib_srq*,int) ;
 scalar_t__ FUNC_6 (struct mlx4_ib_create_srq*,struct ib_udata*,int) ;
 scalar_t__ FUNC_7 (struct ib_udata*,int *,int) ;
 TYPE_16__* FUNC_8 (int ,int ,int,int ,int ) ;
 int FUNC_9 (TYPE_16__*) ;
 int FUNC_10 (TYPE_16__*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct mlx4_ib_srq*) ;
 void* FUNC_13 (int,int ) ;
 int FUNC_14 (unsigned long,int) ;
 scalar_t__ FUNC_15 (TYPE_12__*,int,int,TYPE_24__*) ;
 int FUNC_16 (TYPE_12__*,int,TYPE_24__*) ;
 int FUNC_17 (TYPE_12__*,int *,TYPE_24__*) ;
 int FUNC_18 (TYPE_12__*,TYPE_17__*,int ) ;
 int FUNC_19 (TYPE_12__*,TYPE_17__*) ;
 int FUNC_20 (int ,int ,TYPE_17__*) ;
 int FUNC_21 (int ,TYPE_17__*) ;
 int VAR_7 ;
 int FUNC_22 (struct mlx4_ib_dev*,int *,TYPE_16__*) ;
 int FUNC_23 (TYPE_12__*,int *) ;
 int FUNC_24 (TYPE_12__*,int ,int ,int *) ;
 int FUNC_25 (TYPE_12__*,int ,int ,int ,int *,int ,TYPE_13__*) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int) ;
 int FUNC_28 (int *) ;
 TYPE_11__* FUNC_29 (int ) ;
 struct mlx4_ib_dev* FUNC_30 (int ) ;
 TYPE_10__* FUNC_31 (struct ib_pd*) ;
 int FUNC_32 (int ) ;
 TYPE_9__* FUNC_33 (int ) ;

struct ib_srq *FUNC_34(struct ib_pd *VAR_8,
      struct ib_srq_init_attr *VAR_9,
      struct ib_udata *VAR_10)
{
 struct mlx4_ib_dev *VAR_11 = FUNC_30(VAR_8->device);
 struct mlx4_ib_srq *VAR_12;
 struct mlx4_wqe_srq_next_seg *VAR_13;
 struct mlx4_wqe_data_seg *VAR_14;
 u32 VAR_15;
 u16 VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;


 if (VAR_9->attr.max_wr >= VAR_11->dev->caps.max_srq_wqes ||
     VAR_9->attr.max_sge > VAR_11->dev->caps.max_srq_sge)
  return FUNC_0(-VAR_1);

 VAR_12 = FUNC_13(sizeof *VAR_12, VAR_3);
 if (!VAR_12)
  return FUNC_0(-VAR_2);

 FUNC_26(&VAR_12->mutex);
 FUNC_28(&VAR_12->lock);
 VAR_12->msrq.max = FUNC_27(VAR_9->attr.max_wr + 1);
 VAR_12->msrq.max_gs = VAR_9->attr.max_sge;

 VAR_17 = FUNC_14(32UL,
   FUNC_27(sizeof (struct mlx4_wqe_srq_next_seg) +
        VAR_12->msrq.max_gs *
        sizeof (struct mlx4_wqe_data_seg)));
 VAR_12->msrq.wqe_shift = FUNC_11(VAR_17);

 VAR_18 = VAR_12->msrq.max * VAR_17;

 if (VAR_8->uobject) {
  struct mlx4_ib_create_srq VAR_21;

  if (FUNC_6(&VAR_21, VAR_10, sizeof VAR_21)) {
   VAR_19 = -VAR_0;
   goto err_srq;
  }

  VAR_12->umem = FUNC_8(VAR_8->uobject->context, VAR_21.buf_addr,
     VAR_18, 0, 0);
  if (FUNC_1(VAR_12->umem)) {
   VAR_19 = FUNC_2(VAR_12->umem);
   goto err_srq;
  }

  VAR_19 = FUNC_24(VAR_11->dev, FUNC_9(VAR_12->umem),
        FUNC_11(VAR_12->umem->page_size), &VAR_12->mtt);
  if (VAR_19)
   goto err_buf;

  VAR_19 = FUNC_22(VAR_11, &VAR_12->mtt, VAR_12->umem);
  if (VAR_19)
   goto err_mtt;

  VAR_19 = FUNC_20(FUNC_32(VAR_8->uobject->context),
       VAR_21.db_addr, &VAR_12->db);
  if (VAR_19)
   goto err_mtt;
 } else {
  VAR_19 = FUNC_18(VAR_11->dev, &VAR_12->db, 0);
  if (VAR_19)
   goto err_srq;

  *VAR_12->db.db = 0;

  if (FUNC_15(VAR_11->dev, VAR_18, VAR_6 * 2, &VAR_12->buf)) {
   VAR_19 = -VAR_2;
   goto err_db;
  }

  VAR_12->head = 0;
  VAR_12->tail = VAR_12->msrq.max - 1;
  VAR_12->wqe_ctr = 0;

  for (VAR_20 = 0; VAR_20 < VAR_12->msrq.max; ++VAR_20) {
   VAR_13 = FUNC_5(VAR_12, VAR_20);
   VAR_13->next_wqe_index =
    FUNC_3((VAR_20 + 1) & (VAR_12->msrq.max - 1));

   for (VAR_14 = (void *) (VAR_13 + 1);
        (void *) VAR_14 < (void *) VAR_13 + VAR_17;
        ++VAR_14)
    VAR_14->lkey = FUNC_4(VAR_5);
  }

  VAR_19 = FUNC_24(VAR_11->dev, VAR_12->buf.npages, VAR_12->buf.page_shift,
        &VAR_12->mtt);
  if (VAR_19)
   goto err_buf;

  VAR_19 = FUNC_17(VAR_11->dev, &VAR_12->mtt, &VAR_12->buf);
  if (VAR_19)
   goto err_mtt;

  VAR_12->wrid = FUNC_13(VAR_12->msrq.max * sizeof (u64), VAR_3);
  if (!VAR_12->wrid) {
   VAR_19 = -VAR_2;
   goto err_mtt;
  }
 }

 VAR_15 = (VAR_9->srq_type == VAR_4) ?
  FUNC_29(VAR_9->ext.xrc.cq)->mcq.cqn : 0;
 VAR_16 = (VAR_9->srq_type == VAR_4) ?
  FUNC_33(VAR_9->ext.xrc.xrcd)->xrcdn :
  (u16) VAR_11->dev->caps.reserved_xrcds;
 VAR_19 = FUNC_25(VAR_11->dev, FUNC_31(VAR_8)->pdn, VAR_15, VAR_16, &VAR_12->mtt,
        VAR_12->db.dma, &VAR_12->msrq);
 if (VAR_19)
  goto err_wrid;

 VAR_12->msrq.event = VAR_7;
 VAR_12->ibsrq.ext.xrc.srq_num = VAR_12->msrq.srqn;

 if (VAR_8->uobject)
  if (FUNC_7(VAR_10, &VAR_12->msrq.srqn, sizeof (__u32))) {
   VAR_19 = -VAR_0;
   goto err_wrid;
  }

 VAR_9->attr.max_wr = VAR_12->msrq.max - 1;

 return &VAR_12->ibsrq;

err_wrid:
 if (VAR_8->uobject)
  FUNC_21(FUNC_32(VAR_8->uobject->context), &VAR_12->db);
 else
  FUNC_12(VAR_12->wrid);

err_mtt:
 FUNC_23(VAR_11->dev, &VAR_12->mtt);

err_buf:
 if (VAR_8->uobject)
  FUNC_10(VAR_12->umem);
 else
  FUNC_16(VAR_11->dev, VAR_18, &VAR_12->buf);

err_db:
 if (!VAR_8->uobject)
  FUNC_19(VAR_11->dev, &VAR_12->db);

err_srq:
 FUNC_12(VAR_12);

 return FUNC_0(VAR_19);
}
