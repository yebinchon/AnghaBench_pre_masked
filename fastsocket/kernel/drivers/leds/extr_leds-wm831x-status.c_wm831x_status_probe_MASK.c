
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wm831x_status_pdata {int default_src; int default_trigger; int name; } ;
struct TYPE_7__ {int dev; int blink_set; int brightness_set; int default_trigger; int name; } ;
struct wm831x_status {int reg_val; int src; TYPE_1__ cdev; int brightness; int reg; int value_lock; int work; int mutex; struct wm831x* wm831x; } ;
struct wm831x_pdata {scalar_t__* status; } ;
struct wm831x {TYPE_2__* dev; } ;
struct resource {int start; } ;
struct TYPE_9__ {int parent; } ;
struct platform_device {int id; TYPE_4__ dev; } ;
typedef int pdata ;
struct TYPE_8__ {struct wm831x_pdata* platform_data; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_4__*,char*,...) ;
 struct wm831x* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,struct wm831x_status*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct wm831x_status*) ;
 struct wm831x_status* FUNC_8 (int,int ) ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct wm831x_status_pdata*,scalar_t__,int) ;
 int FUNC_12 (struct wm831x_status_pdata*,int ,int) ;
 int FUNC_13 (int *) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct wm831x*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_14)
{
 struct wm831x *VAR_15 = FUNC_3(VAR_14->dev.parent);
 struct wm831x_pdata *VAR_16;
 struct wm831x_status_pdata VAR_17;
 struct wm831x_status *VAR_18;
 struct resource *VAR_19;
 int VAR_20 = VAR_14->id % FUNC_0(VAR_16->status);
 int VAR_21;

 VAR_19 = FUNC_14(VAR_14, VAR_3, 0);
 if (VAR_19 == ((void*)0)) {
  FUNC_2(&VAR_14->dev, "No I/O resource\n");
  VAR_21 = -VAR_0;
  goto err;
 }

 VAR_18 = FUNC_8(sizeof(struct wm831x_status), VAR_2);
 if (!VAR_18)
  return -VAR_1;
 FUNC_5(&VAR_14->dev, VAR_18);

 VAR_18->wm831x = VAR_15;
 VAR_18->reg = VAR_19->start;

 if (VAR_15->dev->platform_data)
  VAR_16 = VAR_15->dev->platform_data;
 else
  VAR_16 = ((void*)0);

 FUNC_12(&VAR_17, 0, sizeof(VAR_17));
 if (VAR_16 && VAR_16->status[VAR_20])
  FUNC_11(&VAR_17, VAR_16->status[VAR_20], sizeof(VAR_17));
 else
  VAR_17.name = FUNC_4(&VAR_14->dev);

 FUNC_13(&VAR_18->mutex);
 FUNC_1(&VAR_18->work, VAR_13);
 FUNC_15(&VAR_18->value_lock);



 VAR_18->reg_val = FUNC_16(VAR_15, VAR_18->reg);

 if (VAR_18->reg_val & VAR_6)
  VAR_18->brightness = VAR_4;
 else
  VAR_18->brightness = VAR_5;




 if (VAR_17.default_src == VAR_9) {
  VAR_18->src = VAR_18->reg_val;
  VAR_18->src &= VAR_7;
  VAR_18->src >>= VAR_8;
 } else {
  VAR_18->src = VAR_17.default_src - 1;
 }

 VAR_18->cdev.name = VAR_17.name;
 VAR_18->cdev.default_trigger = VAR_17.default_trigger;
 VAR_18->cdev.brightness_set = VAR_12;
 VAR_18->cdev.blink_set = VAR_11;

 VAR_21 = FUNC_9(VAR_15->dev, &VAR_18->cdev);
 if (VAR_21 < 0) {
  FUNC_2(&VAR_14->dev, "Failed to register LED: %d\n", VAR_21);
  goto err_led;
 }

 VAR_21 = FUNC_6(VAR_18->cdev.dev, &VAR_10);
 if (VAR_21 != 0)
  FUNC_2(&VAR_14->dev,
   "No source control for LED: %d\n", VAR_21);

 return 0;

err_led:
 FUNC_10(&VAR_18->cdev);
 FUNC_7(VAR_18);
err:
 return VAR_21;
}
