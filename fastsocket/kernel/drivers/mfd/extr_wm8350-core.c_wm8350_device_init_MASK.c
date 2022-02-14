
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u16 ;
struct wm8350_platform_data {int (* init ) (struct wm8350*) ;scalar_t__ irq_high; } ;
struct TYPE_10__ {int pdev; } ;
struct TYPE_9__ {int pdev; } ;
struct TYPE_12__ {int rev_g_coeff; int pdev; } ;
struct TYPE_8__ {int pdev; } ;
struct TYPE_14__ {int pdev; } ;
struct TYPE_13__ {int pdev; } ;
struct TYPE_11__ {void* max_isink; void* max_dcdc; } ;
struct wm8350 {int (* read_dev ) (struct wm8350*,int ,int,int*) ;int chip_irq; int reg_cache; TYPE_3__ wdt; TYPE_2__ rtc; TYPE_5__ power; TYPE_1__ hwmon; TYPE_7__ gpio; TYPE_6__ codec; int dev; int irq_mutex; int auxadc_mutex; TYPE_4__ pmic; } ;
typedef int mask_rev ;
typedef int id2 ;
typedef int id1 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;




 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int *,int ,int,char*,struct wm8350*) ;
 int FUNC_6 (struct wm8350*,int ,int,int*) ;
 int FUNC_7 (struct wm8350*,int ,int,int*) ;
 int FUNC_8 (struct wm8350*,int ,int,int*) ;
 int FUNC_9 (struct wm8350*) ;
 int FUNC_10 (struct wm8350*,int ,int ) ;
 int FUNC_11 (struct wm8350*,char*,int *) ;
 int FUNC_12 (struct wm8350*,int,int) ;
 int VAR_22 ;
 int FUNC_13 (struct wm8350*,int ,int) ;
 int FUNC_14 (struct wm8350*,int ,int ) ;

int FUNC_15(struct wm8350 *VAR_23, int VAR_24,
         struct wm8350_platform_data *VAR_25)
{
 int VAR_26;
 u16 VAR_27, VAR_28, VAR_29;
 u16 VAR_30, VAR_31, VAR_32;


 VAR_26 = VAR_23->read_dev(VAR_23, VAR_17, sizeof(VAR_27), &VAR_27);
 if (VAR_26 != 0) {
  FUNC_1(VAR_23->dev, "Failed to read ID: %d\n", VAR_26);
  goto err;
 }

 VAR_26 = VAR_23->read_dev(VAR_23, VAR_11, sizeof(VAR_28), &VAR_28);
 if (VAR_26 != 0) {
  FUNC_1(VAR_23->dev, "Failed to read ID: %d\n", VAR_26);
  goto err;
 }

 VAR_26 = VAR_23->read_dev(VAR_23, VAR_18, sizeof(VAR_29),
          &VAR_29);
 if (VAR_26 != 0) {
  FUNC_1(VAR_23->dev, "Failed to read revision: %d\n", VAR_26);
  goto err;
 }

 VAR_27 = FUNC_0(VAR_27);
 VAR_28 = FUNC_0(VAR_28);
 VAR_29 = FUNC_0(VAR_29);

 if (VAR_27 != 0x6143) {
  FUNC_1(VAR_23->dev,
   "Device with ID %x is not a WM8350\n", VAR_27);
  VAR_26 = -VAR_0;
  goto err;
 }

 VAR_31 = VAR_28 & VAR_6 >> 10;
 VAR_30 = VAR_28 & VAR_7;
 VAR_32 = (VAR_28 & VAR_4) >> 12;
 FUNC_2(VAR_23->dev,
   "CONF_STS %d, CUST_ID %d, MASK_REV %d, CHIP_REV %d\n",
   VAR_31, VAR_30, VAR_29, VAR_32);

 if (VAR_30 != 0) {
  FUNC_1(VAR_23->dev, "Unsupported CUST_ID\n");
  VAR_26 = -VAR_0;
  goto err;
 }

