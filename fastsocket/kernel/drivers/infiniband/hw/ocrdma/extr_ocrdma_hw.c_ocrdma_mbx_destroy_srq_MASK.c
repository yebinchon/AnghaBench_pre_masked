
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_3__ {int pa; int va; int len; } ;
struct ocrdma_srq {TYPE_1__ rq; int dev; int id; } ;
struct ocrdma_mqe {int dummy; } ;
struct TYPE_4__ {struct pci_dev* pdev; } ;
struct ocrdma_dev {TYPE_2__ nic_info; } ;
struct ocrdma_destroy_srq {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct ocrdma_destroy_srq*) ;
 struct ocrdma_destroy_srq* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,struct ocrdma_mqe*) ;

int FUNC_4(struct ocrdma_dev *VAR_2, struct ocrdma_srq *VAR_3)
{
 int VAR_4 = -VAR_0;
 struct ocrdma_destroy_srq *VAR_5;
 struct pci_dev *VAR_6 = VAR_2->nic_info.pdev;
 VAR_5 = FUNC_2(VAR_1, sizeof(*VAR_5));
 if (!VAR_5)
  return VAR_4;
 VAR_5->id = VAR_3->id;
 VAR_4 = FUNC_3(VAR_3->dev, (struct ocrdma_mqe *)VAR_5);
 if (VAR_3->rq.va)
  FUNC_0(&VAR_6->dev, VAR_3->rq.len,
      VAR_3->rq.va, VAR_3->rq.pa);
 FUNC_1(VAR_5);
 return VAR_4;
}
