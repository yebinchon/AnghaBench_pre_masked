
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wlcore_platdev_data {int if_ops; struct wl12xx_platform_data* pdata; } ;
struct wl12xx_platform_data {int platform_quirks; scalar_t__ pwr_in_suspend; } ;
struct wl1271 {scalar_t__ num_tx_desc; int platform_quirks; int irq_wake_enabled; int initialized; int nvs_loading_complete; int * nvs; int irq; int dev; TYPE_5__* ops; TYPE_4__* hw; int if_ops; scalar_t__ nvs_len; struct platform_device* pdev; } ;
struct TYPE_6__ {struct wlcore_platdev_data* platform_data; } ;
struct platform_device {int name; TYPE_1__ dev; } ;
struct firmware {scalar_t__ size; int data; } ;
struct TYPE_10__ {int (* setup ) (struct wl1271*) ;int (* identify_chip ) (struct wl1271*) ;} ;
struct TYPE_9__ {TYPE_3__* wiphy; } ;
struct TYPE_7__ {int pattern_min_len; int pattern_max_len; int n_patterns; int flags; } ;
struct TYPE_8__ {TYPE_2__ wowlan; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct wl1271*) ;
 int VAR_13 ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ,scalar_t__,int ) ;
 int FUNC_11 (struct platform_device*,int ) ;
 int FUNC_12 (struct firmware const*) ;
 int FUNC_13 (int ,int *,int ,unsigned long,int ,struct wl1271*) ;
 int FUNC_14 (struct wl1271*) ;
 int FUNC_15 (struct wl1271*) ;
 int FUNC_16 (int ,char*,int ) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (struct wl1271*) ;
 int FUNC_19 (struct wl1271*) ;
 int FUNC_20 (struct wl1271*) ;
 int FUNC_21 (struct wl1271*) ;
 int FUNC_22 (struct wl1271*) ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_23(const struct firmware *VAR_15, void *VAR_16)
{
 struct wl1271 *VAR_17 = VAR_16;
 struct platform_device *VAR_18 = VAR_17->pdev;
 struct wlcore_platdev_data *VAR_19 = VAR_18->dev.platform_data;
 struct wl12xx_platform_data *VAR_20 = VAR_19->pdata;
 unsigned long VAR_21;
 int VAR_22;

 if (VAR_15) {
  VAR_17->nvs = FUNC_10(VAR_15->data, VAR_15->size, VAR_1);
  if (!VAR_17->nvs) {
   FUNC_17("Could not allocate nvs data");
   goto out;
  }
  VAR_17->nvs_len = VAR_15->size;
 } else {
  FUNC_16(VAR_0, "Could not get nvs file %s",
        VAR_8);
  VAR_17->nvs = ((void*)0);
  VAR_17->nvs_len = 0;
 }

 VAR_22 = VAR_17->ops->setup(VAR_17);
 if (VAR_22 < 0)
  goto out_free_nvs;

 FUNC_0(VAR_17->num_tx_desc > VAR_10);


 FUNC_22(VAR_17);

 VAR_17->irq = FUNC_11(VAR_18, 0);
 VAR_17->platform_quirks = VAR_20->platform_quirks;
 VAR_17->if_ops = VAR_19->if_ops;

 if (VAR_17->platform_quirks & VAR_9)
  VAR_21 = VAR_4;
 else
  VAR_21 = VAR_3 | VAR_2;

 VAR_22 = FUNC_13(VAR_17->irq, ((void*)0), VAR_14,
       VAR_21, VAR_18->name, VAR_17);
 if (VAR_22 < 0) {
  FUNC_17("request_irq() failed: %d", VAR_22);
  goto out_free_nvs;
 }
 FUNC_6(VAR_17->irq);

 VAR_22 = FUNC_21(VAR_17);
 if (VAR_22 < 0) {
  FUNC_17("couldn't get hw info");
  goto out_irq;
 }

 VAR_22 = VAR_17->ops->identify_chip(VAR_17);
 if (VAR_22 < 0)
  goto out_irq;

 VAR_22 = FUNC_18(VAR_17);
 if (VAR_22)
  goto out_irq;

 VAR_22 = FUNC_19(VAR_17);
 if (VAR_22)
  goto out_irq;


 VAR_22 = FUNC_3(VAR_17->dev, &VAR_11);
 if (VAR_22 < 0) {
  FUNC_17("failed to create sysfs file bt_coex_state");
  goto out_unreg;
 }


 VAR_22 = FUNC_3(VAR_17->dev, &VAR_12);
 if (VAR_22 < 0) {
  FUNC_17("failed to create sysfs file hw_pg_ver");
  goto out_bt_coex_state;
 }


 VAR_22 = FUNC_2(VAR_17->dev, &VAR_13);
 if (VAR_22 < 0) {
  FUNC_17("failed to create sysfs file fwlog");
  goto out_hw_pg_ver;
 }

 VAR_17->initialized = 1;
 goto out;

out_hw_pg_ver:
 FUNC_5(VAR_17->dev, &VAR_12);

out_bt_coex_state:
 FUNC_5(VAR_17->dev, &VAR_11);

out_unreg:
 FUNC_20(VAR_17);

out_irq:
 FUNC_8(VAR_17->irq, VAR_17);

out_free_nvs:
 FUNC_9(VAR_17->nvs);

out:
 FUNC_12(VAR_15);
 FUNC_1(&VAR_17->nvs_loading_complete);
}
