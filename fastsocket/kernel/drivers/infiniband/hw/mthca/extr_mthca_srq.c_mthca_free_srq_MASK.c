
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int uobject; } ;
struct mthca_srq {int srqn; int db_index; TYPE_2__ ibsrq; int wait; int refcount; } ;
struct mthca_mailbox {int dummy; } ;
struct TYPE_6__ {int alloc; int table; int lock; int srq; } ;
struct TYPE_4__ {int num_srqs; } ;
struct mthca_dev {TYPE_3__ srq_table; TYPE_1__ limits; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mthca_mailbox*) ;
 int VAR_1 ;
 int FUNC_1 (struct mthca_dev*,struct mthca_srq*) ;
 int FUNC_2 (struct mthca_dev*,struct mthca_mailbox*,int) ;
 struct mthca_mailbox* FUNC_3 (struct mthca_dev*,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct mthca_dev*,int ,int ) ;
 int FUNC_7 (struct mthca_dev*,struct mthca_mailbox*) ;
 int FUNC_8 (struct mthca_dev*,struct mthca_srq*) ;
 scalar_t__ FUNC_9 (struct mthca_dev*) ;
 int FUNC_10 (struct mthca_dev*,int ,int) ;
 int FUNC_11 (struct mthca_dev*,char*,...) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int) ;

void FUNC_15(struct mthca_dev *VAR_2, struct mthca_srq *VAR_3)
{
 struct mthca_mailbox *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_2, VAR_0);
 if (FUNC_0(VAR_4)) {
  FUNC_11(VAR_2, "No memory for mailbox to free SRQ.\n");
  return;
 }

 VAR_5 = FUNC_2(VAR_2, VAR_4, VAR_3->srqn);
 if (VAR_5)
  FUNC_11(VAR_2, "HW2SW_SRQ failed (%d)\n", VAR_5);

 FUNC_12(&VAR_2->srq_table.lock);
 FUNC_4(&VAR_2->srq_table.srq,
     VAR_3->srqn & (VAR_2->limits.num_srqs - 1));
 --VAR_3->refcount;
 FUNC_13(&VAR_2->srq_table.lock);

 FUNC_14(VAR_3->wait, !FUNC_1(VAR_2, VAR_3));

 if (!VAR_3->ibsrq.uobject) {
  FUNC_8(VAR_2, VAR_3);
  if (FUNC_9(VAR_2))
   FUNC_6(VAR_2, VAR_1, VAR_3->db_index);
 }

 FUNC_10(VAR_2, VAR_2->srq_table.table, VAR_3->srqn);
 FUNC_5(&VAR_2->srq_table.alloc, VAR_3->srqn);
 FUNC_7(VAR_2, VAR_4);
}
