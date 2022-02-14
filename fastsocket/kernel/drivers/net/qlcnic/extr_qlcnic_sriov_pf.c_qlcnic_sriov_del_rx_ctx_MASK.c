
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_vf_info {int rx_ctx_id; int pci_func; } ;
struct TYPE_3__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 scalar_t__ FUNC_1 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_cmd_args*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 int FUNC_4 (struct qlcnic_adapter*,int ) ;

__attribute__((used)) static void FUNC_5(struct qlcnic_adapter *VAR_1,
        struct qlcnic_vf_info *VAR_2)
{
 struct qlcnic_cmd_args VAR_3;
 int VAR_4;

 if (!VAR_2->rx_ctx_id)
  return;

 if (FUNC_1(&VAR_3, VAR_1, VAR_0))
  return;

 VAR_4 = FUNC_4(VAR_1, VAR_2->pci_func);
 if (VAR_4 >= 0) {
  VAR_3.req.arg[1] = VAR_2->rx_ctx_id | (VAR_4 & 0xffff) << 16;
  if (FUNC_3(VAR_1, &VAR_3))
   FUNC_0(&VAR_1->pdev->dev,
    "Failed to delete Tx ctx in firmware for func 0x%x\n",
    VAR_2->pci_func);
  else
   VAR_2->rx_ctx_id = 0;
 }

 FUNC_2(&VAR_3);
}
