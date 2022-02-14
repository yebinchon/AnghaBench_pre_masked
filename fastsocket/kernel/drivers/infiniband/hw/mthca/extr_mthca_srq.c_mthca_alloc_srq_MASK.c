
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mthca_srq {scalar_t__ max; int max_gs; int srqn; scalar_t__ db_index; int refcount; int last_free; scalar_t__ first_free; int mutex; int wait; int lock; int db; int wqe_shift; scalar_t__ counter; } ;
struct TYPE_5__ {int uobject; } ;
struct mthca_pd {TYPE_2__ ibpd; } ;
struct mthca_next_seg {int dummy; } ;
struct mthca_mailbox {int buf; } ;
struct TYPE_6__ {int alloc; int table; int lock; int srq; } ;
struct TYPE_4__ {scalar_t__ max_srq_wqes; int max_srq_sge; int max_desc_sz; int num_srqs; } ;
struct mthca_dev {TYPE_3__ srq_table; TYPE_1__ limits; } ;
struct mthca_data_seg {int dummy; } ;
struct ib_srq_attr {scalar_t__ max_wr; int max_sge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mthca_mailbox*) ;
 int VAR_3 ;
 int FUNC_1 (struct mthca_mailbox*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned long,scalar_t__) ;
 int FUNC_5 (struct mthca_dev*,struct mthca_mailbox*,int) ;
 int FUNC_6 (struct mthca_dev*,struct mthca_mailbox*,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct mthca_dev*,int ,int,int *) ;
 struct mthca_mailbox* FUNC_9 (struct mthca_dev*,int ) ;
 int FUNC_10 (struct mthca_dev*,struct mthca_pd*,struct mthca_srq*) ;
 int FUNC_11 (struct mthca_dev*,struct mthca_pd*,struct mthca_srq*,int ) ;
 scalar_t__ FUNC_12 (int *,int,struct mthca_srq*) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (struct mthca_dev*,int ,scalar_t__) ;
 int FUNC_15 (struct mthca_dev*,struct mthca_mailbox*) ;
 int FUNC_16 (struct mthca_dev*,struct mthca_srq*) ;
 scalar_t__ FUNC_17 (struct mthca_dev*) ;
 int FUNC_18 (struct mthca_dev*,int ,int) ;
 int FUNC_19 (struct mthca_dev*,int ,int) ;
 int FUNC_20 (struct mthca_dev*,struct mthca_pd*,struct mthca_srq*,int ) ;
 int FUNC_21 (struct mthca_dev*,char*,int) ;
 int FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (int) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;

int FUNC_27(struct mthca_dev *VAR_4, struct mthca_pd *VAR_5,
      struct ib_srq_attr *VAR_6, struct mthca_srq *VAR_7)
{
 struct mthca_mailbox *VAR_8;
 int VAR_9;
 int VAR_10;


 if (VAR_6->max_wr > VAR_4->limits.max_srq_wqes ||
     VAR_6->max_sge > VAR_4->limits.max_srq_sge)
  return -VAR_0;

 VAR_7->max = VAR_6->max_wr;
 VAR_7->max_gs = VAR_6->max_sge;
 VAR_7->counter = 0;

 if (FUNC_17(VAR_4))
  VAR_7->max = FUNC_23(VAR_7->max + 1);
 else
  VAR_7->max = VAR_7->max + 1;

 VAR_9 = FUNC_4(64UL,
   FUNC_23(sizeof (struct mthca_next_seg) +
        VAR_7->max_gs * sizeof (struct mthca_data_seg)));

 if (!FUNC_17(VAR_4) && (VAR_9 > VAR_4->limits.max_desc_sz))
  return -VAR_0;

 VAR_7->wqe_shift = FUNC_2(VAR_9);

 VAR_7->srqn = FUNC_7(&VAR_4->srq_table.alloc);
 if (VAR_7->srqn == -1)
  return -VAR_1;

 if (FUNC_17(VAR_4)) {
  VAR_10 = FUNC_18(VAR_4, VAR_4->srq_table.table, VAR_7->srqn);
  if (VAR_10)
   goto err_out;

  if (!VAR_5->ibpd.uobject) {
   VAR_7->db_index = FUNC_8(VAR_4, VAR_3,
             VAR_7->srqn, &VAR_7->db);
   if (VAR_7->db_index < 0) {
    VAR_10 = -VAR_1;
    goto err_out_icm;
   }
  }
 }

 VAR_8 = FUNC_9(VAR_4, VAR_2);
 if (FUNC_0(VAR_8)) {
  VAR_10 = FUNC_1(VAR_8);
  goto err_out_db;
 }

 VAR_10 = FUNC_10(VAR_4, VAR_5, VAR_7);
 if (VAR_10)
  goto err_out_mailbox;

 FUNC_24(&VAR_7->lock);
 VAR_7->refcount = 1;
 FUNC_3(&VAR_7->wait);
 FUNC_22(&VAR_7->mutex);

 if (FUNC_17(VAR_4))
  FUNC_11(VAR_4, VAR_5, VAR_7, VAR_8->buf);
 else
  FUNC_20(VAR_4, VAR_5, VAR_7, VAR_8->buf);

 VAR_10 = FUNC_6(VAR_4, VAR_8, VAR_7->srqn);

 if (VAR_10) {
  FUNC_21(VAR_4, "SW2HW_SRQ failed (%d)\n", VAR_10);
  goto err_out_free_buf;
 }

 FUNC_25(&VAR_4->srq_table.lock);
 if (FUNC_12(&VAR_4->srq_table.srq,
       VAR_7->srqn & (VAR_4->limits.num_srqs - 1),
       VAR_7)) {
  FUNC_26(&VAR_4->srq_table.lock);
  goto err_out_free_srq;
 }
 FUNC_26(&VAR_4->srq_table.lock);

 FUNC_15(VAR_4, VAR_8);

 VAR_7->first_free = 0;
 VAR_7->last_free = VAR_7->max - 1;

 VAR_6->max_wr = VAR_7->max - 1;
 VAR_6->max_sge = VAR_7->max_gs;

 return 0;

err_out_free_srq:
 VAR_10 = FUNC_5(VAR_4, VAR_8, VAR_7->srqn);
 if (VAR_10)
  FUNC_21(VAR_4, "HW2SW_SRQ failed (%d)\n", VAR_10);

err_out_free_buf:
 if (!VAR_5->ibpd.uobject)
  FUNC_16(VAR_4, VAR_7);

err_out_mailbox:
 FUNC_15(VAR_4, VAR_8);

err_out_db:
 if (!VAR_5->ibpd.uobject && FUNC_17(VAR_4))
  FUNC_14(VAR_4, VAR_3, VAR_7->db_index);

err_out_icm:
 FUNC_19(VAR_4, VAR_4->srq_table.table, VAR_7->srqn);

err_out:
 FUNC_13(&VAR_4->srq_table.alloc, VAR_7->srqn);

 return VAR_10;
}
