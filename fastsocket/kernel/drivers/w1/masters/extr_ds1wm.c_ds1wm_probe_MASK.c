
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int flags; int start; } ;
struct TYPE_4__ {struct mfd_cell* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mfd_cell {struct ds1wm_driver_data* driver_data; } ;
struct ds1wm_driver_data {int active_high; } ;
struct ds1wm_data {int bus_shift; int map; int irq; int active_high; struct mfd_cell* cell; struct platform_device* pdev; } ;
struct TYPE_5__ {void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ds1wm_data*) ;
 int VAR_11 ;
 TYPE_2__ VAR_12 ;
 int FUNC_1 (struct ds1wm_data*) ;
 int FUNC_2 (int ,struct ds1wm_data*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ds1wm_data*) ;
 struct ds1wm_data* FUNC_6 (int,int ) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct ds1wm_data*) ;
 int FUNC_9 (int ,int ,int ,char*,struct ds1wm_data*) ;
 int FUNC_10 (struct resource*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_13)
{
 struct ds1wm_data *VAR_14;
 struct ds1wm_driver_data *VAR_15;
 struct resource *VAR_16;
 struct mfd_cell *VAR_17;
 int VAR_18;

 if (!VAR_13)
  return -VAR_0;

 VAR_17 = VAR_13->dev.platform_data;
 if (!VAR_17)
  return -VAR_0;

 VAR_14 = FUNC_6(sizeof(*VAR_14), VAR_3);
 if (!VAR_14)
  return -VAR_1;

 FUNC_8(VAR_13, VAR_14);

 VAR_16 = FUNC_7(VAR_13, VAR_7, 0);
 if (!VAR_16) {
  VAR_18 = -VAR_2;
  goto err0;
 }
 VAR_14->map = FUNC_3(VAR_16->start, FUNC_10(VAR_16));
 if (!VAR_14->map) {
  VAR_18 = -VAR_1;
  goto err0;
 }
 VAR_15 = VAR_17->driver_data;


 VAR_14->bus_shift = FUNC_10(VAR_16) >> 3;

 VAR_14->pdev = VAR_13;
 VAR_14->cell = VAR_17;

 VAR_16 = FUNC_7(VAR_13, VAR_4, 0);
 if (!VAR_16) {
  VAR_18 = -VAR_2;
  goto err1;
 }
 VAR_14->irq = VAR_16->start;
 VAR_14->active_high = VAR_15->active_high;

 if (VAR_16->flags & VAR_5)
  FUNC_11(VAR_14->irq, VAR_10);
 if (VAR_16->flags & VAR_6)
  FUNC_11(VAR_14->irq, VAR_9);

 VAR_18 = FUNC_9(VAR_14->irq, VAR_11, VAR_8,
     "ds1wm", VAR_14);
 if (VAR_18)
  goto err1;

 FUNC_1(VAR_14);

 VAR_12.data = (void *)VAR_14;

 VAR_18 = FUNC_12(&VAR_12);
 if (VAR_18)
  goto err2;

 return 0;

err2:
 FUNC_0(VAR_14);
 FUNC_2(VAR_14->irq, VAR_14);
err1:
 FUNC_4(VAR_14->map);
err0:
 FUNC_5(VAR_14);

 return VAR_18;
}
