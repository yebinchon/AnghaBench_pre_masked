
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {int num_sds_rings; int state; TYPE_3__* pdev; TYPE_2__* nic_ops; TYPE_1__* ahw; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int (* config_led ) (struct qlcnic_adapter*,int,int) ;} ;
struct TYPE_4__ {scalar_t__ op_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int) ;
 struct qlcnic_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,char*) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*,int,int ) ;
 int FUNC_7 (struct net_device*,int ) ;
 int FUNC_8 (struct net_device*,int) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct qlcnic_adapter*,int,int) ;
 int FUNC_11 (struct qlcnic_adapter*,int,int) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int ,int *) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_8, u32 VAR_9)
{
 struct qlcnic_adapter *VAR_10 = FUNC_3(VAR_8);
 int VAR_11 = VAR_10->num_sds_rings;
 int VAR_12 = 0;

 if (VAR_10->ahw->op_mode == VAR_3) {
  FUNC_4(VAR_8,
   "LED test not supported for non privilege function\n");
  return -VAR_1;
 }

 if (FUNC_5(VAR_10) &&
     !FUNC_14(VAR_7, &VAR_10->state)) {

  if (FUNC_13(VAR_6, &VAR_10->state))
   return -VAR_0;

  VAR_12 = FUNC_6(VAR_10, 1, 0);
  if (VAR_12)
   goto led_err;

  FUNC_2(VAR_9 * 1000);

  VAR_12 = FUNC_6(VAR_10, 0, 0);
led_err:
  FUNC_0(VAR_6, &VAR_10->state);
  return VAR_12;
 }

 if (FUNC_13(VAR_6, &VAR_10->state))
  return -VAR_0;

 if (FUNC_14(VAR_7, &VAR_10->state))
  goto done;

 if (!FUNC_14(VAR_4, &VAR_10->state)) {
  VAR_12 = FUNC_7(VAR_8, VAR_2);
  if (VAR_12)
   goto done;
  FUNC_9(VAR_5, &VAR_10->state);
 }

 VAR_12 = VAR_10->nic_ops->config_led(VAR_10, 1, 0xf);
 if (VAR_12) {
  FUNC_1(&VAR_10->pdev->dev,
   "Failed to set LED blink state.\n");
  goto done;
 }

 if (FUNC_12(VAR_5, &VAR_10->state))
  FUNC_8(VAR_8, VAR_11);

 FUNC_2(VAR_9 * 1000);

 if (FUNC_14(VAR_7, &VAR_10->state))
  goto done;

 if (!FUNC_14(VAR_4, &VAR_10->state)) {
  VAR_12 = FUNC_7(VAR_8, VAR_2);
  if (VAR_12)
   goto done;
  FUNC_9(VAR_5, &VAR_10->state);
 }

 VAR_12 = VAR_10->nic_ops->config_led(VAR_10, 0, 0xf);
 if (VAR_12)
  FUNC_1(&VAR_10->pdev->dev,
   "Failed to reset LED blink state.\n");

done:
 if (FUNC_12(VAR_5, &VAR_10->state))
  FUNC_8(VAR_8, VAR_11);

 FUNC_0(VAR_6, &VAR_10->state);
 return VAR_12;

}
