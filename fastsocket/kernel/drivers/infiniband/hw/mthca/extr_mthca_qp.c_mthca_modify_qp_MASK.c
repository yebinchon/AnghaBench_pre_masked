
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lock; } ;
struct TYPE_5__ {int lock; } ;
struct mthca_qp {int state; int mutex; int transport; TYPE_2__ sq; TYPE_1__ rq; } ;
struct TYPE_8__ {int rdb_shift; } ;
struct TYPE_7__ {scalar_t__ pkey_table_len; scalar_t__ num_ports; scalar_t__ max_qp_init_rdma; } ;
struct mthca_dev {TYPE_4__ qp_table; TYPE_3__ limits; } ;
struct ib_udata {int dummy; } ;
struct ib_qp_attr {int cur_qp_state; int qp_state; scalar_t__ pkey_index; scalar_t__ port_num; scalar_t__ max_rd_atomic; int max_dest_rd_atomic; } ;
struct ib_qp {int qp_type; int device; } ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ib_qp*,struct ib_qp_attr*,int,int,int) ;
 int FUNC_1 (int,int,int ,int) ;
 int FUNC_2 (struct mthca_dev*,char*,int,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct mthca_dev* FUNC_9 (int ) ;
 struct mthca_qp* FUNC_10 (struct ib_qp*) ;

int FUNC_11(struct ib_qp *VAR_8, struct ib_qp_attr *VAR_9, int VAR_10,
      struct ib_udata *VAR_11)
{
 struct mthca_dev *VAR_12 = FUNC_9(VAR_8->device);
 struct mthca_qp *VAR_13 = FUNC_10(VAR_8);
 enum ib_qp_state VAR_14, VAR_15;
 int VAR_16 = -VAR_0;

 FUNC_3(&VAR_13->mutex);
 if (VAR_10 & VAR_2) {
  VAR_14 = VAR_9->cur_qp_state;
 } else {
  FUNC_6(&VAR_13->sq.lock);
  FUNC_5(&VAR_13->rq.lock);
  VAR_14 = VAR_13->state;
  FUNC_7(&VAR_13->rq.lock);
  FUNC_8(&VAR_13->sq.lock);
 }

 VAR_15 = VAR_10 & VAR_7 ? VAR_9->qp_state : VAR_14;

 if (!FUNC_1(VAR_14, VAR_15, VAR_8->qp_type, VAR_10)) {
  FUNC_2(VAR_12, "Bad QP transition (transport %d) "
     "%d->%d with attr 0x%08x\n",
     VAR_13->transport, VAR_14, VAR_15,
     VAR_10);
  goto out;
 }

 if ((VAR_10 & VAR_5) &&
      VAR_9->pkey_index >= VAR_12->limits.pkey_table_len) {
  FUNC_2(VAR_12, "P_Key index (%u) too large. max is %d\n",
     VAR_9->pkey_index, VAR_12->limits.pkey_table_len-1);
  goto out;
 }

 if ((VAR_10 & VAR_6) &&
     (VAR_9->port_num == 0 || VAR_9->port_num > VAR_12->limits.num_ports)) {
  FUNC_2(VAR_12, "Port number (%u) is invalid\n", VAR_9->port_num);
  goto out;
 }

 if (VAR_10 & VAR_4 &&
     VAR_9->max_rd_atomic > VAR_12->limits.max_qp_init_rdma) {
  FUNC_2(VAR_12, "Max rdma_atomic as initiator %u too large (max is %d)\n",
     VAR_9->max_rd_atomic, VAR_12->limits.max_qp_init_rdma);
  goto out;
 }

 if (VAR_10 & VAR_3 &&
     VAR_9->max_dest_rd_atomic > 1 << VAR_12->qp_table.rdb_shift) {
  FUNC_2(VAR_12, "Max rdma_atomic as responder %u too large (max %d)\n",
     VAR_9->max_dest_rd_atomic, 1 << VAR_12->qp_table.rdb_shift);
  goto out;
 }

 if (VAR_14 == VAR_15 && VAR_14 == VAR_1) {
  VAR_16 = 0;
  goto out;
 }

 VAR_16 = FUNC_0(VAR_8, VAR_9, VAR_10, VAR_14, VAR_15);

out:
 FUNC_4(&VAR_13->mutex);
 return VAR_16;
}
