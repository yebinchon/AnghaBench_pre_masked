
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int start; } ;
struct pxa3xx_nand_platform_data {int nr_parts; int parts; } ;
struct nand_chip {int dummy; } ;
struct pxa3xx_nand_info {int clk; int * mmio_base; struct mtd_info* data_buff; int data_buff_phys; int data_buff_size; int data_dma_ch; int drcmr_cmd; int drcmr_dat; struct nand_chip nand_chip; struct platform_device* pdev; } ;
struct TYPE_4__ {struct pxa3xx_nand_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; int name; } ;
struct mtd_info {int owner; struct pxa3xx_nand_info* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (struct mtd_info*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*,int ,struct mtd_info*,int ) ;
 int FUNC_9 (int ,struct pxa3xx_nand_info*) ;
 int * FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct mtd_info*) ;
 struct mtd_info* FUNC_13 (int,int ) ;
 scalar_t__ FUNC_14 (struct mtd_info*,int) ;
 int FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int) ;
 int FUNC_17 (struct platform_device*,struct mtd_info*) ;
 int FUNC_18 (struct pxa3xx_nand_info*,struct pxa3xx_nand_platform_data*) ;
 int FUNC_19 (struct pxa3xx_nand_info*) ;
 int FUNC_20 (struct mtd_info*,struct pxa3xx_nand_info*) ;
 int VAR_10 ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ,int ,int ,struct pxa3xx_nand_info*) ;
 struct resource* FUNC_24 (int ,int ,int ) ;
 int FUNC_25 (struct resource*) ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_12)
{
 struct pxa3xx_nand_platform_data *VAR_13;
 struct pxa3xx_nand_info *VAR_14;
 struct nand_chip *VAR_15;
 struct mtd_info *VAR_16;
 struct resource *VAR_17;
 int VAR_18 = 0, VAR_19;

 VAR_13 = VAR_12->dev.platform_data;

 if (!VAR_13) {
  FUNC_7(&VAR_12->dev, "no platform data defined\n");
  return -VAR_1;
 }

 VAR_16 = FUNC_13(sizeof(struct mtd_info) + sizeof(struct pxa3xx_nand_info),
   VAR_4);
 if (!VAR_16) {
  FUNC_7(&VAR_12->dev, "failed to allocate memory\n");
  return -VAR_2;
 }

 VAR_14 = (struct pxa3xx_nand_info *)(&VAR_16[1]);
 VAR_14->pdev = VAR_12;

 VAR_15 = &VAR_14->nand_chip;
 VAR_16->priv = VAR_14;
 VAR_16->owner = VAR_9;

 VAR_14->clk = FUNC_5(&VAR_12->dev, ((void*)0));
 if (FUNC_0(VAR_14->clk)) {
  FUNC_7(&VAR_12->dev, "failed to get nand clock\n");
  VAR_18 = FUNC_1(VAR_14->clk);
  goto fail_free_mtd;
 }
 FUNC_4(VAR_14->clk);

 VAR_17 = FUNC_16(VAR_12, VAR_5, 0);
 if (VAR_17 == ((void*)0)) {
  FUNC_7(&VAR_12->dev, "no resource defined for data DMA\n");
  VAR_18 = -VAR_3;
  goto fail_put_clk;
 }
 VAR_14->drcmr_dat = VAR_17->start;

 VAR_17 = FUNC_16(VAR_12, VAR_5, 1);
 if (VAR_17 == ((void*)0)) {
  FUNC_7(&VAR_12->dev, "no resource defined for command DMA\n");
  VAR_18 = -VAR_3;
  goto fail_put_clk;
 }
 VAR_14->drcmr_cmd = VAR_17->start;

 VAR_19 = FUNC_15(VAR_12, 0);
 if (VAR_19 < 0) {
  FUNC_7(&VAR_12->dev, "no IRQ resource defined\n");
  VAR_18 = -VAR_3;
  goto fail_put_clk;
 }

 VAR_17 = FUNC_16(VAR_12, VAR_6, 0);
 if (VAR_17 == ((void*)0)) {
  FUNC_7(&VAR_12->dev, "no IO memory resource defined\n");
  VAR_18 = -VAR_1;
  goto fail_put_clk;
 }

 VAR_17 = FUNC_24(VAR_17->start, FUNC_25(VAR_17), VAR_12->name);
 if (VAR_17 == ((void*)0)) {
  FUNC_7(&VAR_12->dev, "failed to request memory resource\n");
  VAR_18 = -VAR_0;
  goto fail_put_clk;
 }

 VAR_14->mmio_base = FUNC_10(VAR_17->start, FUNC_25(VAR_17));
 if (VAR_14->mmio_base == ((void*)0)) {
  FUNC_7(&VAR_12->dev, "ioremap() failed\n");
  VAR_18 = -VAR_1;
  goto fail_free_res;
 }

 VAR_18 = FUNC_19(VAR_14);
 if (VAR_18)
  goto fail_free_io;

 VAR_18 = FUNC_23(VAR_8, VAR_10, VAR_7,
    VAR_12->name, VAR_14);
 if (VAR_18 < 0) {
  FUNC_7(&VAR_12->dev, "failed to request IRQ\n");
  goto fail_free_buf;
 }

 VAR_18 = FUNC_18(VAR_14, VAR_13);
 if (VAR_18) {
  FUNC_7(&VAR_12->dev, "failed to detect flash\n");
  VAR_18 = -VAR_1;
  goto fail_free_irq;
 }

 FUNC_20(VAR_16, VAR_14);

 FUNC_17(VAR_12, VAR_16);

 if (FUNC_14(VAR_16, 1)) {
  FUNC_7(&VAR_12->dev, "failed to scan nand\n");
  VAR_18 = -VAR_3;
  goto fail_free_irq;
 }

 return FUNC_2(VAR_16, VAR_13->parts, VAR_13->nr_parts);

fail_free_irq:
 FUNC_9(VAR_8, VAR_14);
fail_free_buf:
 if (VAR_11) {
  FUNC_21(VAR_14->data_dma_ch);
  FUNC_8(&VAR_12->dev, VAR_14->data_buff_size,
   VAR_14->data_buff, VAR_14->data_buff_phys);
 } else
  FUNC_12(VAR_14->data_buff);
fail_free_io:
 FUNC_11(VAR_14->mmio_base);
fail_free_res:
 FUNC_22(VAR_17->start, FUNC_25(VAR_17));
fail_put_clk:
 FUNC_3(VAR_14->clk);
 FUNC_6(VAR_14->clk);
fail_free_mtd:
 FUNC_12(VAR_16);
 return VAR_18;
}
