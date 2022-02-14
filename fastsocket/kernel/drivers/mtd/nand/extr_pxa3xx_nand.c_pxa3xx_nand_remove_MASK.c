
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct pxa3xx_nand_info {int clk; int mmio_base; struct mtd_info* data_buff; int data_buff_phys; int data_buff_size; int data_dma_ch; } ;
struct platform_device {int dev; } ;
struct mtd_info {struct pxa3xx_nand_info* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mtd_info*) ;
 int FUNC_3 (struct mtd_info*) ;
 int FUNC_4 (int *,int ,struct mtd_info*,int ) ;
 int FUNC_5 (int ,struct pxa3xx_nand_info*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mtd_info*) ;
 struct mtd_info* FUNC_8 (struct platform_device*) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct resource*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_8(VAR_3);
 struct pxa3xx_nand_info *VAR_5 = VAR_4->priv;
 struct resource *VAR_6;

 FUNC_10(VAR_3, ((void*)0));

 FUNC_2(VAR_4);
 FUNC_3(VAR_4);
 FUNC_5(VAR_1, VAR_5);
 if (VAR_2) {
  FUNC_11(VAR_5->data_dma_ch);
  FUNC_4(&VAR_3->dev, VAR_5->data_buff_size,
    VAR_5->data_buff, VAR_5->data_buff_phys);
 } else
  FUNC_7(VAR_5->data_buff);

 FUNC_6(VAR_5->mmio_base);
 VAR_6 = FUNC_9(VAR_3, VAR_0, 0);
 FUNC_12(VAR_6->start, FUNC_13(VAR_6));

 FUNC_0(VAR_5->clk);
 FUNC_1(VAR_5->clk);

 FUNC_7(VAR_4);
 return 0;
}
