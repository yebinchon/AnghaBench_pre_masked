
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocrdma_qp {int state; int id; } ;
struct ocrdma_mqe {int dummy; } ;
struct TYPE_2__ {int max_sge_recv_flags; int id; } ;
struct ocrdma_modify_qp {TYPE_1__ params; int flags; } ;
struct ocrdma_dev {int dummy; } ;
struct ib_qp_attr {int qp_state; } ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ocrdma_modify_qp*) ;
 struct ocrdma_modify_qp* FUNC_2 (int ,int) ;
 int FUNC_3 (struct ocrdma_dev*,struct ocrdma_mqe*) ;
 int FUNC_4 (struct ocrdma_qp*,struct ocrdma_modify_qp*,struct ib_qp_attr*,int,int) ;

int FUNC_5(struct ocrdma_dev *VAR_6, struct ocrdma_qp *VAR_7,
    struct ib_qp_attr *VAR_8, int VAR_9,
    enum ib_qp_state VAR_10)
{
 int VAR_11 = -VAR_0;
 struct ocrdma_modify_qp *VAR_12;

 VAR_12 = FUNC_2(VAR_2, sizeof(*VAR_12));
 if (!VAR_12)
  return VAR_11;

 VAR_12->params.id = VAR_7->id;
 VAR_12->flags = 0;
 if (VAR_9 & VAR_1) {
  VAR_12->params.max_sge_recv_flags |=
      (FUNC_0(VAR_8->qp_state) <<
       VAR_4) &
      VAR_3;
  VAR_12->flags |= VAR_5;
 } else
  VAR_12->params.max_sge_recv_flags |=
      (VAR_7->state << VAR_4) &
      VAR_3;
 VAR_11 = FUNC_4(VAR_7, VAR_12, VAR_8, VAR_9, VAR_10);
 if (VAR_11)
  goto mbx_err;
 VAR_11 = FUNC_3(VAR_6, (struct ocrdma_mqe *)VAR_12);
 if (VAR_11)
  goto mbx_err;

mbx_err:
 FUNC_1(VAR_12);
 return VAR_11;
}
