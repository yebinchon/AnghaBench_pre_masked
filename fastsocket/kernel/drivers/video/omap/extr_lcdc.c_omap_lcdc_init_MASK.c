
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct omapfb_mem_desc {int dummy; } ;
struct omapfb_device {int dev; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {int ext_mode; struct clk* lcd_ck; struct omapfb_device* fbdev; scalar_t__ irq_mask; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*) ;
 void* FUNC_5 (int ,char*) ;
 int FUNC_6 (struct clk*) ;
 int FUNC_7 (struct clk*) ;
 int FUNC_8 (struct clk*,int) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,struct omapfb_device*) ;
 int FUNC_11 () ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (scalar_t__,int ) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int ,int ,int ,int ,struct omapfb_device*) ;
 int FUNC_21 (struct omapfb_mem_desc*) ;

__attribute__((used)) static int FUNC_22(struct omapfb_device *VAR_6, int VAR_7,
     struct omapfb_mem_desc *VAR_8)
{
 int VAR_9;
 u32 VAR_10;
 int VAR_11;
 struct clk *VAR_12;

 VAR_3.irq_mask = 0;

 VAR_3.fbdev = VAR_6;
 VAR_3.ext_mode = VAR_7;

 VAR_10 = 0;
 FUNC_18(VAR_10, VAR_1);




 VAR_3.lcd_ck = FUNC_5(VAR_6->dev, "lcd_ck");
 if (FUNC_0(VAR_3.lcd_ck)) {
  FUNC_9(VAR_6->dev, "unable to access LCD clock\n");
  VAR_9 = FUNC_1(VAR_3.lcd_ck);
  goto fail0;
 }

 VAR_12 = FUNC_5(VAR_6->dev, "tc_ck");
 if (FUNC_0(VAR_12)) {
  FUNC_9(VAR_6->dev, "unable to access TC clock\n");
  VAR_9 = FUNC_1(VAR_12);
  goto fail1;
 }

 VAR_11 = FUNC_6(VAR_12);
 FUNC_7(VAR_12);

 if (FUNC_12())
  VAR_11 /= 4;
 if (FUNC_13())
  VAR_11 /= 3;
 VAR_9 = FUNC_8(VAR_3.lcd_ck, VAR_11);
 if (VAR_9) {
  FUNC_9(VAR_6->dev, "failed to adjust LCD rate\n");
  goto fail1;
 }
 FUNC_4(VAR_3.lcd_ck);

 VAR_9 = FUNC_20(VAR_2, VAR_5, 0, VAR_0, VAR_6);
 if (VAR_9) {
  FUNC_9(VAR_6->dev, "unable to get IRQ\n");
  goto fail2;
 }

 VAR_9 = FUNC_15(VAR_4, ((void*)0));
 if (VAR_9) {
  FUNC_9(VAR_6->dev, "unable to get LCD DMA\n");
  goto fail3;
 }

 FUNC_17(VAR_7);
 FUNC_16(VAR_7);

 if (!VAR_7)
  if ((VAR_9 = FUNC_2()) < 0)
   goto fail4;

 if ((VAR_9 = FUNC_21(VAR_8)) < 0)
  goto fail5;

 FUNC_19("omapfb: LCDC initialized\n");

 return 0;
fail5:
 if (!VAR_7)
  FUNC_11();
fail4:
 FUNC_14();
fail3:
 FUNC_10(VAR_2, VAR_3.fbdev);
fail2:
 FUNC_3(VAR_3.lcd_ck);
fail1:
 FUNC_7(VAR_3.lcd_ck);
fail0:
 return VAR_9;
}
