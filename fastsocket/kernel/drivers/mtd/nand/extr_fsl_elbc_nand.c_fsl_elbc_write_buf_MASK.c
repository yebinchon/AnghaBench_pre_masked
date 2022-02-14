
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nand_chip {struct fsl_elbc_mtd* priv; } ;
struct mtd_info {unsigned int writesize; unsigned int oobsize; struct nand_chip* priv; } ;
struct fsl_elbc_mtd {struct fsl_elbc_ctrl* ctrl; } ;
struct fsl_elbc_ctrl {unsigned int index; int * addr; int dev; scalar_t__ status; } ;


 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,int) ;

__attribute__((used)) static void FUNC_3(struct mtd_info *VAR_0, const u8 *VAR_1, int VAR_2)
{
 struct nand_chip *VAR_3 = VAR_0->priv;
 struct fsl_elbc_mtd *VAR_4 = VAR_3->priv;
 struct fsl_elbc_ctrl *VAR_5 = VAR_4->ctrl;
 unsigned int VAR_6 = VAR_0->writesize + VAR_0->oobsize;

 if (VAR_2 <= 0) {
  FUNC_0(VAR_5->dev, "write_buf of %d bytes", VAR_2);
  VAR_5->status = 0;
  return;
 }

 if ((unsigned int)VAR_2 > VAR_6 - VAR_5->index) {
  FUNC_0(VAR_5->dev,
          "write_buf beyond end of buffer "
          "(%d requested, %u available)\n",
          VAR_2, VAR_6 - VAR_5->index);
  VAR_2 = VAR_6 - VAR_5->index;
 }

 FUNC_2(&VAR_5->addr[VAR_5->index], VAR_1, VAR_2);







 FUNC_1(&VAR_5->addr[VAR_5->index] + VAR_2 - 1);

 VAR_5->index += VAR_2;
}
