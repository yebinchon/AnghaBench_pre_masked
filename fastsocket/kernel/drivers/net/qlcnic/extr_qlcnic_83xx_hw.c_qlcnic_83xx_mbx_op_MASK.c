
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_5__ {int status; } ;
struct qlcnic_hardware_context {int mbx_lock; TYPE_1__ idc; } ;
struct TYPE_7__ {scalar_t__* arg; int num; } ;
struct TYPE_6__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_3__ req; TYPE_2__ rsp; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; TYPE_4__* pdev; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct qlcnic_adapter*,int ,char*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct qlcnic_hardware_context*,int ) ;
 int FUNC_3 (struct qlcnic_hardware_context*,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

 scalar_t__ FUNC_5 (scalar_t__) ;

 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (struct qlcnic_hardware_context*,int ) ;
 int FUNC_8 (struct qlcnic_hardware_context*,int ,int ) ;
 int VAR_9 ;
 int FUNC_9 (struct qlcnic_adapter*) ;
 int FUNC_10 (int *,char*,scalar_t__,...) ;
 int FUNC_11 (int *,char*,...) ;
 int FUNC_12 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 scalar_t__ FUNC_13 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_14 (struct qlcnic_adapter*,scalar_t__*) ;
 int FUNC_15 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (scalar_t__,int ) ;

int FUNC_21(struct qlcnic_adapter *VAR_10,
         struct qlcnic_cmd_args *VAR_11)
{
 int VAR_12;
 u16 VAR_13;
 u8 VAR_14;
 unsigned long VAR_15;
 struct qlcnic_hardware_context *VAR_16 = VAR_10->ahw;
 u32 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22 = 0;

 VAR_13 = FUNC_0(VAR_11->req.arg[0]);
 if (!FUNC_19(VAR_9, &VAR_10->ahw->idc.status)) {
  FUNC_11(&VAR_10->pdev->dev,
    "Mailbox cmd attempted, 0x%x\n", VAR_13);
  FUNC_11(&VAR_10->pdev->dev, "Mailbox detached\n");
  return 0;
 }

 FUNC_17(&VAR_10->ahw->mbx_lock, VAR_15);
 VAR_18 = FUNC_7(VAR_16, VAR_4);

 if (VAR_18) {
  FUNC_1(VAR_10, VAR_0,
        "Mailbox cmd attempted, 0x%x\n", VAR_13);
  FUNC_1(VAR_10, VAR_0,
        "Mailbox not available, 0x%x, collect FW dump\n",
        VAR_18);
  VAR_11->rsp.arg[0] = VAR_7;
  FUNC_18(&VAR_10->ahw->mbx_lock, VAR_15);
  return VAR_11->rsp.arg[0];
 }


 VAR_21 = VAR_11->req.arg[0];
 FUNC_20(VAR_21, FUNC_3(VAR_16, 0));
 for (VAR_12 = 1; VAR_12 < VAR_11->req.num; VAR_12++)
  FUNC_20(VAR_11->req.arg[VAR_12], FUNC_3(VAR_16, VAR_12));


 FUNC_8(VAR_16, VAR_4, VAR_8);
poll:
 VAR_17 = FUNC_14(VAR_10, &VAR_22);
 if (VAR_17 != VAR_7) {

  VAR_19 = FUNC_16(FUNC_2(VAR_16, 0));
  if (VAR_19 & VAR_5) {
   FUNC_9(VAR_10);
   goto poll;
  }
  VAR_14 = FUNC_6(VAR_19);
  VAR_20 = FUNC_4(VAR_19);
  VAR_13 = FUNC_5(VAR_19);
  FUNC_12(VAR_10, VAR_11);

  switch (VAR_14) {
  case 128:
  case 129:
   VAR_17 = VAR_6;
   break;
  default:
   if (VAR_13 == VAR_2) {
    VAR_17 = FUNC_13(VAR_10);
    if (!VAR_17)
     goto out;
   }
   FUNC_10(&VAR_10->pdev->dev,
    "MBX command 0x%x failed with err:0x%x\n",
    VAR_13, VAR_14);
   VAR_17 = VAR_14;
   FUNC_15(VAR_10, VAR_11);
   break;
  }
  goto out;
 }

 FUNC_10(&VAR_10->pdev->dev, "MBX command 0x%x timed out\n",
  FUNC_5(VAR_21));
 VAR_17 = VAR_7;
out:

 FUNC_8(VAR_16, VAR_3, VAR_1);
 FUNC_18(&VAR_10->ahw->mbx_lock, VAR_15);
 return VAR_17;
}
