
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct resource {int start; } ;
struct pxamci_host {int max_blk_size; int max_blk_count; int dma; int clkrate; int f_min; int f_max; int caps; int irq; int imask; int * clk; int sg_dma; scalar_t__ sg_cpu; scalar_t__ base; TYPE_1__* pdata; int dma_drcmrtx; int dma_drcmrrx; struct resource* res; int lock; int cmdat; int clkrt; struct pxamci_host* mmc; int max_seg_size; int max_phys_segs; int * ops; } ;
struct TYPE_10__ {TYPE_1__* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct mmc_host {int max_blk_size; int max_blk_count; int dma; int clkrate; int f_min; int f_max; int caps; int irq; int imask; int * clk; int sg_dma; scalar_t__ sg_cpu; scalar_t__ base; TYPE_1__* pdata; int dma_drcmrtx; int dma_drcmrrx; struct resource* res; int lock; int cmdat; int clkrt; struct mmc_host* mmc; int max_seg_size; int max_phys_segs; int * ops; } ;
struct TYPE_9__ {int gpio_card_detect; int gpio_card_ro; int gpio_power; scalar_t__ get_ro; scalar_t__ setpower; int (* init ) (TYPE_2__*,int ,struct pxamci_host*) ;int gpio_power_invert; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (int *) ;
 int VAR_22 ;
 int * FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (TYPE_2__*,char*,...) ;
 int FUNC_9 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int ,int *,int ) ;
 int FUNC_11 (TYPE_2__*,int ,scalar_t__,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int,char*) ;
 int FUNC_17 (int) ;
 scalar_t__ FUNC_18 (int ,int ) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (struct pxamci_host*) ;
 struct pxamci_host* FUNC_21 (int,TYPE_2__*) ;
 int FUNC_22 (struct pxamci_host*) ;
 struct pxamci_host* FUNC_23 (struct pxamci_host*) ;
 int FUNC_24 (struct platform_device*,int ) ;
 struct resource* FUNC_25 (struct platform_device*,int ,int) ;
 int FUNC_26 (struct platform_device*,struct pxamci_host*) ;
 int FUNC_27 (int) ;
 int FUNC_28 (char*,int ,int ,struct pxamci_host*) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_29 (struct pxamci_host*) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_30 (struct pxamci_host*) ;
 int FUNC_31 (struct resource*) ;
 int FUNC_32 (int,int ,int,char*,struct pxamci_host*) ;
 struct resource* FUNC_33 (int ,int ,char*) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (TYPE_2__*,int ,struct pxamci_host*) ;
 int FUNC_36 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_37(struct platform_device *VAR_27)
{
 struct mmc_host *VAR_28;
 struct pxamci_host *VAR_29 = ((void*)0);
 struct resource *VAR_30, *VAR_31, *VAR_32;
 int VAR_33, VAR_34, VAR_35 = -1, VAR_36 = -1, VAR_37 = -1;

 VAR_30 = FUNC_25(VAR_27, VAR_9, 0);
 VAR_34 = FUNC_24(VAR_27, 0);
 if (!VAR_30 || VAR_34 < 0)
  return -VAR_6;

 VAR_30 = FUNC_33(VAR_30->start, VAR_22, VAR_3);
 if (!VAR_30)
  return -VAR_4;

 VAR_28 = FUNC_21(sizeof(struct pxamci_host), &VAR_27->dev);
 if (!VAR_28) {
  VAR_33 = -VAR_5;
  goto out;
 }

 VAR_28->ops = &VAR_26;





 VAR_28->max_phys_segs = VAR_20;




 VAR_28->max_seg_size = VAR_21;




 VAR_28->max_blk_size = FUNC_5() ? 1023 : 2048;




 VAR_28->max_blk_count = 65535;

 VAR_29 = FUNC_23(VAR_28);
 VAR_29->mmc = VAR_28;
 VAR_29->dma = -1;
 VAR_29->pdata = VAR_27->dev.platform_data;
 VAR_29->clkrt = VAR_0;

 VAR_29->clk = FUNC_2(&VAR_27->dev, ((void*)0));
 if (FUNC_0(VAR_29->clk)) {
  VAR_33 = FUNC_1(VAR_29->clk);
  VAR_29->clk = ((void*)0);
  goto out;
 }

 VAR_29->clkrate = FUNC_3(VAR_29->clk);




 VAR_28->f_min = (VAR_29->clkrate + 63) / 64;
 VAR_28->f_max = (FUNC_6() || FUNC_7()) ? 26000000
         : VAR_29->clkrate;

 FUNC_29(VAR_29);

 VAR_28->caps = 0;
 VAR_29->cmdat = 0;
 if (!FUNC_5()) {
  VAR_28->caps |= VAR_12 | VAR_14;
  VAR_29->cmdat |= VAR_1;
  if (FUNC_6() || FUNC_7())
   VAR_28->caps |= VAR_13 |
         VAR_15;
 }

 VAR_29->sg_cpu = FUNC_10(&VAR_27->dev, VAR_21, &VAR_29->sg_dma, VAR_7);
 if (!VAR_29->sg_cpu) {
  VAR_33 = -VAR_5;
  goto out;
 }

 FUNC_34(&VAR_29->lock);
 VAR_29->res = VAR_30;
 VAR_29->irq = VAR_34;
 VAR_29->imask = VAR_17;

 VAR_29->base = FUNC_18(VAR_30->start, VAR_22);
 if (!VAR_29->base) {
  VAR_33 = -VAR_5;
  goto out;
 }





 FUNC_30(VAR_29);
 FUNC_36(0, VAR_29->base + VAR_19);
 FUNC_36(64, VAR_29->base + VAR_18);
 FUNC_36(VAR_29->imask, VAR_29->base + VAR_16);

 VAR_29->dma = FUNC_28(VAR_3, VAR_2,
        VAR_24, VAR_29);
 if (VAR_29->dma < 0) {
  VAR_33 = -VAR_4;
  goto out;
 }

 VAR_33 = FUNC_32(VAR_29->irq, VAR_25, 0, VAR_3, VAR_29);
 if (VAR_33)
  goto out;

 FUNC_26(VAR_27, VAR_28);

 VAR_31 = FUNC_25(VAR_27, VAR_8, 0);
 if (!VAR_31) {
  VAR_33 = -VAR_6;
  goto out;
 }
 VAR_29->dma_drcmrrx = VAR_31->start;

 VAR_32 = FUNC_25(VAR_27, VAR_8, 1);
 if (!VAR_32) {
  VAR_33 = -VAR_6;
  goto out;
 }
 VAR_29->dma_drcmrtx = VAR_32->start;

 if (VAR_29->pdata) {
  VAR_35 = VAR_29->pdata->gpio_card_detect;
  VAR_36 = VAR_29->pdata->gpio_card_ro;
  VAR_37 = VAR_29->pdata->gpio_power;
 }
 if (FUNC_15(VAR_37)) {
  VAR_33 = FUNC_16(VAR_37, "mmc card power");
  if (VAR_33) {
   FUNC_8(&VAR_27->dev, "Failed requesting gpio_power %d\n", VAR_37);
   goto out;
  }
  FUNC_13(VAR_37,
          VAR_29->pdata->gpio_power_invert);
 }
 if (FUNC_15(VAR_36)) {
  VAR_33 = FUNC_16(VAR_36, "mmc card read only");
  if (VAR_33) {
   FUNC_8(&VAR_27->dev, "Failed requesting gpio_ro %d\n", VAR_36);
   goto err_gpio_ro;
  }
  FUNC_12(VAR_36);
 }
 if (FUNC_15(VAR_35)) {
  VAR_33 = FUNC_16(VAR_35, "mmc card detect");
  if (VAR_33) {
   FUNC_8(&VAR_27->dev, "Failed requesting gpio_cd %d\n", VAR_35);
   goto err_gpio_cd;
  }
  FUNC_12(VAR_35);

  VAR_33 = FUNC_32(FUNC_17(VAR_35), VAR_23,
      VAR_11 | VAR_10,
      "mmc card detect", VAR_28);
  if (VAR_33) {
   FUNC_8(&VAR_27->dev, "failed to request card detect IRQ\n");
   goto err_request_irq;
  }
 }

 if (VAR_29->pdata && VAR_29->pdata->init)
  VAR_29->pdata->init(&VAR_27->dev, VAR_23, VAR_28);

 if (FUNC_15(VAR_37) && VAR_29->pdata->setpower)
  FUNC_9(&VAR_27->dev, "gpio_power and setpower() both defined\n");
 if (FUNC_15(VAR_36) && VAR_29->pdata->get_ro)
  FUNC_9(&VAR_27->dev, "gpio_ro and get_ro() both defined\n");

 FUNC_20(VAR_28);

 return 0;

err_request_irq:
 FUNC_14(VAR_35);
err_gpio_cd:
 FUNC_14(VAR_36);
err_gpio_ro:
 FUNC_14(VAR_37);
 out:
 if (VAR_29) {
  if (VAR_29->dma >= 0)
   FUNC_27(VAR_29->dma);
  if (VAR_29->base)
   FUNC_19(VAR_29->base);
  if (VAR_29->sg_cpu)
   FUNC_11(&VAR_27->dev, VAR_21, VAR_29->sg_cpu, VAR_29->sg_dma);
  if (VAR_29->clk)
   FUNC_4(VAR_29->clk);
 }
 if (VAR_28)
  FUNC_22(VAR_28);
 FUNC_31(VAR_30);
 return VAR_33;
}
