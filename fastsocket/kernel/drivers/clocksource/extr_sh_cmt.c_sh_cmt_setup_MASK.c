
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sh_timer_config {int clk; int clocksource_rating; int clockevent_rating; int name; } ;
struct TYPE_5__ {int flags; struct sh_cmt_priv* dev_id; int handler; int name; } ;
struct sh_cmt_priv {int width; int overflow_bit; int clear_bits; int * mapbase; TYPE_1__ irqaction; int clk; struct platform_device* pdev; } ;
struct resource {int start; } ;
struct TYPE_6__ {struct sh_timer_config* platform_data; } ;
struct platform_device {TYPE_3__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int * FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sh_cmt_priv*,int ,int) ;
 int FUNC_7 (struct platform_device*,int ) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct sh_cmt_priv*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int,TYPE_1__*) ;
 int FUNC_12 (struct resource*) ;
 int FUNC_13 (int,TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_14 (struct sh_cmt_priv*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct sh_cmt_priv *VAR_6, struct platform_device *VAR_7)
{
 struct sh_timer_config *VAR_8 = VAR_7->dev.platform_data;
 struct resource *VAR_9;
 int VAR_10, VAR_11;
 VAR_11 = -VAR_0;

 FUNC_6(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->pdev = VAR_7;

 if (!VAR_8) {
  FUNC_3(&VAR_6->pdev->dev, "missing platform data\n");
  goto err0;
 }

 FUNC_9(VAR_7, VAR_6);

 VAR_9 = FUNC_8(VAR_6->pdev, VAR_1, 0);
 if (!VAR_9) {
  FUNC_3(&VAR_6->pdev->dev, "failed to get I/O memory\n");
  goto err0;
 }

 VAR_10 = FUNC_7(VAR_6->pdev, 0);
 if (VAR_10 < 0) {
  FUNC_3(&VAR_6->pdev->dev, "failed to get irq\n");
  goto err0;
 }


 VAR_6->mapbase = FUNC_4(VAR_9->start, FUNC_12(VAR_9));
 if (VAR_6->mapbase == ((void*)0)) {
  FUNC_10("sh_cmt: failed to remap I/O memory\n");
  goto err0;
 }


 VAR_6->irqaction.name = VAR_8->name;
 VAR_6->irqaction.handler = VAR_5;
 VAR_6->irqaction.dev_id = VAR_6;
 VAR_6->irqaction.flags = VAR_2 | VAR_4 | VAR_3;
 VAR_11 = FUNC_13(VAR_10, &VAR_6->irqaction);
 if (VAR_11) {
  FUNC_10("sh_cmt: failed to request irq %d\n", VAR_10);
  goto err1;
 }


 VAR_6->clk = FUNC_2(&VAR_6->pdev->dev, VAR_8->clk);
 if (FUNC_0(VAR_6->clk)) {
  FUNC_10("sh_cmt: cannot get clock \"%s\"\n", VAR_8->clk);
  VAR_11 = FUNC_1(VAR_6->clk);
  goto err2;
 }

 if (FUNC_12(VAR_9) == 6) {
  VAR_6->width = 16;
  VAR_6->overflow_bit = 0x80;
  VAR_6->clear_bits = ~0x80;
 } else {
  VAR_6->width = 32;
  VAR_6->overflow_bit = 0x8000;
  VAR_6->clear_bits = ~0xc000;
 }

 return FUNC_14(VAR_6, VAR_8->name,
          VAR_8->clockevent_rating,
          VAR_8->clocksource_rating);
 err2:
 FUNC_11(VAR_10, &VAR_6->irqaction);
 err1:
 FUNC_5(VAR_6->mapbase);
 err0:
 return VAR_11;
}
