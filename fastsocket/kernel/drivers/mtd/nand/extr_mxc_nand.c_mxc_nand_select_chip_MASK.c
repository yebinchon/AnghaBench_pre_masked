
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {struct mxc_nand_host* priv; } ;
struct mxc_nand_host {int clk_act; int clk; scalar_t__ regs; } ;
struct mtd_info {struct nand_chip* priv; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct mtd_info *VAR_3, int VAR_4)
{
 struct nand_chip *VAR_5 = VAR_3->priv;
 struct mxc_nand_host *VAR_6 = VAR_5->priv;
 switch (VAR_4) {
 case -1:

  if (VAR_6->clk_act) {
   FUNC_1(VAR_6->clk);
   VAR_6->clk_act = 0;
  }
  break;
 case 0:

  if (!VAR_6->clk_act) {
   FUNC_2(VAR_6->clk);
   VAR_6->clk_act = 1;
  }
  break;

 default:
  break;
 }
}
