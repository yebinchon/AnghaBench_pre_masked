
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_14__ {int status; } ;
struct qlcnic_hardware_context {int reset_context; TYPE_7__ idc; int pci_func; TYPE_3__* sriov; } ;
struct TYPE_13__ {int* arg; } ;
struct TYPE_12__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_6__ req; TYPE_5__ rsp; } ;
struct qlcnic_bc_trans {TYPE_4__* req_hdr; } ;
struct qlcnic_adapter {int need_fw_reset; struct qlcnic_hardware_context* ahw; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_11__ {scalar_t__ cmd_op; } ;
struct TYPE_9__ {int trans_counter; } ;
struct TYPE_10__ {TYPE_2__ bc; } ;
struct TYPE_8__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qlcnic_adapter*,int ,char*,int,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct device*,char*,int,int,...) ;
 int FUNC_5 (struct qlcnic_bc_trans**) ;
 int FUNC_6 (struct qlcnic_bc_trans*) ;
 int FUNC_7 (struct qlcnic_bc_trans*,struct qlcnic_cmd_args*,int ,int ) ;
 int FUNC_8 (struct qlcnic_adapter*,struct qlcnic_bc_trans*) ;
 int FUNC_9 (struct qlcnic_adapter*,struct qlcnic_bc_trans*,int ) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct qlcnic_adapter *VAR_9,
      struct qlcnic_cmd_args *VAR_10)
{
 struct qlcnic_hardware_context *VAR_11 = VAR_9->ahw;
 struct device *VAR_12 = &VAR_9->pdev->dev;
 struct qlcnic_bc_trans *VAR_13;
 int VAR_14;
 u32 VAR_15, VAR_16, VAR_17, VAR_18;
 u16 VAR_19 = ++VAR_9->ahw->sriov->bc.trans_counter;
 u8 VAR_20 = VAR_11->pci_func;

 VAR_18 = FUNC_5(&VAR_13);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_7(VAR_13, VAR_10, VAR_19, VAR_8);
 if (VAR_18)
  goto cleanup_transaction;

retry:
 if (!FUNC_10(VAR_7, &VAR_9->ahw->idc.status)) {
  VAR_18 = -VAR_1;
  FUNC_0(VAR_9, VAR_0, "MBX not Ready!(cmd 0x%x) for VF 0x%x\n",
        FUNC_1(VAR_10->req.arg[0]), VAR_20);
  goto err_out;
 }

 VAR_14 = FUNC_9(VAR_9, VAR_13, VAR_20);
 if (VAR_14) {
  FUNC_4(VAR_12, "MBX command 0x%x timed out for VF %d\n",
   (VAR_10->req.arg[0] & 0xffff), VAR_20);
  VAR_18 = VAR_6;




  if ((VAR_13->req_hdr->cmd_op == VAR_2) &&
      !FUNC_8(VAR_9, VAR_13))
   goto retry;

  goto err_out;
 }

 VAR_15 = VAR_10->rsp.arg[0];
 VAR_17 = FUNC_2(VAR_15);
 VAR_16 = FUNC_1(VAR_10->req.arg[0]);

 if ((VAR_17 == VAR_4) ||
     (VAR_17 == VAR_3)) {
  VAR_18 = VAR_5;
 } else {
  VAR_18 = VAR_17;
  if (!VAR_18)
   VAR_18 = 1;
  FUNC_4(VAR_12,
   "MBX command 0x%x failed with err:0x%x for VF %d\n",
   VAR_16, VAR_17, VAR_20);
 }

err_out:
 if (VAR_18 == VAR_6) {
  VAR_11->reset_context = 1;
  VAR_9->need_fw_reset = 1;
  FUNC_3(VAR_7, &VAR_11->idc.status);
 }

cleanup_transaction:
 FUNC_6(VAR_13);
 return VAR_18;
}
