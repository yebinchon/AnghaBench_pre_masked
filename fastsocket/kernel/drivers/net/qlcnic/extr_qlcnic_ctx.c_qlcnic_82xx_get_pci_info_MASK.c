
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qlcnic_pci_info_le {int mac; int tx_max_bw; int tx_min_bw; int default_port; int type; int active; int id; } ;
struct qlcnic_pci_info {int mac; void* tx_max_bw; void* tx_min_bw; void* default_port; void* type; void* active; void* id; } ;
struct TYPE_4__ {size_t* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_3__* pdev; TYPE_2__* ahw; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {scalar_t__ act_pci_func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_2 (int *,char*,int) ;
 void* FUNC_3 (int *,size_t,int *,int ) ;
 int FUNC_4 (int *,size_t,void*,int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (void*,int ,size_t) ;
 int FUNC_8 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_9 (struct qlcnic_cmd_args*) ;
 int FUNC_10 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

int FUNC_11(struct qlcnic_adapter *VAR_8,
        struct qlcnic_pci_info *VAR_9)
{
 int VAR_10 = 0, VAR_11;
 struct qlcnic_cmd_args VAR_12;
 dma_addr_t VAR_13;
 struct qlcnic_pci_info_le *VAR_14;
 void *VAR_15;
 size_t VAR_16 = sizeof(struct qlcnic_pci_info_le);
 size_t VAR_17 = VAR_16 * VAR_5;

 VAR_15 = FUNC_3(&VAR_8->pdev->dev, VAR_17,
   &VAR_13, VAR_3);
 if (!VAR_15)
  return -VAR_1;
 FUNC_7(VAR_15, 0, VAR_17);

 VAR_14 = VAR_15;
 FUNC_8(&VAR_12, VAR_8, VAR_4);
 VAR_12.req.arg[1] = FUNC_1(VAR_13);
 VAR_12.req.arg[2] = FUNC_0(VAR_13);
 VAR_12.req.arg[3] = VAR_17;
 VAR_10 = FUNC_10(VAR_8, &VAR_12);

 VAR_8->ahw->act_pci_func = 0;
 if (VAR_10 == VAR_6) {
  for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++, VAR_14++, VAR_9++) {
   VAR_9->id = FUNC_5(VAR_14->id);
   VAR_9->active = FUNC_5(VAR_14->active);
   VAR_9->type = FUNC_5(VAR_14->type);
   if (VAR_9->type == VAR_7)
    VAR_8->ahw->act_pci_func++;
   VAR_9->default_port =
    FUNC_5(VAR_14->default_port);
   VAR_9->tx_min_bw =
    FUNC_5(VAR_14->tx_min_bw);
   VAR_9->tx_max_bw =
    FUNC_5(VAR_14->tx_max_bw);
   FUNC_6(VAR_9->mac, VAR_14->mac, VAR_2);
  }
 } else {
  FUNC_2(&VAR_8->pdev->dev,
   "Failed to get PCI Info%d\n", VAR_10);
  VAR_10 = -VAR_0;
 }

 FUNC_4(&VAR_8->pdev->dev, VAR_17, VAR_15,
  VAR_13);
 FUNC_9(&VAR_12);

 return VAR_10;
}
