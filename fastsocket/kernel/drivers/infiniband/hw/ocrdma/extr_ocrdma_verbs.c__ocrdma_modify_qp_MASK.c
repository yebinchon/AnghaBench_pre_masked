
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_qp {struct ocrdma_dev* dev; } ;
struct ocrdma_dev {int dummy; } ;
struct ib_qp_attr {int qp_state; } ;
struct ib_qp {int dummy; } ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;


 int VAR_0 ;
 struct ocrdma_qp* FUNC_0 (struct ib_qp*) ;
 int FUNC_1 (struct ocrdma_dev*,struct ocrdma_qp*,struct ib_qp_attr*,int,int) ;
 int FUNC_2 (struct ocrdma_qp*,int ,int*) ;

int FUNC_3(struct ib_qp *VAR_1, struct ib_qp_attr *VAR_2,
        int VAR_3)
{
 int VAR_4 = 0;
 struct ocrdma_qp *VAR_5;
 struct ocrdma_dev *VAR_6;
 enum ib_qp_state VAR_7;

 VAR_5 = FUNC_0(VAR_1);
 VAR_6 = VAR_5->dev;
 if (VAR_3 & VAR_0)
  VAR_4 = FUNC_2(VAR_5, VAR_2->qp_state, &VAR_7);



 if (VAR_4 < 0)
  return VAR_4;
 VAR_4 = FUNC_1(VAR_6, VAR_5, VAR_2, VAR_3, VAR_7);
 return VAR_4;
}
