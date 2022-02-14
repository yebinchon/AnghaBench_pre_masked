
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_hardware_context {scalar_t__ op_mode; scalar_t__ has_link_events; scalar_t__ linkup; } ;
struct qlcnic_adapter {int max_sds_rings; int flags; TYPE_1__* pdev; struct qlcnic_hardware_context* ahw; int state; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct net_device*,char*,...) ;
 struct qlcnic_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,char*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct qlcnic_adapter*,int ) ;
 int FUNC_9 (struct net_device*,int ,int) ;
 int FUNC_10 (struct net_device*,int) ;
 int FUNC_11 (struct qlcnic_adapter*) ;
 int FUNC_12 (struct qlcnic_adapter*,int ) ;
 int FUNC_13 (struct qlcnic_adapter*,int ) ;
 scalar_t__ FUNC_14 (struct qlcnic_adapter*) ;
 int FUNC_15 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_16 (int ,int *) ;

int FUNC_17(struct net_device *VAR_8, u8 VAR_9)
{
 struct qlcnic_adapter *VAR_10 = FUNC_3(VAR_8);
 struct qlcnic_hardware_context *VAR_11 = VAR_10->ahw;
 int VAR_12 = 0, VAR_13 = 0, VAR_14 = VAR_10->max_sds_rings;

 if (VAR_11->op_mode == VAR_6) {
  FUNC_4(VAR_8,
       "Loopback test not supported in non privileged mode\n");
  return VAR_12;
 }

 if (FUNC_16(VAR_7, &VAR_10->state)) {
  FUNC_2(VAR_8, "Device is resetting\n");
  return -VAR_0;
 }

 if (FUNC_14(VAR_10)) {
  FUNC_2(VAR_8, "Device is in diagnostics mode\n");
  return -VAR_0;
 }

 FUNC_2(VAR_8, "%s loopback test in progress\n",
      VAR_9 == VAR_3 ? "internal" : "external");

 VAR_12 = FUNC_9(VAR_8, VAR_4,
      VAR_14);
 if (VAR_12)
  goto fail_diag_alloc;

 VAR_12 = FUNC_12(VAR_10, VAR_9);
 if (VAR_12)
  goto free_diag_res;


 do {
  FUNC_1(500);
  if (!(VAR_10->flags & VAR_5))
   FUNC_11(VAR_10);

  if (VAR_13++ > VAR_2) {
   FUNC_0(&VAR_10->pdev->dev,
     "Firmware didn't sent link up event to loopback request\n");
   VAR_12 = -VAR_1;
   FUNC_8(VAR_10, VAR_9);
   goto free_diag_res;
  }
 } while ((VAR_10->ahw->linkup && VAR_11->has_link_events) != 1);


 if (FUNC_6(VAR_8)) {
  FUNC_5(VAR_8);
  FUNC_7(VAR_8);
 }

 VAR_12 = FUNC_13(VAR_10, VAR_9);

 FUNC_8(VAR_10, VAR_9);

free_diag_res:
 FUNC_10(VAR_8, VAR_14);

fail_diag_alloc:
 VAR_10->max_sds_rings = VAR_14;
 FUNC_15(VAR_10);
 return VAR_12;
}
