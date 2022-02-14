
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_host_sds_ring {int dummy; } ;
struct qlcnic_hardware_context {int capabilities; scalar_t__ op_mode; int diag_cnt; int loopback_state; } ;
struct qlcnic_adapter {int max_sds_rings; int state; struct qlcnic_hardware_context* ahw; TYPE_2__* recv_ctx; TYPE_1__* pdev; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {struct qlcnic_host_sds_ring* sds_rings; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct net_device*,char*) ;
 struct qlcnic_adapter* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct qlcnic_adapter*) ;
 int FUNC_8 (struct net_device*,int ) ;
 int FUNC_9 (struct qlcnic_adapter*,int ) ;
 int FUNC_10 (struct net_device*,int ) ;
 int FUNC_11 (struct net_device*,int) ;
 int FUNC_12 (struct qlcnic_adapter*,int ) ;
 int FUNC_13 (struct qlcnic_host_sds_ring*) ;
 int FUNC_14 (struct qlcnic_adapter*,int ) ;
 scalar_t__ FUNC_15 (int ,int *) ;

int FUNC_16(struct net_device *VAR_9, u8 VAR_10)
{
 struct qlcnic_adapter *VAR_11 = FUNC_6(VAR_9);
 int VAR_12 = VAR_11->max_sds_rings;
 struct qlcnic_host_sds_ring *VAR_13;
 struct qlcnic_hardware_context *VAR_14 = VAR_11->ahw;
 int VAR_15 = 0;
 int VAR_16;

 if (FUNC_7(VAR_11))
  return FUNC_8(VAR_9, VAR_10);

 if (!(VAR_11->ahw->capabilities &
       VAR_2)) {
  FUNC_2(&VAR_11->pdev->dev,
    "Firmware do not support loopback test\n");
  return -VAR_1;
 }

 FUNC_3(&VAR_11->pdev->dev, "%s loopback test in progress\n",
   VAR_10 == VAR_5 ? "internal" : "external");
 if (VAR_14->op_mode == VAR_7) {
  FUNC_3(&VAR_11->pdev->dev,
    "Loopback test not supported in nonprivileged mode\n");
  return 0;
 }

 if (FUNC_15(VAR_8, &VAR_11->state))
  return -VAR_0;

 VAR_16 = FUNC_10(VAR_9, VAR_6);
 if (VAR_16)
  goto clear_it;

 VAR_13 = &VAR_11->recv_ctx->sds_rings[0];
 VAR_16 = FUNC_14(VAR_11, VAR_10);
 if (VAR_16)
  goto free_res;

 VAR_14->diag_cnt = 0;
 do {
  FUNC_4(500);
  FUNC_13(VAR_13);
  if (VAR_15++ > VAR_4) {
   FUNC_5(VAR_9, "firmware didnt respond to loopback"
    " configure request\n");
   VAR_16 = -VAR_3;
   goto free_res;
  } else if (VAR_11->ahw->diag_cnt) {
   VAR_16 = VAR_11->ahw->diag_cnt;
   goto free_res;
  }
 } while (!FUNC_0(VAR_14->loopback_state));

 VAR_16 = FUNC_12(VAR_11, VAR_10);

 FUNC_9(VAR_11, VAR_10);

 free_res:
 FUNC_11(VAR_9, VAR_12);

 clear_it:
 VAR_11->max_sds_rings = VAR_12;
 FUNC_1(VAR_8, &VAR_11->state);
 return VAR_16;
}
