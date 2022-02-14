
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct qlcnic_hardware_context {scalar_t__ diag_cnt; TYPE_1__* intr_tbl; } ;
struct TYPE_7__ {int * arg; } ;
struct TYPE_6__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_3__ rsp; TYPE_2__ req; } ;
struct qlcnic_adapter {int max_sds_rings; int flags; TYPE_4__* pdev; struct qlcnic_hardware_context* ahw; } ;
struct net_device {int dummy; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_5__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct qlcnic_hardware_context*,int ) ;
 int FUNC_4 (int *,char*,scalar_t__) ;
 int FUNC_5 (int *,char*,int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct net_device*,char*) ;
 struct qlcnic_adapter* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,int ,int) ;
 int FUNC_10 (struct net_device*,int) ;
 int FUNC_11 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_12 (struct qlcnic_cmd_args*) ;
 scalar_t__ FUNC_13 (struct qlcnic_adapter*) ;
 int FUNC_14 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 int FUNC_15 (struct qlcnic_adapter*) ;

int FUNC_16(struct net_device *VAR_6)
{
 struct qlcnic_adapter *VAR_7 = FUNC_8(VAR_6);
 struct qlcnic_hardware_context *VAR_8 = VAR_7->ahw;
 struct qlcnic_cmd_args VAR_9;
 u32 VAR_10;
 u16 VAR_11, VAR_12;
 u8 VAR_13;
 int VAR_14, VAR_15 = VAR_7->max_sds_rings;

 if (FUNC_13(VAR_7)) {
  FUNC_7(VAR_6, "Device in diagnostics mode\n");
  return -VAR_1;
 }

 VAR_14 = FUNC_9(VAR_6, VAR_4,
      VAR_15);
 if (VAR_14)
  goto fail_diag_irq;

 VAR_8->diag_cnt = 0;
 FUNC_11(&VAR_9, VAR_7, VAR_2);

 if (VAR_7->flags & VAR_5)
  VAR_11 = VAR_8->intr_tbl[0].id;
 else
  VAR_11 = FUNC_3(VAR_8, VAR_3);

 VAR_9.req.arg[1] = 1;
 VAR_9.req.arg[2] = VAR_11;
 VAR_9.req.arg[3] = VAR_0;

 VAR_14 = FUNC_14(VAR_7, &VAR_9);
 VAR_10 = VAR_9.rsp.arg[2];
 VAR_12 = FUNC_1(VAR_10);
 VAR_13 = FUNC_0(FUNC_2(VAR_10));
 if (VAR_12 != VAR_11)
  FUNC_5(&VAR_7->pdev->dev,
    "Interrupt generated: 0x%x, requested:0x%x\n",
    VAR_12, VAR_11);
 if (VAR_13)
  FUNC_4(&VAR_7->pdev->dev,
    "Interrupt test error: 0x%x\n", VAR_13);
 if (VAR_14)
  goto done;

 FUNC_6(20);
 VAR_14 = !VAR_8->diag_cnt;

done:
 FUNC_12(&VAR_9);
 FUNC_10(VAR_6, VAR_15);

fail_diag_irq:
 VAR_7->max_sds_rings = VAR_15;
 FUNC_15(VAR_7);
 return VAR_14;
}
