
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_char ;
struct nand_chip {struct mxc_nand_host* priv; } ;
struct mxc_nand_host {scalar_t__ regs; } ;
struct mtd_info {struct nand_chip* priv; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_2, u_char *VAR_3,
     u_char *VAR_4, u_char *VAR_5)
{
 struct nand_chip *VAR_6 = VAR_2->priv;
 struct mxc_nand_host *VAR_7 = VAR_6->priv;






 uint16_t VAR_8 = FUNC_1(VAR_7->regs + VAR_1);

 if (((VAR_8 & 0x3) == 2) || ((VAR_8 >> 2) == 2)) {
  FUNC_0(VAR_0,
        "MXC_NAND: HWECC uncorrectable 2-bit ECC error\n");
  return -1;
 }

 return 0;
}
