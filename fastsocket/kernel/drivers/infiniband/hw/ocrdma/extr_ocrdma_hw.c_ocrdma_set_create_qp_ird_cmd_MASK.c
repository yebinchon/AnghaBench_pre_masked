
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct ocrdma_qp {int ird_q_va; struct ocrdma_dev* dev; } ;
struct TYPE_4__ {int ird_page_size; int num_ird_pages; scalar_t__ ird; } ;
struct TYPE_3__ {struct pci_dev* pdev; } ;
struct ocrdma_dev {TYPE_2__ attr; TYPE_1__ nic_info; } ;
struct ocrdma_create_qp_req {int * ird_addr; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ocrdma_create_qp_req *VAR_2,
     struct ocrdma_qp *VAR_3)
{
 struct ocrdma_dev *VAR_4 = VAR_3->dev;
 struct pci_dev *VAR_5 = VAR_4->nic_info.pdev;
 dma_addr_t VAR_6 = 0;
 int VAR_7 = VAR_4->attr.ird_page_size;
 int VAR_8 = VAR_4->attr.num_ird_pages * VAR_7;

 if (VAR_4->attr.ird == 0)
  return 0;

 VAR_3->ird_q_va = FUNC_0(&VAR_5->dev, VAR_8,
     &VAR_6, VAR_1);
 if (!VAR_3->ird_q_va)
  return -VAR_0;
 FUNC_1(VAR_3->ird_q_va, 0, VAR_8);
 FUNC_2(&VAR_2->ird_addr[0], VAR_4->attr.num_ird_pages,
        VAR_6, VAR_7);
 return 0;
}
