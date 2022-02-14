
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {scalar_t__ IO_ADDR_R; scalar_t__ IO_ADDR_W; int (* cmd_ctrl ) (struct mtd_info*,int ,int) ;} ;
struct mtd_info {struct nand_chip* priv; } ;
struct fsl_upm_nand {int mchip_number; scalar_t__* mchip_offsets; scalar_t__ io_base; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mtd_info*,int ,int) ;
 struct fsl_upm_nand* FUNC_2 (struct mtd_info*) ;

__attribute__((used)) static void FUNC_3(struct mtd_info *VAR_2, int VAR_3)
{
 struct nand_chip *VAR_4 = VAR_2->priv;
 struct fsl_upm_nand *VAR_5 = FUNC_2(VAR_2);

 if (VAR_3 == -1) {
  VAR_4->cmd_ctrl(VAR_2, VAR_0, 0 | VAR_1);
 } else if (VAR_3 >= 0) {
  VAR_5->mchip_number = VAR_3;
  VAR_4->IO_ADDR_R = VAR_5->io_base + VAR_5->mchip_offsets[VAR_3];
  VAR_4->IO_ADDR_W = VAR_4->IO_ADDR_R;
 } else {
  FUNC_0();
 }
}
