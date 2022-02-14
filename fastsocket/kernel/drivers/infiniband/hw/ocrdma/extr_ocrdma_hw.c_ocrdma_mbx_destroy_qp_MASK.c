
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_7__ {int pa; int va; int len; } ;
struct TYPE_6__ {int pa; int va; int len; } ;
struct ocrdma_qp {TYPE_4__* pd; scalar_t__ dpp_enabled; TYPE_3__ rq; int srq; TYPE_2__ sq; int id; } ;
struct ocrdma_mqe {int dummy; } ;
struct TYPE_5__ {struct pci_dev* pdev; } ;
struct ocrdma_dev {TYPE_1__ nic_info; } ;
struct ocrdma_destroy_qp {int qp_id; } ;
struct TYPE_8__ {int num_dpp_qp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct ocrdma_destroy_qp*) ;
 struct ocrdma_destroy_qp* FUNC_2 (int ,int) ;
 int FUNC_3 (struct ocrdma_dev*,struct ocrdma_mqe*) ;

int FUNC_4(struct ocrdma_dev *VAR_2, struct ocrdma_qp *VAR_3)
{
 int VAR_4 = -VAR_0;
 struct ocrdma_destroy_qp *VAR_5;
 struct pci_dev *VAR_6 = VAR_2->nic_info.pdev;

 VAR_5 = FUNC_2(VAR_1, sizeof(*VAR_5));
 if (!VAR_5)
  return VAR_4;
 VAR_5->qp_id = VAR_3->id;
 VAR_4 = FUNC_3(VAR_2, (struct ocrdma_mqe *)VAR_5);
 if (VAR_4)
  goto mbx_err;

mbx_err:
 FUNC_1(VAR_5);
 if (VAR_3->sq.va)
  FUNC_0(&VAR_6->dev, VAR_3->sq.len, VAR_3->sq.va, VAR_3->sq.pa);
 if (!VAR_3->srq && VAR_3->rq.va)
  FUNC_0(&VAR_6->dev, VAR_3->rq.len, VAR_3->rq.va, VAR_3->rq.pa);
 if (VAR_3->dpp_enabled)
  VAR_3->pd->num_dpp_qp++;
 return VAR_4;
}
