
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tmio_nand_data {int num_partitions; struct mtd_partition* partition; int badblock_pattern; } ;
struct TYPE_5__ {int size; int bytes; int correct; int calculate; int hwctl; int mode; } ;
struct nand_chip {int chip_delay; int waitfunc; int badblock_pattern; TYPE_1__ ecc; int verify_buf; int read_buf; int write_buf; int read_byte; int dev_ready; int cmd_ctrl; void* IO_ADDR_W; void* IO_ADDR_R; } ;
struct mtd_info {char* name; struct nand_chip* priv; } ;
struct tmio_nand {int fcr_base; int irq; void* ccr; void* fcr; struct nand_chip chip; struct mtd_info mtd; struct platform_device* dev; } ;
struct resource {int start; int end; } ;
struct TYPE_6__ {scalar_t__ platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct mtd_partition {int dummy; } ;
struct mfd_cell {struct tmio_nand_data* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (struct mtd_info*,struct mtd_partition*,int) ;
 int FUNC_2 (TYPE_2__*,char*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (int,struct tmio_nand*) ;
 void* FUNC_6 (int,int) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (struct tmio_nand*) ;
 struct tmio_nand* FUNC_9 (int,int ) ;
 int FUNC_10 (struct mtd_info*) ;
 scalar_t__ FUNC_11 (struct mtd_info*,int) ;
 int FUNC_12 (struct mtd_info*,int ,struct mtd_partition**,int ) ;
 int VAR_7 ;
 int FUNC_13 (struct platform_device*,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int) ;
 int FUNC_15 (struct platform_device*,struct tmio_nand*) ;
 int FUNC_16 (int,int *,int ,int ,struct tmio_nand*) ;
 int FUNC_17 (struct platform_device*,struct tmio_nand*) ;
 int FUNC_18 (struct platform_device*,struct tmio_nand*) ;
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

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_19)
{
 struct mfd_cell *VAR_20 = (struct mfd_cell *)VAR_19->dev.platform_data;
 struct tmio_nand_data *VAR_21 = VAR_20->driver_data;
 struct resource *VAR_22 = FUNC_14(VAR_19,
   VAR_4, 0);
 struct resource *VAR_23 = FUNC_14(VAR_19,
   VAR_4, 1);
 int VAR_24 = FUNC_13(VAR_19, 0);
 struct tmio_nand *VAR_25;
 struct mtd_info *VAR_26;
 struct nand_chip *VAR_27;




 int VAR_28;

 if (VAR_21 == ((void*)0))
  FUNC_4(&VAR_19->dev, "NULL platform data!\n");

 VAR_25 = FUNC_9(sizeof *VAR_25, VAR_3);
 if (!VAR_25) {
  VAR_28 = -VAR_2;
  goto err_kzalloc;
 }

 VAR_25->dev = VAR_19;

 FUNC_15(VAR_19, VAR_25);
 VAR_26 = &VAR_25->mtd;
 VAR_27 = &VAR_25->chip;
 VAR_26->priv = VAR_27;
 VAR_26->name = "tmio-nand";

 VAR_25->ccr = FUNC_6(VAR_23->start, VAR_23->end - VAR_23->start + 1);
 if (!VAR_25->ccr) {
  VAR_28 = -VAR_0;
  goto err_iomap_ccr;
 }

 VAR_25->fcr_base = VAR_22->start & 0xfffff;
 VAR_25->fcr = FUNC_6(VAR_22->start, VAR_22->end - VAR_22->start + 1);
 if (!VAR_25->fcr) {
  VAR_28 = -VAR_0;
  goto err_iomap_fcr;
 }

 VAR_28 = FUNC_17(VAR_19, VAR_25);
 if (VAR_28)
  goto err_hwinit;


 VAR_27->IO_ADDR_R = VAR_25->fcr;
 VAR_27->IO_ADDR_W = VAR_25->fcr;


 VAR_27->cmd_ctrl = VAR_13;
 VAR_27->dev_ready = VAR_11;
 VAR_27->read_byte = VAR_15;
 VAR_27->write_buf = VAR_18;
 VAR_27->read_buf = VAR_14;
 VAR_27->verify_buf = VAR_16;


 VAR_27->ecc.mode = VAR_6;
 VAR_27->ecc.size = 512;
 VAR_27->ecc.bytes = 6;
 VAR_27->ecc.hwctl = VAR_12;
 VAR_27->ecc.calculate = VAR_9;
 VAR_27->ecc.correct = VAR_10;

 if (VAR_21)
  VAR_27->badblock_pattern = VAR_21->badblock_pattern;


 VAR_27->chip_delay = 15;

 VAR_28 = FUNC_16(VAR_24, &VAR_8,
    VAR_5, FUNC_3(&VAR_19->dev), VAR_25);
 if (VAR_28) {
  FUNC_2(&VAR_19->dev, "request_irq error %d\n", VAR_28);
  goto err_irq;
 }

 VAR_25->irq = VAR_24;
 VAR_27->waitfunc = VAR_17;


 if (FUNC_11(VAR_26, 1)) {
  VAR_28 = -VAR_1;
  goto err_scan;
 }
 VAR_28 = FUNC_0(VAR_26);

 if (!VAR_28)
  return VAR_28;

 FUNC_10(VAR_26);

err_scan:
 if (VAR_25->irq)
  FUNC_5(VAR_25->irq, VAR_25);
err_irq:
 FUNC_18(VAR_19, VAR_25);
err_hwinit:
 FUNC_7(VAR_25->fcr);
err_iomap_fcr:
 FUNC_7(VAR_25->ccr);
err_iomap_ccr:
 FUNC_8(VAR_25);
err_kzalloc:
 return VAR_28;
}
