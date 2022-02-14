
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nand_chip {struct fsl_elbc_mtd* priv; } ;
struct mtd_info {struct nand_chip* priv; } ;
struct fsl_elbc_mtd {struct fsl_elbc_ctrl* ctrl; } ;
struct fsl_elbc_ctrl {size_t index; int dev; int * addr; scalar_t__ read_bytes; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mtd_info *VAR_0, u8 *VAR_1, int VAR_2)
{
 struct nand_chip *VAR_3 = VAR_0->priv;
 struct fsl_elbc_mtd *VAR_4 = VAR_3->priv;
 struct fsl_elbc_ctrl *VAR_5 = VAR_4->ctrl;
 int VAR_6;

 if (VAR_2 < 0)
  return;

 VAR_6 = FUNC_2((unsigned int)VAR_2, VAR_5->read_bytes - VAR_5->index);
 FUNC_1(VAR_1, &VAR_5->addr[VAR_5->index], VAR_6);
 VAR_5->index += VAR_6;

 if (VAR_2 > VAR_6)
  FUNC_0(VAR_5->dev,
          "read_buf beyond end of buffer "
          "(%d requested, %d available)\n",
          VAR_2, VAR_6);
}