 switch (VAR_29) {
 case 0:
  VAR_23->pmic.max_dcdc = VAR_9;
  VAR_23->pmic.max_isink = VAR_16;

  switch (VAR_32) {
  case 131:
   FUNC_2(VAR_23->dev, "WM8350 Rev E\n");
   break;
  case 130:
   FUNC_2(VAR_23->dev, "WM8350 Rev F\n");
   break;
  case 129:
   FUNC_2(VAR_23->dev, "WM8350 Rev G\n");
   VAR_23->power.rev_g_coeff = 1;
   break;
  case 128:
   FUNC_2(VAR_23->dev, "WM8350 Rev H\n");
   VAR_23->power.rev_g_coeff = 1;
   break;
  default:

   FUNC_1(VAR_23->dev, "Unknown WM8350 CHIP_REV\n");
   VAR_26 = -VAR_0;
   goto err;
  }
  break;

 case 1:
  VAR_23->pmic.max_dcdc = VAR_8;
  VAR_23->pmic.max_isink = VAR_15;

  switch (VAR_32) {
  case 0:
   FUNC_2(VAR_23->dev, "WM8351 Rev A\n");
   VAR_23->power.rev_g_coeff = 1;
   break;

  case 1:
   FUNC_2(VAR_23->dev, "WM8351 Rev B\n");
   VAR_23->power.rev_g_coeff = 1;
   break;

  default:
   FUNC_1(VAR_23->dev, "Unknown WM8351 CHIP_REV\n");
   VAR_26 = -VAR_0;
   goto err;
  }
  break;

 case 2:
  VAR_23->pmic.max_dcdc = VAR_9;
  VAR_23->pmic.max_isink = VAR_16;

  switch (VAR_32) {
  case 0:
   FUNC_2(VAR_23->dev, "WM8352 Rev A\n");
   VAR_23->power.rev_g_coeff = 1;
   break;

  default:
   FUNC_1(VAR_23->dev, "Unknown WM8352 CHIP_REV\n");
   VAR_26 = -VAR_0;
   goto err;
  }
  break;

 default:
  FUNC_1(VAR_23->dev, "Unknown MASK_REV\n");
  VAR_26 = -VAR_0;
  goto err;
 }

 VAR_26 = FUNC_12(VAR_23, VAR_29, VAR_31);
 if (VAR_26 < 0) {
  FUNC_1(VAR_23->dev, "Failed to create register cache\n");
  return VAR_26;
 }

 FUNC_13(VAR_23, VAR_20, 0xFFFF);
 FUNC_13(VAR_23, VAR_12, 0xFFFF);
 FUNC_13(VAR_23, VAR_13, 0xFFFF);
 FUNC_13(VAR_23, VAR_21, 0xFFFF);
 FUNC_13(VAR_23, VAR_10, 0xFFFF);
 FUNC_13(VAR_23, VAR_5, 0xFFFF);

 FUNC_4(&VAR_23->auxadc_mutex);
 FUNC_4(&VAR_23->irq_mutex);
 if (VAR_24) {
  int VAR_33 = VAR_1;

  if (VAR_25 && VAR_25->irq_high) {
   VAR_33 |= VAR_2;

   FUNC_14(VAR_23, VAR_19,
     VAR_14);
  } else {
   VAR_33 |= VAR_3;

   FUNC_10(VAR_23, VAR_19,
       VAR_14);
  }

  VAR_26 = FUNC_5(VAR_24, ((void*)0), VAR_22, VAR_33,
        "wm8350", VAR_23);
  if (VAR_26 != 0) {
   FUNC_1(VAR_23->dev, "Failed to request IRQ: %d\n",
    VAR_26);
   goto err;
  }
 } else {
  FUNC_1(VAR_23->dev, "No IRQ configured\n");
  goto err;
 }
 VAR_23->chip_irq = VAR_24;

 if (VAR_25 && VAR_25->init) {
  VAR_26 = VAR_25->init(VAR_23);
  if (VAR_26 != 0) {
   FUNC_1(VAR_23->dev, "Platform init() failed: %d\n",
    VAR_26);
   goto err;
  }
 }

 FUNC_13(VAR_23, VAR_20, 0x0);

 FUNC_11(VAR_23, "wm8350-codec",
       &(VAR_23->codec.pdev));
 FUNC_11(VAR_23, "wm8350-gpio",
       &(VAR_23->gpio.pdev));
 FUNC_11(VAR_23, "wm8350-hwmon",
       &(VAR_23->hwmon.pdev));
 FUNC_11(VAR_23, "wm8350-power",
       &(VAR_23->power.pdev));
 FUNC_11(VAR_23, "wm8350-rtc", &(VAR_23->rtc.pdev));
 FUNC_11(VAR_23, "wm8350-wdt", &(VAR_23->wdt.pdev));

 return 0;

err:
 FUNC_3(VAR_23->reg_cache);
 return VAR_26;
}
