
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int const* oob_poi; struct fsl_elbc_mtd* priv; } ;
struct mtd_info {int oobsize; int writesize; } ;
struct fsl_elbc_mtd {struct fsl_elbc_ctrl* ctrl; } ;
struct fsl_elbc_ctrl {int const* oob_poi; } ;


 int FUNC_0 (struct mtd_info*,int const*,int ) ;

__attribute__((used)) static void FUNC_1(struct mtd_info *VAR_0,
                                struct nand_chip *VAR_1,
                                const uint8_t *VAR_2)
{
 struct fsl_elbc_mtd *VAR_3 = VAR_1->priv;
 struct fsl_elbc_ctrl *VAR_4 = VAR_3->ctrl;

 FUNC_0(VAR_0, VAR_2, VAR_0->writesize);
 FUNC_0(VAR_0, VAR_1->oob_poi, VAR_0->oobsize);

 VAR_4->oob_poi = VAR_1->oob_poi;
}
