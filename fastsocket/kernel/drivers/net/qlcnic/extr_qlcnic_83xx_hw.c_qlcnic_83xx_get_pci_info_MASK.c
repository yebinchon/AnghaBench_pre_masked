
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct qlcnic_pci_info {int id; int active; int type; int tx_min_bw; int mac; void* tx_max_bw; void* default_port; } ;
struct qlcnic_hardware_context {int max_pci_func; scalar_t__ op_mode; int act_pci_func; } ;
struct TYPE_4__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ rsp; } ;
struct qlcnic_adapter {TYPE_1__* pdev; struct qlcnic_hardware_context* ahw; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int,int,...) ;
 int FUNC_2 (int ,int*,int) ;
 int FUNC_3 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_4 (struct qlcnic_cmd_args*) ;
 int FUNC_5 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

int FUNC_6(struct qlcnic_adapter *VAR_7,
        struct qlcnic_pci_info *VAR_8)
{
 struct qlcnic_hardware_context *VAR_9 = VAR_7->ahw;
 struct device *VAR_10 = &VAR_7->pdev->dev;
 struct qlcnic_cmd_args VAR_11;
 int VAR_12, VAR_13 = 0, VAR_14 = 0;
 u32 VAR_15;

 FUNC_3(&VAR_11, VAR_7, VAR_2);
 VAR_13 = FUNC_5(VAR_7, &VAR_11);

 VAR_9->act_pci_func = 0;
 if (VAR_13 == VAR_5) {
  VAR_9->max_pci_func = VAR_11.rsp.arg[1] & 0xFF;
  for (VAR_12 = 2, VAR_14 = 0; VAR_14 < VAR_3; VAR_14++, VAR_8++) {
   VAR_8->id = VAR_11.rsp.arg[VAR_12] & 0xFFFF;
   VAR_8->active = (VAR_11.rsp.arg[VAR_12] & 0xFFFF0000) >> 16;
   VAR_12++;
   VAR_8->type = VAR_11.rsp.arg[VAR_12] & 0xFFFF;
   if (VAR_8->type == VAR_6)
    VAR_9->act_pci_func++;
   VAR_15 = (VAR_11.rsp.arg[VAR_12] & 0xFFFF0000) >> 16;
   VAR_8->default_port = VAR_15;
   VAR_12++;
   VAR_8->tx_min_bw = VAR_11.rsp.arg[VAR_12] & 0xFFFF;
   VAR_15 = (VAR_11.rsp.arg[VAR_12] & 0xFFFF0000) >> 16;
   VAR_8->tx_max_bw = VAR_15;
   VAR_12 = VAR_12 + 2;
   FUNC_2(VAR_8->mac, &VAR_11.rsp.arg[VAR_12], VAR_1 - 2);
   VAR_12++;
   FUNC_2(VAR_8->mac + sizeof(u32), &VAR_11.rsp.arg[VAR_12], 2);
   VAR_12 = VAR_12 + 3;
   if (VAR_9->op_mode == VAR_4)
    FUNC_1(VAR_10, "id = %d active = %d type = %d\n"
      "\tport = %d min bw = %d max bw = %d\n"
      "\tmac_addr =  %pM\n", VAR_8->id,
      VAR_8->active, VAR_8->type,
      VAR_8->default_port,
      VAR_8->tx_min_bw,
      VAR_8->tx_max_bw, VAR_8->mac);
  }
  if (VAR_9->op_mode == VAR_4)
   FUNC_1(VAR_10, "Max vNIC functions = %d, active vNIC functions = %d\n",
     VAR_9->max_pci_func, VAR_9->act_pci_func);

 } else {
  FUNC_0(VAR_10, "Failed to get PCI Info, error = %d\n", VAR_13);
  VAR_13 = -VAR_0;
 }

 FUNC_4(&VAR_11);

 return VAR_13;
}
