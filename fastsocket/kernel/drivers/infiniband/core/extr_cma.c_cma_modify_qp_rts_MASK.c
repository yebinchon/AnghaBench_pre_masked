
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int qp; } ;
struct rdma_id_private {int qp_mutex; TYPE_1__ id; } ;
struct rdma_conn_param {int initiator_depth; } ;
struct ib_qp_attr {int max_rd_atomic; int qp_state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ib_qp_attr*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,struct ib_qp_attr*,int*) ;

__attribute__((used)) static int FUNC_4(struct rdma_id_private *VAR_1,
        struct rdma_conn_param *VAR_2)
{
 struct ib_qp_attr VAR_3;
 int VAR_4, VAR_5;

 FUNC_1(&VAR_1->qp_mutex);
 if (!VAR_1->id.qp) {
  VAR_5 = 0;
  goto out;
 }

 VAR_3.qp_state = VAR_0;
 VAR_5 = FUNC_3(&VAR_1->id, &VAR_3, &VAR_4);
 if (VAR_5)
  goto out;

 if (VAR_2)
  VAR_3.max_rd_atomic = VAR_2->initiator_depth;
 VAR_5 = FUNC_0(VAR_1->id.qp, &VAR_3, VAR_4);
out:
 FUNC_2(&VAR_1->qp_mutex);
 return VAR_5;
}
