
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nand_chip {struct fsl_elbc_mtd* priv; } ;
struct mtd_info {struct nand_chip* priv; } ;
struct fsl_elbc_mtd {struct fsl_elbc_ctrl* ctrl; } ;
struct fsl_elbc_ctrl {scalar_t__ index; scalar_t__ read_bytes; int dev; int * addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static u8 FUNC_2(struct mtd_info *VAR_1)
{
 struct nand_chip *VAR_2 = VAR_1->priv;
 struct fsl_elbc_mtd *VAR_3 = VAR_2->priv;
 struct fsl_elbc_ctrl *VAR_4 = VAR_3->ctrl;


 if (VAR_4->index < VAR_4->read_bytes)
  return FUNC_1(&VAR_4->addr[VAR_4->index++]);

 FUNC_0(VAR_4->dev, "read_byte beyond end of buffer\n");
 return VAR_0;
}
