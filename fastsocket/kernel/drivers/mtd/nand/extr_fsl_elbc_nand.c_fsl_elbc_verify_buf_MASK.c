
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct nand_chip {struct fsl_elbc_mtd* priv; } ;
struct mtd_info {struct nand_chip* priv; } ;
struct fsl_elbc_mtd {struct fsl_elbc_ctrl* ctrl; } ;
struct fsl_elbc_ctrl {unsigned int read_bytes; int index; scalar_t__ status; int * addr; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int,...) ;
 scalar_t__ const FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_3, const u_char *VAR_4, int VAR_5)
{
 struct nand_chip *VAR_6 = VAR_3->priv;
 struct fsl_elbc_mtd *VAR_7 = VAR_6->priv;
 struct fsl_elbc_ctrl *VAR_8 = VAR_7->ctrl;
 int VAR_9;

 if (VAR_5 < 0) {
  FUNC_0(VAR_8->dev, "write_buf of %d bytes", VAR_5);
  return -VAR_0;
 }

 if ((unsigned int)VAR_5 > VAR_8->read_bytes - VAR_8->index) {
  FUNC_0(VAR_8->dev,
          "verify_buf beyond end of buffer "
          "(%d requested, %u available)\n",
          VAR_5, VAR_8->read_bytes - VAR_8->index);

  VAR_8->index = VAR_8->read_bytes;
  return -VAR_0;
 }

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
  if (FUNC_1(&VAR_8->addr[VAR_8->index + VAR_9]) != VAR_4[VAR_9])
   break;

 VAR_8->index += VAR_5;
 return VAR_9 == VAR_5 && VAR_8->status == VAR_2 ? 0 : -VAR_1;
}
