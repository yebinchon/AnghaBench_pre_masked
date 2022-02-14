
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s3c2410_nand_mtd {TYPE_2__* set; struct s3c2410_nand_info* info; } ;
struct s3c2410_nand_info {unsigned long sel_bit; int clk; int sel_reg; TYPE_1__* platform; int device; } ;
struct nand_chip {struct s3c2410_nand_mtd* priv; } ;
struct mtd_info {struct nand_chip* priv; } ;
struct TYPE_4__ {int nr_chips; } ;
struct TYPE_3__ {int (* select_chip ) (TYPE_2__*,int) ;} ;


 scalar_t__ FUNC_0 (struct s3c2410_nand_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_7(struct mtd_info *VAR_0, int VAR_1)
{
 struct s3c2410_nand_info *VAR_2;
 struct s3c2410_nand_mtd *VAR_3;
 struct nand_chip *VAR_4 = VAR_0->priv;
 unsigned long VAR_5;

 VAR_3 = VAR_4->priv;
 VAR_2 = VAR_3->info;

 if (VAR_1 != -1 && FUNC_0(VAR_2))
  FUNC_2(VAR_2->clk);

 VAR_5 = FUNC_4(VAR_2->sel_reg);

 if (VAR_1 == -1) {
  VAR_5 |= VAR_2->sel_bit;
 } else {
  if (VAR_3->set != ((void*)0) && VAR_1 > VAR_3->set->nr_chips) {
   FUNC_3(VAR_2->device, "invalid chip %d\n", VAR_1);
   return;
  }

  if (VAR_2->platform != ((void*)0)) {
   if (VAR_2->platform->select_chip != ((void*)0))
    (VAR_2->platform->select_chip) (VAR_3->set, VAR_1);
  }

  VAR_5 &= ~VAR_2->sel_bit;
 }

 FUNC_6(VAR_5, VAR_2->sel_reg);

 if (VAR_1 == -1 && FUNC_0(VAR_2))
  FUNC_1(VAR_2->clk);
}
