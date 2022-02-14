
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_query_qp_rsp {int params; } ;
struct ocrdma_query_qp {int qp_id; } ;
struct ocrdma_qp_params {int dummy; } ;
struct ocrdma_qp {int id; } ;
struct ocrdma_mqe {int dummy; } ;
struct ocrdma_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ocrdma_query_qp*) ;
 int FUNC_1 (struct ocrdma_qp_params*,int *,int) ;
 struct ocrdma_query_qp* FUNC_2 (int ,int) ;
 int FUNC_3 (struct ocrdma_dev*,struct ocrdma_mqe*) ;

int FUNC_4(struct ocrdma_dev *VAR_2, struct ocrdma_qp *VAR_3,
   struct ocrdma_qp_params *VAR_4)
{
 int VAR_5 = -VAR_0;
 struct ocrdma_query_qp *VAR_6;
 struct ocrdma_query_qp_rsp *VAR_7;

 VAR_6 = FUNC_2(VAR_1, sizeof(*VAR_6));
 if (!VAR_6)
  return VAR_5;
 VAR_6->qp_id = VAR_3->id;
 VAR_5 = FUNC_3(VAR_2, (struct ocrdma_mqe *)VAR_6);
 if (VAR_5)
  goto mbx_err;
 VAR_7 = (struct ocrdma_query_qp_rsp *)VAR_6;
 FUNC_1(VAR_4, &VAR_7->params, sizeof(struct ocrdma_qp_params));
mbx_err:
 FUNC_0(VAR_6);
 return VAR_5;
}
