
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocrdma_mqe {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct ocrdma_dev {TYPE_2__ nic_info; } ;
struct ocrdma_destroy_cq {int bypass_flush_qid; int req; } ;
struct ocrdma_cq {int id; int pa; int va; int len; int eqn; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct ocrdma_destroy_cq*) ;
 struct ocrdma_destroy_cq* FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int ,int ,int) ;
 int FUNC_4 (struct ocrdma_dev*,struct ocrdma_mqe*) ;
 int FUNC_5 (struct ocrdma_dev*,int ) ;

int FUNC_6(struct ocrdma_dev *VAR_5, struct ocrdma_cq *VAR_6)
{
 int VAR_7 = -VAR_0;
 struct ocrdma_destroy_cq *VAR_8;

 VAR_8 = FUNC_2(VAR_1, sizeof(*VAR_8));
 if (!VAR_8)
  return VAR_7;
 FUNC_3(&VAR_8->req, VAR_1,
   VAR_4, sizeof(*VAR_8));

 VAR_8->bypass_flush_qid |=
     (VAR_6->id << VAR_3) &
     VAR_2;

 FUNC_5(VAR_5, VAR_6->eqn);
 VAR_7 = FUNC_4(VAR_5, (struct ocrdma_mqe *)VAR_8);
 if (VAR_7)
  goto mbx_err;
 FUNC_0(&VAR_5->nic_info.pdev->dev, VAR_6->len, VAR_6->va, VAR_6->pa);
mbx_err:
 FUNC_1(VAR_8);
 return VAR_7;
}
