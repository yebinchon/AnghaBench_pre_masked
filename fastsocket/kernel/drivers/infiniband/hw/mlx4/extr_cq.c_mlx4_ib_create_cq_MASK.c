
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


struct mlx4_uar {int dummy; } ;
struct mlx4_ib_dev {int* eq_table; TYPE_3__* dev; struct mlx4_uar priv_uar; } ;
struct mlx4_ib_create_cq {int db_addr; int buf_addr; } ;
struct TYPE_22__ {int dma; scalar_t__* db; } ;
struct ib_cq {int cqe; } ;
struct TYPE_21__ {int mtt; } ;
struct TYPE_17__ {int cqn; int event; int comp; scalar_t__* arm_db; scalar_t__* set_ci_db; } ;
struct mlx4_ib_cq {TYPE_7__ db; struct ib_cq ibcq; TYPE_4__ buf; int umem; TYPE_16__ mcq; int * resize_umem; int * resize_buf; int lock; int resize_mutex; } ;
struct ib_udata {int dummy; } ;
struct ib_ucontext {int dummy; } ;
struct ib_device {int num_comp_vectors; } ;
typedef int __u32 ;
struct TYPE_18__ {int max_cqes; } ;
struct TYPE_20__ {TYPE_1__ caps; } ;
struct TYPE_19__ {struct mlx4_uar uar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ib_cq* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct mlx4_ib_create_cq*,struct ib_udata*,int) ;
 scalar_t__ FUNC_2 (struct ib_udata*,int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mlx4_ib_cq*) ;
 struct mlx4_ib_cq* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_3__*,int,int *,struct mlx4_uar*,int ,TYPE_16__*,int,int ,int ) ;
 int FUNC_7 (TYPE_3__*,TYPE_7__*,int) ;
 int FUNC_8 (TYPE_3__*,TYPE_7__*) ;
 int FUNC_9 (struct mlx4_ib_dev*,TYPE_4__*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (TYPE_2__*,int ,TYPE_7__*) ;
 int FUNC_11 (TYPE_2__*,TYPE_7__*) ;
 int FUNC_12 (struct mlx4_ib_dev*,TYPE_4__*,int) ;
 int FUNC_13 (struct mlx4_ib_dev*,struct ib_ucontext*,TYPE_4__*,int *,int ,int) ;
 int FUNC_14 (TYPE_3__*,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int *) ;
 struct mlx4_ib_dev* FUNC_18 (struct ib_device*) ;
 TYPE_2__* FUNC_19 (struct ib_ucontext*) ;

struct ib_cq *FUNC_20(struct ib_device *VAR_6, int VAR_7, int VAR_8,
    struct ib_ucontext *VAR_9,
    struct ib_udata *VAR_10)
{
 struct mlx4_ib_dev *VAR_11 = FUNC_18(VAR_6);
 struct mlx4_ib_cq *VAR_12;
 struct mlx4_uar *VAR_13;
 int VAR_14;

 if (VAR_7 < 1 || VAR_7 > VAR_11->dev->caps.max_cqes)
  return FUNC_0(-VAR_1);

 VAR_12 = FUNC_5(sizeof *VAR_12, VAR_3);
 if (!VAR_12)
  return FUNC_0(-VAR_2);

 VAR_7 = FUNC_16(VAR_7 + 1);
 VAR_12->ibcq.cqe = VAR_7 - 1;
 FUNC_15(&VAR_12->resize_mutex);
 FUNC_17(&VAR_12->lock);
 VAR_12->resize_buf = ((void*)0);
 VAR_12->resize_umem = ((void*)0);

 if (VAR_9) {
  struct mlx4_ib_create_cq VAR_15;

  if (FUNC_1(&VAR_15, VAR_10, sizeof VAR_15)) {
   VAR_14 = -VAR_0;
   goto err_cq;
  }

  VAR_14 = FUNC_13(VAR_11, VAR_9, &VAR_12->buf, &VAR_12->umem,
       VAR_15.buf_addr, VAR_7);
  if (VAR_14)
   goto err_cq;

  VAR_14 = FUNC_10(FUNC_19(VAR_9), VAR_15.db_addr,
       &VAR_12->db);
  if (VAR_14)
   goto err_mtt;

  VAR_13 = &FUNC_19(VAR_9)->uar;
 } else {
  VAR_14 = FUNC_7(VAR_11->dev, &VAR_12->db, 1);
  if (VAR_14)
   goto err_cq;

  VAR_12->mcq.set_ci_db = VAR_12->db.db;
  VAR_12->mcq.arm_db = VAR_12->db.db + 1;
  *VAR_12->mcq.set_ci_db = 0;
  *VAR_12->mcq.arm_db = 0;

  VAR_14 = FUNC_9(VAR_11, &VAR_12->buf, VAR_7);
  if (VAR_14)
   goto err_db;

  VAR_13 = &VAR_11->priv_uar;
 }

 if (VAR_11->eq_table)
  VAR_8 = VAR_11->eq_table[VAR_8 % VAR_6->num_comp_vectors];

 VAR_14 = FUNC_6(VAR_11->dev, VAR_7, &VAR_12->buf.mtt, VAR_13,
       VAR_12->db.dma, &VAR_12->mcq, VAR_8, 0, 0);
 if (VAR_14)
  goto err_dbmap;

 VAR_12->mcq.comp = VAR_4;
 VAR_12->mcq.event = VAR_5;

 if (VAR_9)
  if (FUNC_2(VAR_10, &VAR_12->mcq.cqn, sizeof (__u32))) {
   VAR_14 = -VAR_0;
   goto err_dbmap;
  }

 return &VAR_12->ibcq;

err_dbmap:
 if (VAR_9)
  FUNC_11(FUNC_19(VAR_9), &VAR_12->db);

err_mtt:
 FUNC_14(VAR_11->dev, &VAR_12->buf.mtt);

 if (VAR_9)
  FUNC_3(VAR_12->umem);
 else
  FUNC_12(VAR_11, &VAR_12->buf, VAR_12->ibcq.cqe);

err_db:
 if (!VAR_9)
  FUNC_8(VAR_11->dev, &VAR_12->db);

err_cq:
 FUNC_4(VAR_12);

 return FUNC_0(VAR_14);
}
