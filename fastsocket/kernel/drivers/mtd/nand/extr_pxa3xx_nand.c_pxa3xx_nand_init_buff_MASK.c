
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_dma_desc {int dummy; } ;
struct pxa3xx_nand_info {int data_buff_size; scalar_t__ data_dma_ch; int data_buff_phys; int * data_buff; scalar_t__ data_desc_addr; void* data_desc; struct platform_device* pdev; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int * FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (int *,int,int *,int ) ;
 int * FUNC_3 (int,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (char*,int ,int ,struct pxa3xx_nand_info*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_5(struct pxa3xx_nand_info *VAR_6)
{
 struct platform_device *VAR_7 = VAR_6->pdev;
 int VAR_8 = VAR_3 - sizeof(struct pxa_dma_desc);

 if (VAR_5 == 0) {
  VAR_6->data_buff = FUNC_3(VAR_3, VAR_2);
  if (VAR_6->data_buff == ((void*)0))
   return -VAR_1;
  return 0;
 }

 VAR_6->data_buff = FUNC_1(&VAR_7->dev, VAR_3,
    &VAR_6->data_buff_phys, VAR_2);
 if (VAR_6->data_buff == ((void*)0)) {
  FUNC_0(&VAR_7->dev, "failed to allocate dma buffer\n");
  return -VAR_1;
 }

 VAR_6->data_buff_size = VAR_3;
 VAR_6->data_desc = (void *)VAR_6->data_buff + VAR_8;
 VAR_6->data_desc_addr = VAR_6->data_buff_phys + VAR_8;

 VAR_6->data_dma_ch = FUNC_4("nand-data", VAR_0,
    VAR_4, VAR_6);
 if (VAR_6->data_dma_ch < 0) {
  FUNC_0(&VAR_7->dev, "failed to request data dma\n");
  FUNC_2(&VAR_7->dev, VAR_6->data_buff_size,
    VAR_6->data_buff, VAR_6->data_buff_phys);
  return VAR_6->data_dma_ch;
 }

 return 0;
}
