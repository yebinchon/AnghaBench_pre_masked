
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct wm97xx_pdata {int dummy; } ;
struct wm97xx {int id; TYPE_10__* input_dev; TYPE_6__* battery_dev; TYPE_6__* touch_dev; void** gpio; TYPE_3__* codec; struct device* dev; int variant; int ac97; int codec_mutex; } ;
struct device {struct wm97xx_pdata* platform_data; } ;
struct TYPE_18__ {struct wm97xx_pdata* platform_data; struct device* parent; } ;
struct TYPE_20__ {TYPE_2__ dev; } ;
struct TYPE_19__ {int (* phy_init ) (struct wm97xx*) ;} ;
struct TYPE_17__ {struct device* parent; } ;
struct TYPE_16__ {char* name; char* phys; TYPE_1__ dev; int keybit; int evbit; int close; int open; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ,int ) ;
 int * VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,struct wm97xx*) ;
 TYPE_10__* FUNC_4 () ;
 int FUNC_5 (TYPE_10__*) ;
 int FUNC_6 (TYPE_10__*) ;
 int FUNC_7 (TYPE_10__*,int ,int ,int ,int ,int ) ;
 int FUNC_8 (TYPE_10__*,struct wm97xx*) ;
 int FUNC_9 (TYPE_10__*) ;
 int FUNC_10 (struct wm97xx*) ;
 struct wm97xx* FUNC_11 (int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_6__*) ;
 void* FUNC_14 (char*,int) ;
 int FUNC_15 (TYPE_6__*) ;
 int FUNC_16 (TYPE_6__*) ;
 int FUNC_17 (TYPE_6__*,struct wm97xx*) ;
 int FUNC_18 (struct wm97xx*) ;
 int FUNC_19 (struct device*) ;
 TYPE_3__ VAR_22 ;
 TYPE_3__ VAR_23 ;
 TYPE_3__ VAR_24 ;
 void* FUNC_20 (struct wm97xx*,int ) ;
 int VAR_25 ;
 int VAR_26 ;

__attribute__((used)) static int FUNC_21(struct device *VAR_27)
{
 struct wm97xx *VAR_28;
 struct wm97xx_pdata *VAR_29 = VAR_27->platform_data;
 int VAR_30 = 0, VAR_31 = 0;

 VAR_28 = FUNC_11(sizeof(struct wm97xx), VAR_16);
 if (!VAR_28)
  return -VAR_13;
 FUNC_12(&VAR_28->codec_mutex);

 VAR_28->dev = VAR_27;
 FUNC_3(VAR_27, VAR_28);
 VAR_28->ac97 = FUNC_19(VAR_27);


 VAR_31 = FUNC_20(VAR_28, VAR_9);
 if (VAR_31 != VAR_17) {
  FUNC_1(VAR_27, "Device with vendor %04x is not a wm97xx\n", VAR_31);
  VAR_30 = -VAR_12;
  goto alloc_err;
 }

 VAR_28->id = FUNC_20(VAR_28, VAR_10);

 VAR_28->variant = VAR_18;

 FUNC_2(VAR_28->dev, "detected a wm97%02x codec\n", VAR_28->id & 0xff);

 switch (VAR_28->id & 0xff) {
 default:
  FUNC_1(VAR_28->dev, "Support for wm97%02x not compiled in.\n",
   VAR_28->id & 0xff);
  VAR_30 = -VAR_12;
  goto alloc_err;
 }


 VAR_28->codec->phy_init(VAR_28);


 VAR_28->gpio[0] = FUNC_20(VAR_28, VAR_3);
 VAR_28->gpio[1] = FUNC_20(VAR_28, VAR_4);
 VAR_28->gpio[2] = FUNC_20(VAR_28, VAR_6);
 VAR_28->gpio[3] = FUNC_20(VAR_28, VAR_7);
 VAR_28->gpio[4] = FUNC_20(VAR_28, VAR_5);
 VAR_28->gpio[5] = FUNC_20(VAR_28, VAR_8);

 VAR_28->input_dev = FUNC_4();
 if (VAR_28->input_dev == ((void*)0)) {
  VAR_30 = -VAR_13;
  goto alloc_err;
 }


 VAR_28->input_dev->name = "wm97xx touchscreen";
 VAR_28->input_dev->phys = "wm97xx";
 VAR_28->input_dev->open = VAR_26;
 VAR_28->input_dev->close = VAR_25;

 FUNC_0(VAR_14, VAR_28->input_dev->evbit);
 FUNC_0(VAR_15, VAR_28->input_dev->evbit);
 FUNC_0(VAR_11, VAR_28->input_dev->keybit);

 FUNC_7(VAR_28->input_dev, VAR_1, VAR_20[0], VAR_20[1],
        VAR_20[2], 0);
 FUNC_7(VAR_28->input_dev, VAR_2, VAR_21[0], VAR_21[1],
        VAR_21[2], 0);
 FUNC_7(VAR_28->input_dev, VAR_0, VAR_19[0], VAR_19[1],
        VAR_19[2], 0);

 FUNC_8(VAR_28->input_dev, VAR_28);
 VAR_28->input_dev->dev.parent = VAR_27;

 VAR_30 = FUNC_6(VAR_28->input_dev);
 if (VAR_30 < 0)
  goto dev_alloc_err;


 VAR_28->battery_dev = FUNC_14("wm97xx-battery", -1);
 if (!VAR_28->battery_dev) {
  VAR_30 = -VAR_13;
  goto batt_err;
 }
 FUNC_17(VAR_28->battery_dev, VAR_28);
 VAR_28->battery_dev->dev.parent = VAR_27;
 VAR_28->battery_dev->dev.platform_data = VAR_29;
 VAR_30 = FUNC_13(VAR_28->battery_dev);
 if (VAR_30 < 0)
  goto batt_reg_err;



 VAR_28->touch_dev = FUNC_14("wm97xx-touch", -1);
 if (!VAR_28->touch_dev) {
  VAR_30 = -VAR_13;
  goto touch_err;
 }
 FUNC_17(VAR_28->touch_dev, VAR_28);
 VAR_28->touch_dev->dev.parent = VAR_27;
 VAR_28->touch_dev->dev.platform_data = VAR_29;
 VAR_30 = FUNC_13(VAR_28->touch_dev);
 if (VAR_30 < 0)
  goto touch_reg_err;

 return VAR_30;

 touch_reg_err:
 FUNC_15(VAR_28->touch_dev);
 touch_err:
 FUNC_16(VAR_28->battery_dev);
 VAR_28->battery_dev = ((void*)0);
 batt_reg_err:
 FUNC_15(VAR_28->battery_dev);
 batt_err:
 FUNC_9(VAR_28->input_dev);
 VAR_28->input_dev = ((void*)0);
 dev_alloc_err:
 FUNC_5(VAR_28->input_dev);
 alloc_err:
 FUNC_10(VAR_28);

 return VAR_30;
}
