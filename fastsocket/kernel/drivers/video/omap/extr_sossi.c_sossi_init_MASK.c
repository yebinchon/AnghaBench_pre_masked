
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omapfb_device {int dev; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {struct clk* fck; struct omapfb_device* fbdev; int fck_hz; int lock; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct clk*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 struct clk* FUNC_4 (int ,char*) ;
 int FUNC_5 (struct clk*) ;
 int FUNC_6 (struct clk*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ,char*,int,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int ,int ,int ,char*,int ) ;
 TYPE_1__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct omapfb_device *VAR_15)
{
 u32 VAR_16, VAR_17;
 struct clk *VAR_18;
 struct clk *VAR_19;
 int VAR_20;

 VAR_12.base = FUNC_9(VAR_7, VAR_11);
 if (!VAR_12.base) {
  FUNC_7(VAR_15->dev, "can't ioremap SoSSI\n");
  return -VAR_3;
 }

 VAR_12.fbdev = VAR_15;
 FUNC_16(&VAR_12.lock);

 VAR_19 = FUNC_4(VAR_15->dev, "ck_dpll1out");
 if (FUNC_0(VAR_19)) {
  FUNC_7(VAR_15->dev, "can't get DPLL1OUT clock\n");
  return FUNC_1(VAR_19);
 }





 VAR_12.fck_hz = FUNC_5(VAR_19);
 FUNC_6(VAR_19);

 VAR_18 = FUNC_4(VAR_15->dev, "ck_sossi");
 if (FUNC_0(VAR_18)) {
  FUNC_7(VAR_15->dev, "can't get SoSSI functional clock\n");
  return FUNC_1(VAR_18);
 }
 VAR_12.fck = VAR_18;


 VAR_16 = FUNC_11(VAR_6);
 VAR_16 |= VAR_1;
 FUNC_12(VAR_16, VAR_6);
 VAR_16 &= ~VAR_1;
 FUNC_12(VAR_16, VAR_6);

 FUNC_3(VAR_12.fck);
 VAR_16 = FUNC_11(VAR_0);
 VAR_16 &= ~(1 << 8);
 FUNC_12(VAR_16, VAR_0);

 VAR_16 = FUNC_14(VAR_10);

 VAR_16 |= (1 << 0) | (1 << 1);
 FUNC_15(VAR_10, VAR_16);

 VAR_16 &= ~(1 << 1);
 FUNC_15(VAR_10, VAR_16);

 FUNC_15(VAR_8, 0);
 VAR_16 = FUNC_14(VAR_8);
 VAR_17 = FUNC_14(VAR_8);

 if (VAR_16 != 0x55555555 || VAR_17 != 0xaaaaaaaa) {
  FUNC_7(VAR_15->dev,
   "invalid SoSSI sync pattern: %08x, %08x\n", VAR_16, VAR_17);
  VAR_20 = -VAR_2;
  goto err;
 }

 if ((VAR_20 = FUNC_10(VAR_13, ((void*)0))) < 0) {
  FUNC_7(VAR_15->dev, "can't get LCDC IRQ\n");
  VAR_20 = -VAR_2;
  goto err;
 }

 VAR_16 = FUNC_14(VAR_8);
 VAR_16 = FUNC_14(VAR_8);
 FUNC_8(VAR_15->dev, "SoSSI version %d.%d initialized\n",
  VAR_16 >> 16, VAR_16 & 0xffff);

 VAR_16 = FUNC_14(VAR_9);
 VAR_16 |= (1 << 19);
 VAR_16 &= ~(1 << 31);
 FUNC_15(VAR_9, VAR_16);

 if ((VAR_20 = FUNC_13(VAR_4, VAR_14,
        VAR_5,
      "sossi_match", VAR_12.fbdev->dev)) < 0) {
  FUNC_7(VAR_12.fbdev->dev, "can't get SoSSI match IRQ\n");
  goto err;
 }

 FUNC_2(VAR_12.fck);
 return 0;

err:
 FUNC_2(VAR_12.fck);
 FUNC_6(VAR_12.fck);
 return VAR_20;
}
