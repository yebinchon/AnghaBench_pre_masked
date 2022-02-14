
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct wlcore_platdev_data {TYPE_5__* core; int * dev; TYPE_4__* pdata; int * if_ops; } ;
struct wl12xx_sdio_glue {TYPE_5__* core; int * dev; TYPE_4__* pdata; int * if_ops; } ;
struct sdio_func {int num; int dev; TYPE_2__* card; } ;
struct sdio_device_id {int dummy; } ;
struct resource {char* name; int flags; int start; } ;
typedef int res ;
typedef int mmc_pm_flag_t ;
struct TYPE_14__ {int * parent; } ;
struct TYPE_16__ {TYPE_3__ dev; } ;
struct TYPE_15__ {int pwr_in_suspend; int irq; } ;
struct TYPE_12__ {scalar_t__ sdio_vsn; } ;
struct TYPE_13__ {TYPE_1__ cccr; int quirks; } ;


 int FUNC_0 (struct resource*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (struct wlcore_platdev_data*) ;
 struct wlcore_platdev_data* FUNC_6 (int,int ) ;
 int FUNC_7 (struct resource*,int,int) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*,struct wlcore_platdev_data*,int) ;
 int FUNC_10 (TYPE_5__*,struct resource*,int ) ;
 TYPE_5__* FUNC_11 (char const*,int ) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct sdio_func*) ;
 int VAR_9 ;
 int FUNC_15 (struct sdio_func*,struct wlcore_platdev_data*) ;
 TYPE_4__* FUNC_16 () ;

__attribute__((used)) static int FUNC_17(struct sdio_func *VAR_10,
      const struct sdio_device_id *VAR_11)
{
 struct wlcore_platdev_data *VAR_12;
 struct wl12xx_sdio_glue *VAR_13;
 struct resource VAR_14[1];
 mmc_pm_flag_t VAR_15;
 int VAR_16 = -VAR_1;
 const char *VAR_17;


 if (VAR_10->num != 0x02)
  return -VAR_0;

 VAR_12 = FUNC_6(sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  goto out;

 VAR_12->if_ops = &VAR_9;

 VAR_13 = FUNC_6(sizeof(*VAR_13), VAR_2);
 if (!VAR_13) {
  FUNC_4(&VAR_10->dev, "can't allocate glue\n");
  goto out_free_pdev_data;
 }

 VAR_13->dev = &VAR_10->dev;


 VAR_10->card->quirks |= VAR_6;


 VAR_10->card->quirks |= VAR_5;

 VAR_12->pdata = FUNC_16();
 if (FUNC_1(VAR_12->pdata)) {
  VAR_16 = FUNC_2(VAR_12->pdata);
  FUNC_4(VAR_13->dev, "missing wlan platform data: %d\n", VAR_16);
  goto out_free_glue;
 }


 VAR_15 = FUNC_14(VAR_10);
 FUNC_3(VAR_13->dev, "sdio PM caps = 0x%x\n", VAR_15);

 if (VAR_15 & VAR_4)
  VAR_12->pdata->pwr_in_suspend = 1;

 FUNC_15(VAR_10, VAR_13);


 FUNC_13(&VAR_10->dev);







 if (VAR_10->card->cccr.sdio_vsn == VAR_8)
  VAR_17 = "wl18xx";
 else
  VAR_17 = "wl12xx";

 VAR_13->core = FUNC_11(VAR_17, VAR_7);
 if (!VAR_13->core) {
  FUNC_4(VAR_13->dev, "can't allocate platform_device");
  VAR_16 = -VAR_1;
  goto out_free_glue;
 }

 VAR_13->core->dev.parent = &VAR_10->dev;

 FUNC_7(VAR_14, 0x00, sizeof(VAR_14));

 VAR_14[0].start = VAR_12->pdata->irq;
 VAR_14[0].flags = VAR_3;
 VAR_14[0].name = "irq";

 VAR_16 = FUNC_10(VAR_13->core, VAR_14, FUNC_0(VAR_14));
 if (VAR_16) {
  FUNC_4(VAR_13->dev, "can't add resources\n");
  goto out_dev_put;
 }

 VAR_16 = FUNC_9(VAR_13->core, VAR_12,
           sizeof(*VAR_12));
 if (VAR_16) {
  FUNC_4(VAR_13->dev, "can't add platform data\n");
  goto out_dev_put;
 }

 VAR_16 = FUNC_8(VAR_13->core);
 if (VAR_16) {
  FUNC_4(VAR_13->dev, "can't add platform device\n");
  goto out_dev_put;
 }
 return 0;

out_dev_put:
 FUNC_12(VAR_13->core);

out_free_glue:
 FUNC_5(VAR_13);

out_free_pdev_data:
 FUNC_5(VAR_12);

out:
 return VAR_16;
}
